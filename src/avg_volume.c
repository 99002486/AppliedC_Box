#include "box_list.h"

float Avg_volume(box_t* head){
        struct box *avg_vol =head;
	float avg_volume=0;
 
        printf("finding average volume of each boxes\n");

        if(avg_vol ==NULL){
                printf("NULL\n");
		return 0;
	}

        while(avg_vol != NULL){
        	avg_volume+= ((avg_vol->data.length)*(avg_vol->data.breadth)*(avg_vol->data.height));

                avg_vol=avg_vol->next_box;
        }

        return avg_volume;       

}


