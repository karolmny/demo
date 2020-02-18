#include "Elevator.h"

int find_current_floor(){
    int i =1;
    while(i < 5){
        if (hardware_read_floor_sensor(i)){
            return i;
        }
    }
    return 0;
}