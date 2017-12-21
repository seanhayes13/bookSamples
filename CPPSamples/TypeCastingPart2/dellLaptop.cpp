#include "genericLaptop.h"
#include "dellLaptop.h"

DellLaptop::DellLaptop() {
	GenericLaptop();
}

DellLaptop::DellLaptop(string n) {
	name = n;
}