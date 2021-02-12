#ifndef __INIT_BOX_H__
#define __INIT_BOX_H__

#include <stdio.h>
#include <stdint.h>
/**
*
*Header file for box structure including enum for color property
*Properties in box - id,length,breadth,height,weight,color
*
*/

typedef struct box box_t;
typedef enum = {red=1,orange,blue,green,violet,indigo,yellow} COLORS;


struct box{
	int box_id;
	float length;
	float breadth;
	float height;
	float weight;
	box_t* next_box;
	COLORS color;
};

#endif


