#include "breakout.h"



//blocks[y][x]  //-1 = nothing
signed char blocks[8][10]={{3,3,3,3,3,3,3,3,3,3},{3,3,3,3,3,3,3,3,3,3},
{2,2,2,2,2,2,2,2,2,2},{2,2,2,2,2,2,2,2,2,2},
{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},
{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};


void contact_with_all_blocks(unsigned int x,unsigned int y)
{
    int i,j;
    for (j=0;j<8;j++)
        for (i=0;i<10;i++)
            draw_tile(x+(i<<3),y+(j<<2),blocks[j][i]);
    
}

void gameover_screen()
{
}


void draw_all_blocks(unsigned int x,unsigned int y)
{
    int i,j;
    for (j=0;j<8;j++)
        for (i=0;i<10;i++)
            draw_tile(x+(i<<3),y+(j<<2),blocks[j][i]);
    
}
