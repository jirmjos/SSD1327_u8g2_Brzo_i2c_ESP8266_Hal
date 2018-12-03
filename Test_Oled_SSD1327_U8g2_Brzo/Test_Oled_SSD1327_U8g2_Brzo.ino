#include "u8g2.h"
extern "C"{
#include "u8g2_esp8266_hal.h"
}

u8g2_t u8g2;

void setup() {
  u8g2_Setup_ssd1327_i2c_ea_w128128_f(&u8g2, U8G2_R0, u8x8_byte_brzo_sw_i2c, u8x8_gpio_and_delay_esp8266);  // init u8g2 structure with brzo      
  u8g2_InitDisplay(&u8g2); // send init sequence to the display, display is in sleep mode after this
}

void loop() {
  // put your main code here, to run repeatedly:

}
