#include <iostream>
/*
 * Virtual Functions -
 * this is the example where we have functions with same names and we will access this with pointers
 */
class Base                                          //base class
{
public:
	void show()                                     // normal function
	{
		std::cout << "Base\n" << std::endl;
	}
};
class Derived1: public Base                         // derived class 1 - access function from base class not derived class
{
public:
	void show()
	{
		std::cout << "Derived 1\n" << std::endl;
	}
};
class Derived2: public Base                        // derived class 2 - access function from base class not derived class
{
public:
	void show()
	{
		std::cout << "Derived 2\n" << std::endl;
	}
};

int main()
{
	Derived1 derived1;                              // object of derived class 1
	Derived2 derived2;                              // object of derived class 2
	Base* ptrBase;                                  // pointer to base class
	
	ptrBase = &derived1;                            // put address of derived1 in the pointer
	ptrBase->show();                                // execute show()
	
	ptrBase = &derived2;                            // put address of derived2 in the pointer
	ptrBase->show();                                // execute show()
	
	system("pause");
	return 0;
}