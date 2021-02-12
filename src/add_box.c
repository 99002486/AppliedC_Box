
#include "box_list.h"

int add_a_box(box_t* head,box_data_t data){

	struct box *newbox= malloc(sizeof(struct box));
	newbox->data =	data;
	newbox->next_box =NULL;
	
	if(*head==NULL)
		*head = newbox;

	else{
		struct box *lastnode =	*head;
		
		while(lastnode->next_box ! =NULL){
			lastnode =lastnode->next_box;
		}
		lastnode->next_box=newbox;
	}
	
}	

