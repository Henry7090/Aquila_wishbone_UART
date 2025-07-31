// =============================================================================
//  Program : uart.c
//  Author  : Chun-Jen Tsai
//  Date    : Dec/09/2019
// -----------------------------------------------------------------------------
//  Description:
//  This is the minimal I/O routines for the UART device for aquila.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  None.
// -----------------------------------------------------------------------------
//  License information:
//
//  This software is released under the BSD-3-Clause Licence,
//  see https://opensource.org/licenses/BSD-3-Clause for details.
//  In the following license statements, "software" refers to the
//  "source code" of the complete hardware/software system.
//
//  Copyright 2019,
//                    Embedded Intelligent Systems Lab (EISL)
//                    Deparment of Computer Science
//                    National Chiao Tung Uniersity
//                    Hsinchu, Taiwan.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  3. Neither the name of the copyright holder nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
// =============================================================================

#include "uart.h"

#define uart_setup  ((unsigned int volatile *) 0xC0000000)
#define uart_status ((unsigned int volatile *) 0xC0000004)
#define uart_rxfifo ((unsigned int volatile *) 0xC0000008)
#define uart_txfifo ((unsigned int volatile *) 0xC000000c)

// Declare the axi_uartlite status register control bits.
#define UART_TX_FIFO_Z_BIT (1 << 16)
#define UART_RX_FIFO_Z_BIT (1 << 0)
#define uart_rxfifo_E_BIT (1 << 12)

unsigned char inbyte(void)
{
    if (*uart_rxfifo & uart_rxfifo_E_BIT) {
        printf("overflow\n");
    }
    while ((*uart_status & UART_RX_FIFO_Z_BIT) == 0) /* wait */;
    return (unsigned char) *uart_rxfifo;
}

void outbyte(unsigned char c)
{
    
    // for(int i = 0;i<10000;i++){}
    if (c == '\n')
    {
        while (!(*uart_status & UART_TX_FIFO_Z_BIT)) /* wait */;
        *uart_txfifo = (unsigned char) '\r';
    }

    while (!(*uart_status & UART_TX_FIFO_Z_BIT)) /* wait */;
    *uart_txfifo = (unsigned char) c;

}
