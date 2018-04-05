#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z; //float has 4 bits, so offset will be 4.
};


int main()
{
	int offset = (int)&((Vector3*)nullptr)->x;
	std::cout << offset << std::endl;

	&((Vector3*)0)->x; // get memory space of x, -> means accssing x. 0 also can be nullptr


}