#ifndef BREAKOUT_H
#define BREAKOUT_H

#include "videoJM.h"

#define BLOCKS_X 12
#define BLOCKS_Y 8
#define BALL_W 2
#define BALL_H 2


extern signed char blocks[8][10];


void gameover_screen();


void contact_with_all_blocks(unsigned int x,unsigned int y);
void draw_all_blocks(unsigned int x,unsigned int y);








#endif // BREAKOUT_H
