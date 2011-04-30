#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


#include "breakout.h"




int main()
{
  //interruptions timer
    TCCR1B=0;//reinit les 3 registres config de TCNT1 (timer/counter1)
    TCCR1A=0;
    TCCR1C=0;
    OCR1A = 0x100;//temps de comparaison A pour TCNT1
    //OCR1B = 0x4ff;//temps de comparaison B pour TCNT1
    TCCR1B|=(0<<CS12)|(1<<CS11)|(0<<CS10);//prescaleur : 0 1 0 => 8 => 65535/(16000000/16) = 1/16s, 1 sur le compteur = 0.5us
    TIMSK1|=(1<<OCIE1A)|(0<<OCIE1B)|(0<<TOIE1);//on veut des interruptions pour temps A seulement
    //Enable Global Interrupts
    sei();  
  
    INPUT_DDR=0;
    SYNC_DDR |= _BV(SYNC_PIN);
    SIG_1_DDR |= _BV(SIG_1_PIN);
    SIG_2_DDR |= _BV(SIG_2_PIN);

    //prepare input
    /*INPUT_DDR &= ~_BV(INPUT_PIN_0);
    INPUT_DDR &= ~_BV(INPUT_PIN_1);*/

    //unsigned char c=0;
    int i,j;
    int x=0;
    int y=0;
    int x_old=0;
    int y_old=0;
    int vx=1;
    int vy=1;
    int x_player=20;
    int y_player=55;
    unsigned char ball_previous_pix_color=0;
    int nb_lives=2;
    int x_tmp,y_tmp;

    cls();
    draw_all_blocks(BLOCKS_X,BLOCKS_Y);
    while(1)
    {
        if ((INPUT_PORT & _BV(INPUT_PIN_0))) x_player-=2;
        if ((INPUT_PORT & _BV(INPUT_PIN_1))) x_player+=2;

        //ball
        x_old=x;
        y_old=y;
        x=x+vx;
        y=y+vy;

        for (j=0;j<8;j++)
            for (i=0;i<10;i++)
            {
                /*if ((blocks[j][i]>=0) && (x>=(BLOCKS_X+(i<<3))) && (x<(BLOCKS_X+(i<<3))+8) && (y>=(BLOCKS_Y+(j<<2))) && (y<(BLOCKS_Y+(j<<2))+4))
                {
                    vx=-vx;vy=-vy;blocks[j][i]--;
                }*/
                if ((blocks[j][i]>=0) && (vx>0) && (x==(BLOCKS_X+(i<<3)-BALL_W+1)) && (y>=(BLOCKS_Y+(j<<2)-BALL_H-1)) && (y<(BLOCKS_Y+(j<<2))+4))
                {
                    vx=-1;blocks[j][i]--;draw_tile(BLOCKS_X+(i<<3),BLOCKS_Y+(j<<2),blocks[j][i]);x=x+vx;
                }
                if ((blocks[j][i]>=0) && (vx<0) && (x==(BLOCKS_X+(i<<3))+8) && (y>=(BLOCKS_Y+(j<<2)-BALL_H-1)) && (y<(BLOCKS_Y+(j<<2))+4))
                {
                    vx=1;blocks[j][i]--;draw_tile(BLOCKS_X+(i<<3),BLOCKS_Y+(j<<2),blocks[j][i]);x=x+vx;
                }
                if ((blocks[j][i]>=0) && (vy>0) && (x>=(BLOCKS_X+(i<<3)-BALL_W+1)) && (x<(BLOCKS_X+(i<<3))+8) && (y==(BLOCKS_Y+(j<<2)-BALL_H-1)) )
                {
                    vy=-1;blocks[j][i]--;draw_tile(BLOCKS_X+(i<<3),BLOCKS_Y+(j<<2),blocks[j][i]);y=y+vy;
                }
                if ((blocks[j][i]>=0) && (vy<0) && (x>=(BLOCKS_X+(i<<3)-BALL_W+1)) && (x<(BLOCKS_X+(i<<3))+8) && (y==(BLOCKS_Y+(j<<2))+4))
                {
                    vy=1;blocks[j][i]--;draw_tile(BLOCKS_X+(i<<3),BLOCKS_Y+(j<<2),blocks[j][i]);y=y+vy;
                }
            }
        if ((x>=x_player) && (x<x_player+8*(nb_lives+2)) && (y==y_player) && (vy>0))
        {
            vy=-1;y=y+vy;
        }
        
        if (x>=96) {vx=-vx;x=95;}
        if (x<8)    {vx=-vx;x=8;}
        if (y>=64)  {vy=-vy;y=63;draw_all_blocks(BLOCKS_X,BLOCKS_Y);nb_lives--;if (nb_lives<0) nb_lives=3;gameover_screen();}
        if (y<4)    {vy=-vy;y=4;}
            
        if (x_player>=96-8*(nb_lives+1)-4) {x_player=96-1-8*(nb_lives+1)-4;}
        if (x_player<8)    {x_player=8;}

        //cls_some_lines(y_player,y_player+3);
        //a chaque balle perdu on diminue la taille de la raquette !
        draw_tile( x_player-8,y_player,-1);
        draw_tile( x_player,y_player,4);
        x_tmp=x_player+8;
        for (i=0;i<nb_lives;i++)
        {
            draw_tile( x_tmp,y_player,5);
            x_tmp+=8;
        }
        draw_tile( x_tmp,y_player,6);
        draw_tile( x_tmp+8,y_player,-1);


        //set_pixel(x_old,y_old,_BLACK);
        //set_pixel(x,y,_WHITE);
        
        set_pixel(x_old-1,y_old,_BLACK);
        set_pixel(x_old,y_old-1,_BLACK);
        set_pixel(x_old+1,y_old,_BLACK);
        set_pixel(x_old,y_old+1,_BLACK);
        set_pixel(x_old,y_old,_BLACK);
        set_pixel(x-1,y,_WHITE);
        set_pixel(x,y-1,_WHITE);
        set_pixel(x+1,y,_GRAY_L);
        set_pixel(x,y+1,_GRAY_L);
        set_pixel(x,y,_GRAY_H);

        //_delay_us(500);

    }

    return(0);
}



