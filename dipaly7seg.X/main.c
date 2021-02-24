/*
 * File:   main.c
 * Author: 20185087
 *
 * Created on 24 de Fevereiro de 2021, 14:08
 */

#include "delay.h"
#include "config.h"
#include <xc.h>
#include "display7seg.h"


char vetor[16] = { 0x3F, 0x06, 0x5b, 0x4F,  
                   0x66, 0x6D, 0x7D, 0x07, 
                   0x7F, 0x6F, 0x77, 0x7C, 
                   0x39, 0x5E, 0x79, 0x71 };

void main(void) 
{
    int cont = 0;
    diplay7seg_init();
    
    while( 1 )
    {
        display7seg( vetor[cont] );        
        delay(1000);              
        cont++;
        if( cont >= 16 )
            cont = 0;
    }
}
