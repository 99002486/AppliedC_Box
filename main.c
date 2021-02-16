#include "init_box.h"
#include "box_list.h"

box_t *head = NULL;

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
                .box_id=12,
                .length=12.13,
                .breadth=10.4,
                .height=15.67,
                .weight=20.0,
                .color="red"};
	 box_data_t box_data_3 = {
                .box_id=15,
                .length=125.13,
                .breadth=11.4,
                .height=12.67,
                .weight=26.0,
                .color="red"};
	 box_data_t box_data_4 = {
                .box_id=12,
                .length=12.13,
                .breadth=10.4,
                .height=15.67,
                .weight=20.0,
                .color="blue"};

	head=add_a_box(head,box_data_1);
	head=add_a_box(head,box_data_2);
	head=add_a_box(head,box_data_3);
	head=add_a_box(head,box_data_4);
	display_all(head);
	printf("Boxes with color red = %d\n",count_color(head,"red"));
	return 0;
}
