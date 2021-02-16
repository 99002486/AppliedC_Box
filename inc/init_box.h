#ifndef __INIT_BOX_H__
#define __INIT_BOX_H__

#include <stdio.h>
#include <string.h>
/**
*
*Header file for box structure including enum for color property
*Properties in box - id,length,breadth,height,weight,color
*
*/

typedef struct box box_t;

typedef struct{
	int box_id;
        float length;
        float breadth;
        float height;
        float weight;
	char color[10];
}box_data_t;

struct box{
	box_data_t data;
	box_t* next_box;
};

#endif


