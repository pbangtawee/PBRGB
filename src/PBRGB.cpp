#include "PBRGB.h"

const int freq = 5000;
const int resolution = 8;

// Define constructor for LED
PBLED::PBRGB(int redPin, int greenPin, int bluePin, bool commonGround) 
{
    _redPin = redPin;
    _greenPin = greenPin;
    _bluePin = bluePin;
    _commonGround = commonGround;
}

// Begin PWM
void PBLED::begin() 
{
    ledcAttach(_redPin, freq, resolution);
    ledcAttach(_greenPin, freq, resolution);
    ledcAttach(_bluePin, freq, resolution);
}

// Show LED color
void PBLED::color(int color[3]) 
{
  int r = adjustBrightness(color[0]);
  int g = adjustBrightness(color[1]);
  int b = adjustBrightness(color[2]);

  ledcWrite(_pwmChannelR, r);
  ledcWrite(_pwmChannelG, g);
  ledcWrite(_pwmChannelB, b);
}

// Custom LED color
void PBLED::colorSet(int r, int g, int b) 
{
  r = adjustBrightness(r);
  g = adjustBrightness(g);
  b = adjustBrightness(b);

  ledcWrite(_pwmChannelR, r);
  ledcWrite(_pwmChannelG, g);
  ledcWrite(_pwmChannelB, b);
}

// Adjust LED type
int PBLED::adjustBrightness(int value) 
{
  if (!_commonGround)
  {
    return 255 - value;  // Reverse value for Common VCC
  }
  return value;
}