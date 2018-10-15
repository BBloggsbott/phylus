#ifndef _OBJECT_H_
#define _OBJECT_H_

#ifndef _PHY_TYPES_H_
#include "./types.h"
#endif

#ifndef _MASS_H_
#include "./mass.h"
#endif

typedef struct objectProperties
{
	coor_t centre;
}* objprop_t;

typedef struct object
{
	objprop_t properties;
	mass_t mass;
}* object_t;

objprop_t
defineProperties(coor_t centre)
{
	objprop_t newProperty;
	newProperty = (objprop_t)malloc(sizeof(objprop_t));
	newProperty->centre->xcoor = centre->xcoor;
	newProperty->centre->ycoor = centre->ycoor;
	return newProperty;
}

objprop_t
getProperties()
{
	objprop_t properties = defineProperties(
		getCoordinates()
	);
	return properties;
}

object_t
createObject(objprop_t properties, mass_t mass)
{
	object_t newObject;
	newObject = (object_t)malloc(sizeof(object_t));
	newObject->properties = properties;
	newObject->mass = mass;
	return newObject;
}

object_t
getObject()
{
	object_t newObject;
	newObject = createObject(
		getProperties(),
		getMass()
	);
	return newObject;
}

void
printObject(object_t object)
{
	printf("PROPERTIES:");
	printf("\n\tCENTRE:");
	printPair(object->properties->centre);
	printf("\nMASS:%f\n", object->mass);
}

void
disassociateObjectProperties(objprop_t properties)
{
	free(properties);
}

void
removeObject(object_t object)
{
	disassociateObjectProperties(object->properties);
	free(object);
}

#endif