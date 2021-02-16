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

int box_given_id(box_t* head,COLORS color);

int remove_box_id(box_t* head, int id);

#endif
