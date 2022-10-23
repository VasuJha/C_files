#include "graphics.h"

int main(void) 
{
    setWindowSize(1000,1000);
    drawLine(500,100,700,100);
    drawLine(700,100,841.421,241.421);
    drawLine(841.421,241.421,841.421,441.421);
    drawLine(841.421,441.421,700,582.843);
    drawLine(500,582.843,700,582.843);
    drawLine(358.579,441.421,500,582.843);
    drawLine(358.579,241.421,358.579,441.421);
    drawLine(500,100,358.579,241.421);
    return 0;
} 