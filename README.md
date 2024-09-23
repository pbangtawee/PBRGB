** FOR ENGLISH, PLEASE SEE BELOW **

# PBRGB

PBRGB ไลบรารี่เพื่อทำให้การควบคุม RGB LED แบบ 4 ขา ด้วย ESP32 ง่ายมากขึ้น เพียงแค่กำหนดชื่อสี หรือจะกำหนดค่าสี RGB ก็ได้

## การติดตั้ง

1. ดาวน์โหลด PBRGB library จาก Arduino Library Manager หรือ clone zip file จาก repository.
2. เพิ่มในโปรเจคของคุณ

## การใช้งาน
``` cpp
#include <PBRGB.h>

PBRGB led(25, 26, 27, true);  // Pins for Red, Green, Blue, common ground

void setup() {
    led.begin();
}

void loop() {
    led.color(RED);  // Set color to red
    led.colorSet(0, 255, 0);  // Set custom color (Green)
}


** English **

# PBRGB

PBRGB is a simple Arduino library for controlling RGB LEDs with the ESP32 using PWM. You can easily set predefined colors (e.g., RED, GREEN, BLUE) or manually define your own colors using RGB values.

## Installation

1. Download the PBRGB library from the Arduino Library Manager or clone it from the repository.
2. Add the library to your Arduino Libraries folder.

## Usage

```cpp
#include <PBRGB.h>

PBRGB led(25, 26, 27, true);  // Pins for Red, Green, Blue, common ground

void setup() {
    led.begin();
}

void loop() {
    led.color(RED);  // Set color to red
    led.colorSet(0, 255, 0);  // Set custom color (Green)
}