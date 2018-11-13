//include all libraries
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

//define all palettes
const int palette1_count = 7, palette2_count = 5, palette3_count = 7, palette4_count = 10, palette5_count = 5;
const int palette1[palette1_count][3] PROGMEM = {{0,0,0},{42,0,1},{42,0,22},{42,0,79},{42,55,21},{42,135,8},{120,161,45}};
const int palette2[palette2_count][3] PROGMEM = {};
const int palette3[palette3_count][3] PROGMEM = {};
const int palette4[palette4_count][3] PROGMEM = {};
const int palette5[palette5_count][3] PROGMEM = {};
const int fadeSpeed = 1000; //Milliseconds in between colors
//define pins and other constants

#define WIDTH 16
#define HEIGHT 16
#define PIN 7
#define SHAPE_WIDTH 8 //Imagine a box around the shape
#define SHAPE_HEIGHT 8
#define SHAPE_POS_X 3
#define SHAPE_POS_Y 3

int randomPalette;
int randomColor;

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(WIDTH, HEIGHT, 1, 1, PIN, NEO_MATRIX_TOP + NEO_MATRIX_LEFT + NEO_MATRIX_ROWS + NEO_MATRIX_PROGRESSIVE, NEO_GRB + NEO_KHZ800);

//Put whatever shape that goes over the background here
void draw_shape(uint32_t color){
  matrix.fillRect(SHAPE_POS_X, SHAPE_POS_Y, SHAPE_WIDTH, SHAPE_HEIGHT, color);
}



//have a variable for which mode to be in
enum COLOR_MODES {
  ITERATE,
  RANDOM_PALETTE,
  RANDOM_PALETTE_COLOR,
  ITERATE_PATTERN
};

COLOR_MODES mode = RANDOM_PALETTE;
//switch() that variable

void setup(){
  matrix.begin();
  matrix.fillScreen(0);
  
}
void loop(){
  switch(mode){
    case ITERATE:
      break;
    case RANDOM_PALETTE:
      break;
    case RANDOM_PALETTE_COLOR:
      break;
    case ITERATE_PATTERN:
      break;
  }
    
  
}
//loop through the palettes for each shape / background with set speed
//draw them to the matrix with that color

//if it's random then have a random number generator and select palette from that
void fade_between_colors(int r1, int g1, int b1, int r2, int b2, int c2, int positionInt){
  return matrix.Color();
}
