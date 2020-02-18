#include "Queue.h"

void add_to_down_queue(int floor){
    if (QueueActive()){
        DownQueue[floor] =1;
    }
}

void add_to_up_queue(int floor){
    if (QueueActive()){
        UpQueue[floor] =1;
    }
}

void clear_floor_from_queue(int floor){
    DownQueue[floor] =0;
    UpQueue[floor]= 0;
}

void clear_queue(){
    QueueActive =0;
    for (int i =0; i < 4; i++){
        DownQueue[i] = 0;
        UpQueue[i] =0;
    }
}