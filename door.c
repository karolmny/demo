#include "door.h"

void door_operator(){
    DoorOpen = 1;
    hardware_command_door_open(DoorOpen);
    while (hardware_read_obstruction_signal()){
        sleep(DoorOpenTime);
    }
    sleep(DoorOpenTime); //obstruction kan aktiveres igjen i løpet av denne perioden
    if (!hardware_read_obstruction_signal()){
        DoorOpen =0;
        hardware_command_door_open(DoorOpen);
    }
    else{
        printf("Constant Obstruction");
        door_operator(); //hvis obstruction ble kalt igjen må døren fortsatt holdes åpen
    }

}