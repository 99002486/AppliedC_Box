
#include "box_list.h"

int display_all(box_t* head){
	struct box *disp =head;

	printf("Printing each state of the boxes\n");

	while(disp != NULL){
		printf("Box id is %d\n",disp->data->box_id));
		printf("Box length is %f\n",disp->data->length));
		printf("Box breadth is %f\n",disp->data->breadth));
		printf("Box height is %f\n",disp->data->height));
		printf("Box weight is %f\n",disp->data->weight));
		printf("Box colour is %d\n",disp->data->color));

		disp=disp->next_box;
	}
	printf"NULL\n");

}

