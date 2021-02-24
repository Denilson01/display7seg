/*
 * File:   display7seg.c
 * Author: 20185087
 *
 * Created on 24 de Fevereiro de 2021, 15:44
 */


#include <xc.h>

void diplay7seg_init( void )
{
    TRISD = 0x00;
    PORTD = 0x00;
}

void display7seg(int c)
{
    PORTD = c;
}
