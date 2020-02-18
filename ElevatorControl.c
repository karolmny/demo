#include "ElevatorControl.h"

void stop_button_pressed(){
    while(hardware_read_stop_signal()){
        CurrentState = EMERGENCY_STOP;
        hardware_command_movement(HARDWARE_MOVEMENT_STOP);
        hardware_command_stop_light(1);
        ClearQueue(); //denne setter også QueueActive =0
    }
    CurrentState = IDLE;
    hardware_command_stop_light(1);
    QueueActive =1;
}