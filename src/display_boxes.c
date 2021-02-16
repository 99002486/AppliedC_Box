
#include "box_list.h"

int display_all(box_t* head){
	struct box *disp =head;

	printf("Printing each state of the boxes\n");

	if(disp ==NULL)
		printf("NULL\n");
	while(disp != NULL){
		printf("Box id is %d |",disp->data.box_id);
		printf(" Box length is %.2f |",disp->data.length);
		printf(" Box breadth is %.2f|",disp->data.breadth);
		printf(" Box height is %.2f |",disp->data.height);
		printf(" Box weight is %.2f |",disp->data.weight);
		printf(" Box colour is %s\n",disp->data.color);

		disp=disp->next_box;
	}
	
	return 0;	

	

}

