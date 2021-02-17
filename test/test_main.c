#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <math.h>
/* Modify these two lines according to the project */
#include "init_box.h"
#include "box_list.h"
#define PROJECT_NAME    "AppliedC_box"

/* Prototypes for all the test functions */
void test_displayboxes(void);
void test_countcolor(void);
void test_box_id(void);
void test_avg_volume(void);
void test_min_max_diff(void);

/*Initializes a linked list to hold boxes*/
box_t *head = NULL;

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/*Sample boxes added to the linked list*/
    box_data_t box_data_1 = {
        .box_id=12,
        .length=12,
        .breadth=10,
        .height=15,
        .weight=20,
        .color="blue"
        };
    box_data_t box_data_2 = {
        .box_id=13,
        .length=12.13,
        .breadth=10.4,
        .height=15.67,
        .weight=20.0,
        .color="red"
        };
    box_data_t box_data_3 = {
        .box_id=14,
        .length=125.13,
        .breadth=11.4,
        .height=12.67,
        .weight=26.0,
        .color="red"
        };
    box_data_t box_data_4 = {
        .box_id=15,
        .length=12.13,
        .breadth=10.4,
        .height=15.67,
        .weight=20.0,
        .color="blue"
        };

    head=add_a_box(head,box_data_1);
    head=add_a_box(head,box_data_2);
    head=add_a_box(head,box_data_3);
    head=add_a_box(head,box_data_4);
    /*Removing box with id 13*/
    head=remove_box_id(head,13);
  
  /* Add your test functions in this format for testing*/
    CU_add_test(suite, "Display boxes", test_displayboxes);
    CU_add_test(suite, "Coloured boxes", test_countcolor);
    CU_add_test(suite, "Finding a box with given id", test_box_id);
    CU_add_test(suite, "Finding Average value of boxes", test_avg_volume);
    CU_add_test(suite, "Finding difference between minimum and maximum volume", test_min_max_diff);



  /* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/*Test functions*/
void test_displayboxes(void)
{
    CU_ASSERT(3 == display_all(head));
}

void test_countcolor(void)
{
    CU_ASSERT(2 == count_color(head,"blue"));
    CU_ASSERT(1 == count_color(head,"red"));
    CU_ASSERT(0 == count_color(head,"green"));
}

void test_box_id(void)
{
    CU_ASSERT(0 == find_box_id(head,13));
    CU_ASSERT(14 == find_box_id(head,14));
    CU_ASSERT(12 == find_box_id(head,12));
}

void test_avg_volume(void)
{
    CU_ASSERT_DOUBLE_EQUAL(Avg_volume(head),21850.33,0.01);
}

void test_min_max_diff(void)
{
    CU_ASSERT_DOUBLE_EQUAL(min_max_diff(head),16273.525391,0.01);
}
