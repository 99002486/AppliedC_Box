#include "box_list.h"

int find_box_id(box_t* head,int id){
    box_t* current = head;
    int flag=0;	
    if(current == NULL){
	printf("There are no nodes currently, please add the nodes then search for it\n");
	return -1;
    }

    while(current != NULL)
    {
        if((current->data.box_id)==id){
		flag=1;
		printf("Box id is %d |",current->data.box_id);
		printf(" Box length is %.2f |",current->data.length);
		printf(" Box breadth is %.2f|",current->data.breadth);
		printf(" Box height is %.2f |",current->data.height);
		printf(" Box weight is %.2f |",current->data.weight);
		printf(" Box colour is %s\n",current->data.color);            
        }
        current=current->next_box;

    }
    
    if(flag==0){
	printf("Given id= %d did not match with any nodes\n",id);
	return 0;
    }
		
  
    return id;
}
