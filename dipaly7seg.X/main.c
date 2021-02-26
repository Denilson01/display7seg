/*
 * File:   main.c
 * Author: 20185087
 *
 * Created on 24 de Fevereiro de 2021, 14:08
 */

#include "delay.h"
#include "botoes.h"
#include "config.h"
#include <xc.h>
#include "display7seg.h"


void main(void) 
{
    int cont = 0;
    diplay7seg_init();
    
    while( 1 )
    {
        if(botao_incrementar() == 1 && botao_decrementar() == 0)
        {       
            display7seg( cont );        
            delay(1000);              
            cont++;
            if( cont >= 16 )
                cont = 0;
        }
   
        if(botao_decrementar() == 1 && botao_incrementar() == 0)
            
        {   
            display7seg( cont );        
            delay(1000);              
            cont--;
            if( cont <= 0 )
                cont = 16;
        }
                   
    }
    
}
