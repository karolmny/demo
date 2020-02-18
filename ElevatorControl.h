#include "hardware.h"
#include "Queue.h"

typedef enum{
    INIT,
    STOP, 
    EMERGENCY_STOP, 
    MOVE_UP,
    MOVE_DOWN,
    IDLE,
}States;

typedef struct{
    enum States CurrentState;
    int CurrentFloor;
    int NextFloor;
    int PreviousFloor;
    int StopButton;
}ElevatorControl;

void stop_button_pressed();