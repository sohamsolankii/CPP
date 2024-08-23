#include<bits/stdc++.h>
using namespace std;

class Book {
public:
	string Title;
	string Author;
	int* Rates;
	int RatesCounter;
	int* Year;

	Book(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new int[2];
		Rates[0] = 4;
		Rates[1] = 5;
		Year = new int;
		*Year = 10;

		cout << "Constructor invoked for "+Title<<endl;
	}

	~Book() {																			// constructor start with class name 
		//use for array																	// destructor start with ~(class name)
		delete [] Rates;
		Rates = nullptr;
		//use for simple types
		delete Year;
		Year = nullptr;
		cout << "Destructor invoked for "+Title<<endl;
	}
};

int main()
{
	Book book1("Millionaire Fastlane", "M. J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek Filipek");

	Book book3 = book1;
	
}
/*
    constructor are making at begging of function life and destructor are making at the end of the life

    constructor and destructor are must be in the public section of the class

    what is it : 
        destructor are always start with the delta sign(~) / and same name as the class
        constructor and destructor both have not return type (not even void)
        destructor does not recive any parameters
        it need to member fuction of the class
        it is always need to be in public area of the class
        only one destructor per class (multiple constructor)


    destructor work in the reverese order
    pointer vgr na class ma destructor ni vadu importance nthi  compiler auto matic understand
*/