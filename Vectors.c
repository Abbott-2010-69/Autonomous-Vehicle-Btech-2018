/*
 * Shared.c
 *
 *  Created on: 25 Oct 2018
 *      Author: SinghZN
 */
#include "Vectors.h"
#include <math.h>

Vector* VecAdd(Vector* a, Vector* b){
Vector* c;
c->xpos = a->xpos+b->xpos;
c->ypos = a->ypos+b->ypos;

return c;
}

Vector* VecSub(Vector* a, Vector* b){
	Vector* c;

	c->xpos = a->xpos-b->xpos;
	c->ypos = a->ypos-b->ypos;

	return c;
}

Vector* VecScale(Vector* a,int16_t b){
	Vector* c;

	c->xpos = a->xpos*b;
	c->ypos = a->ypos*b;

	return c;
}


float VecMag(Vector* a){
	double b;

	b = sqrt(pow((double)a->xpos,2)+pow((double)a->ypos,2));

	return (float)b;
}
