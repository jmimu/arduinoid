#ifndef VIDEO_JM_H
#define VIDEO_JM_H

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


/*
  Video signal generation
  
  4 gray levels
  pin 7 : sync 1000ohm
  pin 8 : signal low : 1428 ohm
  pin 9 : signal heigh : 675 ohm
    => both to video signal
  
  input : pin 2 and pin 3

 */

#define SYNC_DDR DDRD
#define SYNC_PORT PORTD
#define SYNC_PIN PD7

#define SIG_1_DDR DDRB
#define SIG_1_PORT PORTB
#define SIG_1_PIN PB0
#define SIG_2_DDR DDRB
#define SIG_2_PORT PORTB
#define SIG_2_PIN PB1

#define INPUT_DDR DDRD
#define INPUT_PORT PIND //pourquoi pas PORTD?
#define INPUT_PIN_0 PD2
#define INPUT_PIN_1 PD3


//colors
#define _BLACK  0x00
#define _GRAY_L  0x01
#define _GRAY_H  0x02
#define _WHITE  0x03

#define _LONG_SYNC 28
#define _LONG_SYNC_DELAI 2
#define _SHORT_SYNC 2
#define _SHORT_SYNC_DELAI 30

#define _NB_BYTES_LINE 26 //1 octet = 4 pix => 104 col
#define _NB_LIGNES 67 // 76 = 304/4  => pixels carres pour 104 en hz (ecran 4/3) -7 parce qu'on voit pas les 7 permieres lignes -2 parce qu'on ne voit pas les 2 dernieres



void set_pixel(unsigned char x, unsigned char y, unsigned char c);//0<=x<104   0<=y<76   0<=c<4
unsigned char get_pixel(unsigned char x, unsigned char y);//0<=x<104   0<=y<67   0<=return<4
void cls();
void cls_some_lines(int y1,int y2);
void draw_tile(unsigned char x, unsigned char y, signed char i);




#endif // VIDEO_JM_H
