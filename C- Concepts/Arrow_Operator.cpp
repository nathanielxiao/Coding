#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z; //float has 4 bits, so offset will be 4.
};


class Entity
{
public:
	void Print() const { std::cout << "Hello!" << std::endl; }
};

int main()
{
	
	Entity e;
	e.Print();  //Object can be printed directly

	Entity* ptr = &e;  //When setup an pointer, ptr.Print() can not be called anymore
	Entity& entity = *ptr; //We have to dereference the pointer to "entity"
	entity.Print();

	(*ptr).Print();  //combine above two lines into one

	ptr->Print(); //conbine all above lines, arrow operator can dereferencing the pointer and let it call the function
	
	
	int offset = (int)&((Vector3*)nullptr)->x;
	std::cout << offset << std::endl;

	&((Vector3*)0)->x; // get memory space of x, -> means accssing x. 0 also can be nullptr


}