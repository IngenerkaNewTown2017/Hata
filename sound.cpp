
#include "TXLib.h"
#include <mmsystem.h>

int mainofsound()
    {
    txCreateWindow (800, 600);
      PlaySound (TEXT ("supermario.wav"), NULL, SND_SYNC);


    return 0;
    }