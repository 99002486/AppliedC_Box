 #ifndef __BOX_LIST_H__
#define __BOX_LIST_H__

#include "init_box.h"
/**
*@params-Pointer to list
*@function-adds a box to end of list
*@return-signifying successfull execution of function
*/
box_t* add_a_box(box_t* head,box_data_t data);

int display_all(box_t* head);

int count_color(box_t* head,char* color);

int find_box_id(box_t* head,int id);

float Avg_volume(box_t* head);

box_t* remove_box_id(box_t* head, int id);

float max_min_diff(box_t* head);
#endif
