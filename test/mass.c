#include "./../src/object/mass.h"
int
main()
{
	mass_t myMass = getMass();
	printMass(myMass);
	removeMass(myMass);
	return 0;
}
