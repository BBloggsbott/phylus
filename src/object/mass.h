#ifndef _MASS_H_
#define _MASS_H_

typedef float mass_t;

mass_t
getMass()
{
	mass_t mass;
	printf("ENTER MASS:");
	scanf("%f", &mass);
	return mass;
}

#endif