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
            case 0:
            
                estado = 1;
                break;
                
            case 1:
                    if(botao_incrementar() == 1)
                        estado = 2;
                    if(botao_decrementar() == 1)
                        estado = 5;
                    break;

            case 2:
                    if(botao_incrementar()== 0)
                        estado = 3;
                    break;

            case 3: 
                    ++cont;
                    estado = 4;
                    break;                                
               
            case 4:       
                    display7seg(cont);
                    if(cont > 9)
                    cont = 0;
                    else
                    estado = 1;
                    break;

            case 5:
                if(botao_decrementar() == 0)
                    estado = 6;
                break;
            case 6:
                    --cont;
                    estado = 7;
                    break;
            case 7:
                    display7seg(cont);
                    if(cont < 0)
                    cont = 9;
                    else
                    estado = 1;
                    break;
                
                
                
                
                              
        }
    }
}