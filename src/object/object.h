#ifndef _OBJECT_H_
#define _OBJECT_H_

#ifndef _PHY_TYPES_H_
#include "./types.h"
#endif

#ifndef _MASS_H_
#include "./mass.h"
#endif

/**
 * objprop_t:
 *  structure for the properties of every object.
 */
typedef struct objectProperties
{
	coor_t centre;
}* objprop_t;

/**
 * object_t:
 *  structure for the object.
 */
typedef struct object
{
	objprop_t properties;
	mass_t mass;
}* object_t;

/**
 * defineProperties(coor_t):
 *  function to define the given properties to a new objprop_t.
 */
objprop_t
defineProperties(coor_t centre)
{
	objprop_t newProperty;
	newProperty = (objprop_t)malloc(sizeof(struct objectProperties));
	newProperty->centre->xcoor = centre->xcoor;
	newProperty->centre->ycoor = centre->ycoor;
	return newProperty;
}

/**
 * getProperties():
 *  to get the properties from the end user.
 */
objprop_t
getProperties()
{
	coor_t newCoor = getCoordinates();
	objprop_t properties = defineProperties(newCoor);
	return properties;
}

/**
 * disassociateObjectProperties(objprop_t):
 *  to free memory occupied by the respective structure.
 */
void
disassociateObjectProperties(objprop_t properties)
{
	free(properties);
}

/**
 * createObject(objprop_t, mass_t):
 *  to create a new object_t and return the same.
 */
object_t
createObject(objprop_t properties, mass_t mass)
{
	object_t newObject;
	newObject = (object_t)malloc(sizeof(struct object));
	newObject->properties = properties;
	newObject->mass = mass;
	return newObject;
}

/**
 * getObject():
 *  to get object_t from the user.
 */
object_t
getObject()
{
	object_t newObject;
	objprop_t newProperties = getProperties();
	mass_t newMass = getMass();
	newObject = createObject(newProperties, newMass);
	disassociateObjectProperties(newProperties);
	return newObject;
}

/**
 * printObject(object_t):
 *  to print the object and its properties as a new type.
 */
void
printObject(object_t object)
{
	printf("PROPERTIES:");
	printf("\n\tCENTRE:");
	printPair(object->properties->centre);
	printf("\nMASS:");
	printMass(object->mass);
}

/**
 * removeObject(object_t):
 *  to free the memory occupied by the object_t.
 */
void
removeObject(object_t object)
{
	disassociateObjectProperties(object->properties);
	free(object);
}

#endif