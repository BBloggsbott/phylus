#include "./../src/object/object.h"

int main(int argc, char *argv[])
{
	object_t myObject = getObject();
	printObject(myObject);
	removeObject(myObject);
	return 0;
}