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

		virtual void name() = 0;
		virtual void does() = 0;
};
