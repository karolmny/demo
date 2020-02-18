#include "hardware.h"

int DoorOpen = 0;
const int DoorOpenTime = 3;
int ObstructionState = 0; //har foreløpig ikke bruk denne

void door_operator();