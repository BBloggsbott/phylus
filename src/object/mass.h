#ifndef _MASS_H_
#define _MASS_H_
#include <stdlib.h>
typedef float* mass_t;
mass_t
getMass()
{
	mass_t newMass;
	newMass = (mass_t)malloc(sizeof(float));
	printf("ENTER MASS:");
	scanf("%f", newMass);
	return newMass;
}
#endif