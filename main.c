#include "init_box.h"
#include "box_list.h"

box_t *head = NULL;

#define id 12


int main()
{
	box_data_t box_data_1 = {
		.box_id=12,
		.length=12,
		.breadth=10,
		.height=15,
		.weight=20,
		.color="blue"};
	box_data_t box_data_2 = {
                .box_id=13,
                .length=12.13,
                .breadth=10.4,
                .height=15.67,
                .weight=20.0,
                .color="red"};
	 box_data_t box_data_3 = {
                .box_id=14,
                .length=125.13,
                .breadth=11.4,
                .height=12.67,
                .weight=26.0,
                .color="red"};
	 box_data_t box_data_4 = {
                .box_id=15,
                .length=12.13,
                .breadth=10.4,
                .height=15.67,
                .weight=20.0,
                .color="blue"};

	head=add_a_box(head,box_data_1);
	head=add_a_box(head,box_data_2);
	head=add_a_box(head,box_data_3);
	head=add_a_box(head,box_data_4);
	head=remove_box_id(head,12);

	printf("\nTotal number of the nodes are %d\n",display_all(head));

	printf("\nBoxes with color red = %d\n\n",count_color(head,"red"));

	printf("finding box id with %d\n",id);
	printf("Box with the id= %d has these features\n",id);
	find_box_id(head,id);
	printf("The difference between minimum and maximum volumes are %.2f\n",min_max_diff(head));
	printf("Average volume of the boxes is %.2f\n",Avg_volume(head));

	return 0;
}
