
SHELL := /bin/bash
#ifeq ($(VERILATOR_ROOT),)
VERILATOR ?= verilator
#else
#export VERILATOR_ROOT
#VERILATOR = $(VERILATOR_ROOT)/bin/verilator
#endif
VERILATOR_THREAD=1

CUR_DIR=$(shell pwd)

CPPFLAGS = -std=c++14 -I$(VDIR) `pkg-config --cflags verilator`

AQUILA_CORE_SRC=../hw/ip_repo/aquila/hdl/core_rtl/*v 

AQUILA_INCLUDE_PATH=../hw/ip_repo/aquila/hdl/core_rtl

CORE_VER_SRC=./vsrc/*v \
			 ./vsrc/*.sv

verilator_flag=--cc --assert --clk cfg_dev_aclk  -O3  -Wno-MODDUP
verilator_lint_flag=--lint-only  -Wno-MODDUP
TORTURE_CASE=10

.PHONY: core_lint
core_lint:
	$(VERILATOR) -cc $(AQUILA_CORE_SRC) $(CORE_VER_SRC) \
	-I$(AQUILA_INCLUDE_PATH) \
	--unroll-count 999999 \
	--top-module aquila_testharness \
	-Wno-lint -Wno-style -Wno-fatal \
	--lint-only 2>&1 | tee -a build.log

.PHONY: core_versyn
core_versyn:
	$(VERILATOR) $(verilator_flag) $(AQUILA_CORE_SRC) $(CORE_VER_SRC) \
	-I$(AQUILA_INCLUDE_PATH) \
	--unroll-count 999999 \
	--top-module aquila_testharness \
	-Wno-lint -Wno-style -Wno-fatal \
	-Mdir core_obj_dir \
	2>&1 | tee -a build.log

.PHONY: core_verilate
.ONESHELL:
core_verilate:
	$(VERILATOR) $(verilator_flag) $(AQUILA_CORE_SRC) $(CORE_VER_SRC) \
	-I$(AQUILA_INCLUDE_PATH) \
	--unroll-count 999999 \
	-Wno-lint -Wno-style -Wno-fatal \
	-Mdir core_obj_dir \
	-CFLAGS $(CPPFLAGS) \
	-LDFLAGS "-lpthread" \
	--top-module aquila_testharness  --trace-fst --trace-max-array 3000 \
	--trace-max-width 2560  --exe  csrc/aquila_core_tb.cpp csrc/sim_mem.cpp csrc/sdspisim.cpp csrc/uartsim.cpp
	make -j -C core_obj_dir -f Vaquila_testharness.mk Vaquila_testharness

.PHONY: build_riscv_tests
.ONESHELL:
build_riscv_tests:
	if [ ! -d "tmp" ]; then mkdir tmp; fi;
	cd tmp
	if [ -d "riscv-tests" ]; then rm -rf riscv-tests; fi;
	git clone https://github.com/riscv/riscv-tests
	cd riscv-tests
	rmdir env
	cp -r ../../riscv-test-env env
	autoconf
	./configure --prefix=$(CUR_DIR)/tmp/target
	make
	make install

.PHONY: run_riscv_ui_p_tests
.ONESHELL:
run_riscv_ui_p_tests:
	cd ci
	./run_rv_test.sh riscv32ui-p.list

.PHONY: run_riscv_ui_p_tests
.ONESHELL:
run_riscv_um_p_tests:
	cd ci
	./run_rv_test.sh riscv32um-p.list

.PHONY: run_riscv_ua_p_tests
.ONESHELL:
run_riscv_ua_p_tests:
	cd ci
	./run_rv_test.sh riscv32ua-p.list

.PHONY: run_riscv_ui_tests
.ONESHELL:
run_riscv_ui_tests: run_riscv_ui_p_tests run_riscv_um_p_tests

.PHONY: build_riscv_torture
.ONESHELL:
build_riscv_torture:
	if [ ! -d "tmp" ];then  mkdir tmp; fi;
	cd tmp
	if [ -d "riscv-torture" ]; then rm -rf riscv-torture; fi;
	git clone --recursive https://github.com/Daichou/riscv-torture
	cd riscv-torture
	make gencase NUM_CASE=$(TORTURE_CASE)
	cd output
	make
	ls | grep ".S" | sed 's/\.S//' > torture.list

.PHONY: run_riscv_torture
.ONESHELL:
run_riscv_torture:
	cd ci
	./run_rv_torture.sh

.PHONY: clean
clean:
	rm -rf core_obj_dir
	rm -rf full_obj_dir
	rm -rf tmp
