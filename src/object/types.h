#ifndef _PHY_TYPES_H_
#define _PHY_TYPES_H_

#ifndef _STDIO_H_
#include <stdio.h>
#endif

#ifndef _STDLIB_H_
#include <stdlib.h>
#endif

/**
 * xcoor_t: x co-ordinate.
 */
typedef float xcoor_t;

/**
 * ycoor_t: y co-ordinate.
 */
typedef float ycoor_t;

/**
 * CO_ORDINATE:
 *  co-ordinate structure with the pair of co-ordinates for both x and y.
 */
typedef struct CO_ORDINATE
{
	xcoor_t xcoor;
	ycoor_t ycoor;
}* coor_t;

/**
 * getCoordinates():
 *  to get the co-ordinates from the user.
 */
coor_t
getCoordinates()
{
	coor_t newCoordinates;
	newCoordinates = (coor_t)malloc(sizeof(struct CO_ORDINATE));
	printf("XCOOR:");
	scanf("%f", &(newCoordinates)->xcoor);
	printf("YCOOR:");
	scanf("%f", &(newCoordinates)->ycoor);
	return newCoordinates;
}

/**
 * printPair(coor_t):
 *  to print the pair of co-ordinates as an ordered pair, (x, y).
 */
void
printPair(coor_t point)
{
	printf("(%f, %f)", point->xcoor, point->ycoor);
}

/**
 * removeCoordinates(coor_t):
 *  to deallocate the memory occupied by the coor_t type.
 */
void
removeCoordinates(coor_t point)
{
	free(point);
}

#endif