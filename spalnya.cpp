#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);
    HDC  fon = txLoadImage ("fon.bmp");
    txBitBlt (txDC(), 0, 0, 800, 600, fon, 0, 0);
    txDeleteDC(fon);
    return 0;
    }