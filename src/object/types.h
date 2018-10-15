#ifndef _PHY_TYPES_H_
#define _PHY_TYPES_H_

#ifndef _STDIO_H_
#include <stdio.h>
#endif

#ifndef _STDLIB_H_
#include <stdlib.h>
#endif

typedef float xcoor_t;
typedef float ycoor_t;

typedef struct CO_ORDINATE
{
	xcoor_t xcoor;
	ycoor_t ycoor;
}* coor_t;

coor_t
getCoordinates()
{
	struct CO_ORDINATE newPoint;
	coor_t newCoordinates;
	newCoordinates = (coor_t)malloc(sizeof(coor_t));
	printf("ENTER XCOOR:");
	scanf("%f", &newPoint.xcoor);
	printf("ENTER YCOOR:");
	scanf("%f", &newPoint.ycoor);
	printf("%f, %f", newPoint.xcoor, newPoint.ycoor);
	newCoordinates->xcoor = newPoint.xcoor;
	newCoordinates->ycoor = newPoint.ycoor;
	return newCoordinates;
}

void
removeCoordinates(coor_t point)
{
	free(point);
}

#endif