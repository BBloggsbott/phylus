#include "./../src/object/object.h"
int
main()
{
	object_t myObject = getObject();
	printObject(myObject);
	removeObject(myObject);
	return 0;
}