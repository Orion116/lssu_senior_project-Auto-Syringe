/*  
    This is a sample GUI to demo to our client. It will have a basic
    interface.
*/

#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup() 
{
  // put your setup code here, to run once:
    TFT_BL_ON;                                      // turn on the background light
    
    Tft.TFTinit();                                  // init TFT library
    
    Tft.drawChar('S',0,0,1,BLUE);                // draw char: 'S', (0, 0), size: 1, color: RED

    Tft.fillScreen(80, 160, 50, 150,RED);
    Tft.fillRectangle(30, 120, 100,65,YELLOW);
    Tft.drawRectangle(100, 170, 120,60,BLUE);
    Tft.drawString("Hello.", 110, 185, 3, WHITE);
}

void loop() 
{ 
    // put your main code here, to run repeatedly:

//    for (int i = 0; i <= 150; i++)
//    {
//        for (int j = 0; j <= 200; j++)
//        {
//            Tft.drawChar('.',i,j,1,RED);                // draw char: 'S', (0, 0), size: 1, color: R
//        }
//    }
//    delay(10);
//    for (int i = 150; i <= 225; i++)
//    {
//        for (int j = 0; j <= 200; j++)
//        {
//            Tft.drawChar('.',i,j,1,GREEN);                // draw char: 'S', (0, 0), size: 1, color: R
//        }
//    }
//    for (int i = 225; i <= 240; i++)
//    {
//        for (int j = 0; j <= 200; j++)
//        {
//            Tft.drawChar('.',i,j,1,BLUE);                // draw char: 'S', (0, 0), size: 1, color: R
//        }
//    }
}
