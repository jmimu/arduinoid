#include "videoJM.h"


//byte memVideo[_NB_BYTES_LINE*_NB_LIGNES];
unsigned char memVideo[_NB_BYTES_LINE*_NB_LIGNES]={175,214,26,75,175,214,91,90,175,214,26,75,175,214,26,75,175,214,91,90,175,214,26,75,175,214,
191,214,31,75,191,214,111,86,191,214,31,75,191,214,31,75,191,214,111,86,191,214,31,75,191,214,
175,214,95,44,64,214,111,93,175,214,95,44,64,214,95,44,64,214,111,93,175,214,95,44,64,214,
191,150,107,44,63,149,107,93,191,150,107,44,63,150,107,44,63,150,107,93,191,150,107,44,63,150,
191,153,106,204,245,152,106,107,191,153,106,204,245,152,106,204,245,152,106,107,191,153,106,204,245,152,
175,89,90,64,222,83,90,107,175,89,90,64,222,83,90,64,222,83,90,107,175,89,90,64,222,83,
109,101,89,33,234,98,89,107,109,101,89,33,234,99,89,33,234,99,89,107,109,101,89,33,234,99,
217,102,110,177,0,100,110,111,217,102,110,177,0,100,110,177,0,100,110,111,217,102,110,177,0,100,
245,154,0,176,84,153,105,93,245,154,0,176,84,153,0,176,84,153,105,93,245,154,0,176,84,153,
245,27,255,52,245,155,217,181,245,27,255,52,245,27,255,52,245,155,217,181,245,27,255,52,245,155,
246,202,151,50,245,154,245,245,246,202,151,50,245,202,151,50,245,154,245,245,246,202,151,50,245,154,
246,139,174,60,245,155,245,246,246,203,174,60,245,203,173,60,245,155,245,246,246,203,173,60,245,155,
150,74,47,44,153,106,245,246,150,74,47,44,153,74,47,44,153,106,245,246,150,74,47,44,153,106,
102,138,2,75,101,106,183,166,102,138,3,75,101,138,2,75,101,106,183,166,102,138,2,75,101,106,
109,6,84,75,109,214,155,150,109,6,84,75,109,6,84,75,109,214,155,150,109,6,84,75,109,214,
189,213,155,90,189,213,155,90,189,213,155,90,189,213,155,90,189,213,155,90,189,213,155,90,189,213,
255,214,91,90,255,214,91,90,255,214,91,90,255,214,91,90,255,214,91,90,255,214,91,90,255,214,
255,214,111,86,255,214,111,86,255,214,111,86,255,214,111,86,255,214,111,86,255,214,111,86,255,214,
255,214,111,93,255,214,111,93,255,214,111,93,255,214,111,93,255,214,111,93,255,214,111,93,255,214,
191,150,107,105,191,150,107,105,191,150,107,105,191,150,107,105,191,150,107,105,191,150,107,105,191,150,
190,149,106,107,190,149,106,107,190,149,106,107,190,149,106,107,190,149,106,107,190,149,106,107,190,149,
174,85,90,107,174,85,90,107,174,85,90,107,174,85,90,107,174,85,90,107,174,85,90,107,174,85,
105,101,89,106,105,101,89,106,105,101,89,106,105,101,89,106,105,101,89,106,105,101,89,106,105,101,
217,102,85,106,217,102,85,106,217,102,85,106,217,102,85,106,217,102,17,104,192,102,85,106,217,102,
245,90,90,89,245,90,90,89,245,90,90,89,245,90,90,89,245,90,204,8,58,64,90,89,245,90,
181,154,218,181,181,154,218,181,181,154,218,181,181,154,218,181,181,26,178,160,130,58,218,181,181,154,
189,154,246,182,189,154,246,182,189,154,246,182,189,154,246,182,189,2,60,170,170,10,240,182,189,154,
189,90,246,166,189,90,246,166,189,90,246,166,189,90,246,166,189,168,42,168,171,171,202,166,189,90,
253,90,182,86,253,90,182,86,253,90,182,86,253,90,182,86,189,8,40,162,170,170,130,86,253,90,
246,85,149,86,246,85,149,86,246,85,149,86,246,85,149,86,36,194,136,34,160,170,42,86,246,85,
87,93,95,237,87,93,95,237,87,93,95,237,87,93,95,45,130,194,168,130,14,170,11,237,87,93,
255,255,255,255,255,255,255,255,255,255,95,85,85,85,85,133,170,2,170,40,143,160,234,84,85,85,
255,255,255,255,255,255,255,255,255,255,149,150,86,149,86,5,138,168,160,40,160,139,42,148,86,149,
255,255,251,255,255,255,251,255,255,127,85,85,85,85,85,133,32,0,138,66,193,131,170,84,85,85,
255,191,187,255,255,191,187,255,255,127,86,85,149,86,149,6,5,140,10,82,21,40,186,82,149,86,
255,255,255,255,0,255,255,255,255,95,85,85,85,85,85,85,1,42,16,82,21,62,42,83,85,85,
254,255,255,63,0,240,63,255,254,95,85,85,85,85,85,85,161,64,85,84,85,252,168,84,85,85,
190,255,255,15,42,0,195,239,190,95,101,101,85,101,85,101,5,101,85,101,85,56,168,98,85,101,
255,255,255,143,171,0,252,243,255,95,85,85,85,85,85,85,85,85,85,85,85,128,40,83,85,85,
255,255,255,143,47,0,0,252,255,95,85,85,85,85,69,80,80,64,1,85,85,232,168,84,85,85,
255,255,255,15,170,192,0,255,255,159,86,149,82,149,34,19,14,58,232,148,86,60,168,148,86,149,
255,255,251,63,0,0,195,255,255,95,85,21,72,85,204,130,162,138,42,2,85,128,184,82,85,85,
255,191,187,255,192,191,184,255,255,95,149,134,138,2,240,232,170,171,170,170,16,42,42,83,149,86,
255,255,255,255,255,255,255,255,255,95,85,133,42,168,42,168,170,170,174,170,10,63,170,84,85,85,
254,255,255,255,254,255,255,255,254,95,85,5,170,10,40,162,10,128,170,170,139,15,170,84,85,85,
190,255,255,239,190,255,255,239,190,111,85,197,136,194,163,34,48,62,160,174,10,32,46,101,85,101,
255,255,255,255,255,255,255,255,255,95,85,21,33,130,168,2,58,62,14,168,130,138,42,85,85,85,
255,255,95,85,85,85,85,85,85,85,85,85,65,8,170,40,142,47,62,162,242,143,170,84,85,85,
255,255,149,150,86,149,86,149,86,149,86,149,86,161,160,56,0,128,63,142,226,162,202,148,86,149,
255,127,85,85,85,85,85,85,85,85,85,85,85,0,138,2,85,21,128,63,2,168,11,85,85,85,
255,127,86,85,149,86,149,86,149,86,149,86,21,162,10,82,149,86,21,60,168,162,138,86,149,86,
255,95,85,85,85,85,85,85,85,85,85,85,1,40,16,82,85,85,85,129,252,162,42,85,85,85,
254,95,85,85,85,85,85,85,85,85,85,85,33,74,85,84,85,85,85,133,188,168,50,85,85,85,
190,95,101,101,85,101,85,101,85,101,85,101,133,98,85,101,85,101,85,37,0,234,74,101,85,101,
255,95,85,85,85,85,85,85,85,85,85,85,21,84,85,85,85,85,85,21,170,168,74,85,85,85,
255,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,21,255,168,74,85,85,85,
255,159,86,149,86,149,86,149,86,149,86,149,86,149,86,149,86,149,86,21,190,168,42,149,86,149,
255,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,21,0,234,42,85,85,85,
255,95,149,86,149,86,149,86,149,86,149,86,149,86,149,86,149,86,149,134,170,168,202,84,149,86,
255,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,197,255,168,42,85,85,85,
254,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,197,47,170,170,80,85,85,
190,111,85,101,85,101,85,101,85,101,85,101,85,101,85,101,85,101,85,5,0,174,170,74,85,101,
255,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,133,170,168,170,34,85,85,
255,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,197,191,168,174,10,85,85,
255,159,86,149,86,149,86,149,86,149,86,149,86,149,86,149,86,149,86,197,63,168,170,170,80,149,
255,95,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,5,128,168,170,170,10,84,
255,95,149,86,149,86,149,86,149,86,149,86,149,86,149,86,149,86,149,22,234,168,170,170,170,2};

unsigned char tiles[8*7]={0,0, 84, 5,169,27, 84, 5,
0,0, 85,42, 90,41,106,21,
0,0,223,55,247,61,125,31,
0,0, 94,45,243,51, 94,45,
148,169,221,253,149,169,84,85, //begin player
170,170,255,255,170,170,85,85,
106,22,127,119,106,86,85,21};
//tiles corresponds to bricks: 8*4 pixels => 2*4 bytes



unsigned char tmp,tmp2;
int index_from, index_to;//for one line, go from to
int ligne;

unsigned char where_in_time_int=0;//decompose image drawing 


void init_video()
{
  //interruptions timer
    TCCR0B=0;//reinit les 3 registres config de TCNT0 (timer/counter0)
    TCCR0A=0;
    OCR0A = 0x10;//temps de comparaison A pour TCNT0
    TCCR0B|=(0<<CS02)|(1<<CS01)|(0<<CS00);//prescaleur : 0 1 0 => 8 => 256/(16000000/16) = 0.256ms, 1 sur le compteur = 0.5us
    TIMSK0|=(1<<OCIE0A)|(0<<OCIE0B)|(0<<TOIE0);//on veut des interruptions pour temps A seulement
    //Enable Global Interrupts
    sei();  
  
    INPUT_DDR=0;
    SYNC_DDR |= _BV(SYNC_PIN);
    SIG_1_DDR |= _BV(SIG_1_PIN);
    SIG_2_DDR |= _BV(SIG_2_PIN);
}



//en vrai y de 7 a 74
void set_pixel(unsigned char x, unsigned char y, unsigned char c)//0<=x<104   0<=y<76   0<=c<4
{
    int x_=x>>2;
    int y_=y;
    int i=y_*_NB_BYTES_LINE+x_;
    //memVideo[i]=c;
    if (x%4==0)
    {
        memVideo[i]&=0xFC;
        memVideo[i]|=c%4;
    }
    if (x%4==1)
    {
        memVideo[i]&=0xF3;
        memVideo[i]|=(c%4)<<2;
    }
    if (x%4==2)
    {
        memVideo[i]&=0xCF;
        memVideo[i]|=(c%4)<<4;
    }
    if (x%4==3)
    {
        memVideo[i]&=0x3F;
        memVideo[i]|=(c%4)<<6;
    }
}


unsigned char get_pixel(unsigned char x, unsigned char y)//0<=x<104   0<=y<67   0<=return<4
{
    unsigned char c;
    int x_=x>>2;
    int y_=y;
    int i=y_*_NB_BYTES_LINE+x_;
    //memVideo[i]=c;
    if (x%4==0)
    {
        c = memVideo[i] & 0x03;
    }
    else if (x%4==1)
    {
        c = memVideo[i] & 0x0C;
        c=c>>2;
    }
    else if (x%4==2)
    {
        c = memVideo[i] & 0x30;
        c=c>>4;
    }
    else
    {
        c = memVideo[i] & 0xC0;
        c=c>>6;
    }
    return(c);
}

void cls()
{
    int i;
    for (i=0;i<_NB_BYTES_LINE*_NB_LIGNES;i++)
    {
        memVideo[i]=0;
    }
}
void cls_some_lines(int y1,int y2)
{
    int i,j,y;
    j=y1*_NB_BYTES_LINE;
    for (y=y1;y<=y2;y++)
    {
        for (i=0;i<_NB_BYTES_LINE;i++)
        {
            memVideo[j]=0;
            j++;
        }
        //j+=_NB_BYTES_LINE;
    }
}

// draw a tile 8*4 pix at coords x, y, x=4*x_
// i = type of brick (-1 => black)
void draw_tile(unsigned char x, unsigned char y, signed char i)
{
    unsigned char x_=x>>2;
    int video_index=y*_NB_BYTES_LINE+x_;
    if (i>=0)
    {
        int tile_index=i<<3;
        memVideo[video_index]=tiles[tile_index];
        video_index++;tile_index++;
        memVideo[video_index]=tiles[tile_index];
        video_index+=_NB_BYTES_LINE-1;tile_index++;
        memVideo[video_index]=tiles[tile_index];
        video_index++;tile_index++;
        memVideo[video_index]=tiles[tile_index];
        video_index+=_NB_BYTES_LINE-1;tile_index++;
        memVideo[video_index]=tiles[tile_index];
        video_index++;tile_index++;
        memVideo[video_index]=tiles[tile_index];
        video_index+=_NB_BYTES_LINE-1;tile_index++;
        memVideo[video_index]=tiles[tile_index];
        video_index++;tile_index++;
        memVideo[video_index]=tiles[tile_index];
    }else{
        memVideo[video_index]=0;        video_index++;
        memVideo[video_index]=0;        video_index+=_NB_BYTES_LINE-1;
        memVideo[video_index]=0;        video_index++;
        memVideo[video_index]=0;        video_index+=_NB_BYTES_LINE-1;
        memVideo[video_index]=0;        video_index++;
        memVideo[video_index]=0;        video_index+=_NB_BYTES_LINE-1;
        memVideo[video_index]=0;        video_index++;
        memVideo[video_index]=0;        video_index+=_NB_BYTES_LINE-1;
    }
}



//ce qui se fait a chaque interruption
ISR(TIMER0_COMPA_vect)
{//il y a de quoi dessiner toute l'image. On découpe aux grandes pauses

  //suivant la valeur de where_in_time_int, on fait une partie du dessin,
  //puis on dit quand aura lieu la prochaine int, et on met le compteur de temps a zero
  switch(where_in_time_int)
  {
      //end of previous frame
      case 0:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 1:
          // ligne 311 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 2:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 3:
          // ligne 312 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 4:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;
      

      case 5:
          //begin frame
          PORTB = _BLACK;//no signal  
          // SYNC VERT A
          // ligne 1 LONG SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 6:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 7:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          // ligne 2 LONG SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 8:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 9:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          // ligne 3 MIXTE SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 10:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 11:
          // ligne 4 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 12:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 13:
          // ligne 5 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 14:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;
///////////////////////////////
        //don't draw the 7 first line (not shown in my screen)
      /*case 15 ... 16:
          //black line
          SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
          SYNC_PORT |= _BV(SYNC_PIN);    //_delay_us(59);
          OCR0A=60<<1;//equivalent au delai en us
      break;*/

//////////////////////////////
      case 15:
          OCR0A=0xff;//to avoid troubles
          //begin with some black lines
          for (ligne = 0; ligne < 28; ligne++)//0-304
          {
            TCNT0=0;//remise a zero du compteur
            //draw_video_line();
            SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
            SYNC_PORT |= _BV(SYNC_PIN);    _delay_us(59);
            PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;    PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;PORTB = _BLACK;
            //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;    //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;
          }
          TCNT0=0;//remise a zero du compteur
          //every line
          for (ligne = 0; ligne < 268; ligne++)//0-304
          {
            TCNT0=0;//remise a zero du compteur
            //** synchro
            PORTB = 0;//no signal
            // HSync
            SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
            // Black
            SYNC_PORT |= _BV(SYNC_PIN);    _delay_us(7);//avant, 9
            
            // PORTB = _BLACK;  //  PORTB = _BLACK;  //  PORTB = _BLACK;    //PORTB = _BLACK;    PORTB = _BLACK;    PORTB = _BLACK;
            
            index_from=(ligne>>2)*_NB_BYTES_LINE; //la multiplication fait environ 13 instructions (le reste 2)
            index_to=index_from+_NB_BYTES_LINE;//4 instr

            tmp=memVideo[index_from];//4 instructions
            
            for (; index_from < index_to;) //boucle : 5  cycles car index int (on veut passer 32 instructions par tour)
            {
                PORTB = tmp%4;//1 instruction
                PORTB = PORTB;//2 inst to loose time
                tmp2=tmp;//1 instructions
                tmp2=tmp2>>2;//4 instructions (?)
                index_from++;// 1 instr (!)
                index_from--;// 1 instr (!)
                index_from++;// 1 instr (!)
                
                PORTB = tmp2%4;//1 instruction
                tmp=memVideo[index_from];//3 instructions
                tmp2=tmp2>>2;//3 instructions (?)
                
                PORTB = tmp2%4;//1 instruction
                PORTB = PORTB;//2 inst to loose time
                tmp2=tmp2>>2;//3 instructions (?)
                
                //PORTC=0;//1 instr
                
                PORTB = tmp2%4;//2 instructions
                PORTB = tmp2%4;//1 instruction to loose time
            }
            PORTB = _BLACK;  //  PORTB = _BLACK;   

          }
          for (ligne = 0; ligne < 8; ligne++)//0-304
          {
            TCNT0=0;//remise a zero du compteur
            //draw_video_line();
            SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
            SYNC_PORT |= _BV(SYNC_PIN);    _delay_us(59);
            PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;    PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;PORTB = _BLACK;
            //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;    //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;
          }
          //end frame
          PORTB = _BLACK;//no signal
          // SYNC VERT B
          // ligne 310 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 16:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 17:
          // ligne 311 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 18:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 19:
          // ligne 312 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

//////////////////////////////////////////// Second scanline //////////////////////////////////////////
      case 20:
          //begin frame
          PORTB = _BLACK;//no signal  
          // SYNC VERT A
          // ligne 1 LONG SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 21:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 22:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          // ligne 2 LONG SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 23:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 24:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          // ligne 3 MIXTE SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); //_delay_us(_LONG_SYNC);
          OCR0A=_LONG_SYNC<<1;//equivalent au delai en us
      break;

      case 25:
          SYNC_PORT |= _BV(SYNC_PIN); _delay_us(_LONG_SYNC_DELAI);
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 26:
          // ligne 4 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 27:
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

      case 28:
          // ligne 5 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

///////////////////////////////
        //don't draw the 7 first line (not shown in my screen)
      /*case 31 ... 34:
          //black line
          SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
          SYNC_PORT |= _BV(SYNC_PIN);    //_delay_us(59);
          OCR0A=60<<1;//equivalent au delai en us
          //PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;
      break;*/

//////////////////////////////
      case 29:
          OCR0A=0xff;//to avoid troubles
          //begin with some black lines
          for (ligne = 0; ligne < 28; ligne++)//0-304
          {
            TCNT0=0;//remise a zero du compteur
            //draw_video_line();
            SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
            SYNC_PORT |= _BV(SYNC_PIN);    _delay_us(59);
            PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;    PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;PORTB = _BLACK;
            //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;    //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;
          }
          //every line
          for (ligne = 0; ligne < 268; ligne++)//0-304
          {
            TCNT0=0;//remise a zero du compteur
            //** synchro
            PORTB = 0;//no signal
            // HSync
            SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
            // Black
            SYNC_PORT |= _BV(SYNC_PIN);    _delay_us(7);//avant, 9
            
            //PORTB = _BLACK;  // PORTB = _BLACK;  //  PORTB = _BLACK;    //PORTB = _BLACK;    PORTB = _BLACK;    PORTB = _BLACK;
            
            index_from=(ligne>>2)*_NB_BYTES_LINE; //la multiplication fait environ 13 instructions (le reste 2)
            index_to=index_from+_NB_BYTES_LINE;//4 instr

            tmp=memVideo[index_from];//4 instructions
            
            for (; index_from < index_to;) //boucle : 5  cycles car index int (on veut passer 32 instructions par tour)
            {
                PORTB = tmp%4;//1 instruction
                PORTB = PORTB;//2 inst to loose time
                tmp2=tmp;//1 instructions
                tmp2=tmp2>>2;//4 instructions (?)
                index_from++;// 1 instr (!)
                index_from--;// 1 instr (!)
                index_from++;// 1 instr (!)
                
                PORTB = tmp2%4;//1 instruction
                tmp=memVideo[index_from];//3 instructions
                tmp2=tmp2>>2;//3 instructions (?)
                
                PORTB = tmp2%4;//1 instruction
                PORTB = PORTB;//2 inst to loose time
                tmp2=tmp2>>2;//3 instructions (?)
                
                //PORTC=0;//1 instr
                
                PORTB = tmp2%4;//2 instructions
                PORTB = tmp2%4;//1 instruction to loose time
            }
            PORTB = _BLACK;   // PORTB = _BLACK;    
          }
          for (ligne = 0; ligne < 8; ligne++)//0-304
          {
            TCNT0=0;//remise a zero du compteur
            //draw_video_line();
            SYNC_PORT &= ~_BV(SYNC_PIN);   _delay_us(4);
            SYNC_PORT |= _BV(SYNC_PIN);    _delay_us(59);
            PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;PORTB = _BLACK;    PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;PORTB = _BLACK;
            //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;    //PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;//PORTB = _BLACK;
          }
          //end frame
          PORTB = _BLACK;//no signal
          // SYNC VERT B
          // ligne 310 SHORT SYNC
          SYNC_PORT &= ~_BV(SYNC_PIN); _delay_us(_SHORT_SYNC);
          SYNC_PORT |= _BV(SYNC_PIN); //_delay_us(_SHORT_SYNC_DELAI);
          OCR0A=_SHORT_SYNC_DELAI<<1;//equivalent au delai en us
      break;

  }
  where_in_time_int++;
  if (where_in_time_int>29) where_in_time_int=0;
  TCNT0=0;//remise a zero du compteur
}

