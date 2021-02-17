#include "box_list.h"

float min_max_diff(box_t* head)
{
	float min_vol=FLT_MAX;
	float max_vol=0;
	float vol_diff,current_volume,length,breadth,height;
	box_t* current=head;
	while(current!=NULL)
	{
		length=current->data.length;
		breadth=current->data.breadth;
		height=current->data.height;
		current_volume=(length*breadth*height);
		if(current_volume>max_vol)
			max=current_volume;
		if(current_volume<min_vol)
			min=current_volume;
		current=current->next_box;
	};
	return max-min;
}
