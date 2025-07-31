#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include "list.h"
#include "config.h"
#include "network.h"
#include "layer.h"
#include "activation_function.h"
#include "dummy_head_layer.h"
#include "convolutional_layer.h"
#include "average_pooling_layer.h"
#include "fully_connected_layer.h"
#include "file_read.h"
#include "./sdspidriver/sdspidrv.h"

#define SDSPI_ADDR 0xC2000000

typedef float float_t;

int cnn_evaluate(network *nn, float_t *image, int image_size)
{
    layer_base *output_layer;
    float_t* cnn_outputs;
	float_t max;
	int idx, max_idx;

    // Perform a single-image OOCR inference.
    predict(nn, image, image_size);
    output_layer = list_last_entry(&nn->layers, layer_base, list);
    cnn_outputs = output_layer->out_ptr_;

	// Compute the index to the maximal neuron value of the output layer.
	max = -1.0, max_idx = 0;
	for (idx = 0; idx < 10; idx++)
	{
	    if (max < cnn_outputs[idx])
	    {
	        max_idx = idx;
	        max = cnn_outputs[idx];
	    }
	}

	return max_idx;
}

int main(){

    // sdcard initalize
    printf("Uartboot Test\n");
    printf("hello world\n");
    return 0;
}

/*
int main()
{
    // check the printf is correct;
    printf("In the main function.\n");

    //  init the sdcard 
    SDSPI *sdhw = (SDSPI *)SDSPI_ADDR;
    SDSPIDRV *sdcard;
    sdcard = sdspi_init(sdhw);
    
    // printf("SD Card initialized.\n");
    char wbuf[512], rbuf[512];
    char strbuf[512][2];  

    // for (int i = 0; i < 512; i++) wbuf[i] = i & 0xFF;
    // if (sdspi_write(sdcard, 0, 1, wbuf) != 0) {
    //     printf("Write failed.\n");
    //     exit(0);
    // }
    // memset(rbuf, 0, 512);

    sdspi_read(sdcard, 0, 1, rbuf);

    for (int i = 0; i < 512; i++) {
        printf("%d\n", rbuf[i]);
    }

    printf("Read/Write test passed.\n");
    exit(0);
}*/