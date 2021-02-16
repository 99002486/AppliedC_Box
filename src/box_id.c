#include "box_list.h"

int find_box_id(box_t* head,int id){
    box_t* current = head;
	
    if(current == NULL){
	printf("There are no nodes currently, please add the nodes then search for it\n");
	return 0;
    }

    while(current != NULL)
    {
        if((current->data.box_id)==id){
		printf("Box id is %d |",current->data.box_id);
		printf(" Box length is %.2f |",current->data.length);
		printf(" Box breadth is %.2f|",current->data.breadth);
		printf(" Box height is %.2f |",current->data.height);
		printf(" Box weight is %.2f |",current->data.weight);
		printf(" Box colour is %s\n",current->data.color);            
        }
        current=current->next_box;
    }
		
  
    return id;
}
