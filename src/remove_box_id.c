#include "box_list.h"

box_t* remove_box_id(box_t* head, int id){
	box_t* current=head;
	box_t* prev=current;
	while(current!=NULL){
		if((current->data.box_id)==id && current==head){
			head=current->next_box;
			current->next_box=NULL;
			free(current);
			break;
			}
		current=current->next_box;
		if((current->data.box_id)==id){
			prev->next_box=current->next_box;
			current->next_box=NULL;
			free(current);
			break;
			}
		prev=prev->next_box;
		}
	return head;
}
