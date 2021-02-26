/*
 * File:   botoes.c
 * Author: 20185087
 *
 * Created on 26 de Fevereiro de 2021, 14:59
 */


#include <xc.h>



int botao_incrementar( void )
{
    return(PORTDbits.RD0);
}

int botao_decrementar( void )
{
    return(PORTDbits.RD1);
}