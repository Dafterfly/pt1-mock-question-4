///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 

#include <iostream> 
#include <string> 
#include <cstdio> 

using namespace std;

// abstract class
class Animal{
protected: string anName, action;
public: Animal(){
	anName = "Animal";
	action = "Exists";
}
		Animal(string nameIn, string actionIn)
		{
			anName = nameIn;
			action = actionIn;
		}

		~Animal()
		{

		}

		virtual string name() = 0;
		virtual string does() = 0;
};

class Bird : public Animal
{
public:
	Bird()
	{
		anName = "Bird";
		action = "Fly";
	}

	Bird(string nameIn, string actionIn)
	{
		anName = nameIn;
		action = actionIn;
	}

	~Bird(){

	}

	string name()
	{
		return anName;
	}

	string does()
	{
		return action;
	}
};

class Dog :public Animal
{
public:
	Dog()
	{
		anName = "Dog";
		action = "Bark";
	}

	Dog(string nameIn, string actionIn)
	{
		anName = nameIn;
		action = actionIn;
	}

	~Dog(){

	}

	string name()
	{
		return anName;
	}

	string does()
	{
		return action;
	}
};

int main()
{
	Animal *bird = new Bird();
	cout << bird->name() << " " << bird->does() << endl;

	return 0;
}