#include <iostream>
#include <string>







template <class myType>
myType GetMax(myType a, myType b) {
	return (a>b ? a : b);
}




template <typename T>
 void Print(T value) 
 {
	 std::cout << value << std::endl; 
 }

template <int M>
class Array
{
private:
	int m_Array[M]; //m_Array returns a reference int M

public:
	int GetSize() const {
		return M;
	};

};

int main()
{
	Print(5);
	Array<5> array;
	std::cout << array.GetSize() << std::endl;

	
}
