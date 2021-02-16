#include "box_list.h"

int count_color(box_t* head,char* color){
    box_t* current = head;
    int color_count=0;
    while(current != NULL)
    {
        if(!(strcmp(current->data.color,color))){
            color_count++;
        }
        current=current->next_box;
    }
    return color_count;
}