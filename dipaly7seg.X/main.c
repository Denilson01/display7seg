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
    char cont = 0;
    diplay7seg_init();
    botoes_init();
    char estado = 1;
   
    while(1)
    {
            switch( estado )
            {
                            case 1:
                                if(botao_incrementar() == 1)
                                    estado = 1;
                                break;

                            case 2:
                                if(botao_incrementar()== 0)
                                    estado = 2;
                                break;

                            case 3: 
                                

            }
    }
}
