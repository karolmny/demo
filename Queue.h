# include "hardware.h"

typedef struct{
    int DownQueue[4];
    int UpQueue[4];
    int QueueActive =1; //1 for active, 0 for status EMERGENCY_STOP
}Queue;

void add_to_down_queue(int floor);
void add_to_up_queue(int floor);
void clear_floor_from_queue(int floor);
void clear_queue();