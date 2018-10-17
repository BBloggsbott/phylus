#ifndef _MASS_H_
#define _MASS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * mass_s:
 *  enumeration with the two basic kind of mass.
 */
typedef enum massScale
{
	GRAM,
	POUND,
	UNKNOWN
} mass_s;

/**
 * mass_t:
 *  structure with the mass scale and value of the respective mass.
 */
typedef struct mass
{
	mass_s scale;
	float value;
}* mass_t;

/**
 * getMass():
 *  to get the mass value and type from the user.
 */
mass_t
getMass()
{
	mass_t newMass;
	char *type;
	type = NULL;
	newMass = (mass_t)malloc(sizeof(struct mass));
	printf("ENTER MASS:");
	scanf("%f", &(newMass)->value);
	printf("ENTER TYPE:");
	scanf("%s", type);
	if (strcmp(type, "gram") == 0)
	{
		newMass->scale = GRAM;
	}
	else if (strcmp(type, "pound") == 0)
	{
		newMass->scale = POUND;
	}
	else
	{
		newMass->scale = UNKNOWN;
	}
	return newMass;
}

/**
 * printMass(mass_t):
 *  prints the mass with the mass scale.
 */
void
printMass(mass_t mass)
{
	printf("MASS: %f", mass->value);
	if (mass->scale == GRAM)
	{
		printf(" gram");
	}
	else if (mass->scale == POUND)
	{
		printf(" pound");
	}
	else
	{
		printf("unknown");
	}
}

/**
 * removeMass(mass_t):
 *  de allocates the mass_t variable.
 */
void
removeMass(mass_t mass)
{
	free(mass);
}

#endif