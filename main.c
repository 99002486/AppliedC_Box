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
	head=add_a_box(head,box_data_1);
	display_all(head);
	return 0;
}
