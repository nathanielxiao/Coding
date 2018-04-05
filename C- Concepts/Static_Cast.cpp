#include <vector>
#include <iostream>

struct B
{
	int m = 0;
	void hello() const 
	{
		std::cout << "Hello world, this is B!\n";       //The idea of const functions is not allow them to modify the object on which they are called
	}
};

struct D : B     // ":" means inheritance. B is base struct, D is derive struct. Inheritance means that whatever in struct B will be move to struct D. 
{
	void hello() const
	{
		std::cout << "Hello world, this is D!/n";
	}
};

enum class E {ONE = 1,TWO,HREE};
enum EU {ONE = 1,TWO,THREE};


int main()
{
	//1: initializing conversion
	int n = static_cast<int>(3.14);     
	std::cout << "n =" << n << '\n';     //n=3  
	std::vector<int> v = static_cast<std::vector<int>>(10);
	std::cout << "v.size() =" << v.size() << '\n';  //v.size() = 10

	//2: static downcast
	D d;
	B& br = d;  //upcast via implicit conversion
	br.hello();  //Hello world, this is B!
	D& another_d = static_cast<D&>(br);  //downcast
	another_d.hello();  //Hello world, this is D!
		 
}