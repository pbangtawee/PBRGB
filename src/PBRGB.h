#ifndef PBRGB_H
#define PBRGB_H

#include <Arduino.h>

// Basic colors
const int RED[3] = {255, 0, 0};
const int GREEN[3] = {0, 255, 0};
const int BLUE[3] = {0, 0, 255};
const int WHITE[3] = {255, 255, 255};
const int YELLOW[3] = {255, 255, 0};
const int CYAN[3] = {0, 255, 255};
const int MAGENTA[3] = {255, 0, 255};

class PBRGB
{
  public:
    // true for common ground, false for common VCC
    PBLED(int redPin, int greenPin, int bluePin, bool commonGround);

    void begin();
    void color(int color[3]);
    void colorSet(int r, int g, int b);

  private:
    int _redPin, _greenPin, _bluePin;
    bool _commonGround;
    int _pwmChannelR, _pwmChannelG, _pwmChannelB;
    int adjustBrightness(int value);
};

#endif