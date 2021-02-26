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
    botoes_init();
    char estado = 1;
   
    while(1)
    {
        switch( estado )
        {
            case 1:
                    if(botao_incrementar() == 1)
                        estado = 2;
                    break;

            case 2:
                    if(botao_incrementar()== 0)
                        estado = 3;
                    break;

            case 3: 
                    ++cont;
                    estado = 0;
                    break;                                
               
            display7seg(cont);
            if(cont >= 15)
                cont = 0;
            if(cont <= 0)
                cont = 15;
  
        }
    }
}