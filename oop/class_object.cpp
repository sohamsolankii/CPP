#include<bits/stdc++.h>
using namespace std;
    
class  Employ{              // every thing in class private by default
private:                    // without private not difference
    string name;
    string company;
    int age;

public:
    string collage;

};    

int main()
{

    Employ Soham; // object
    Soham.collage = "Ahmedabad university";

    cout << Soham.collage << endl;

    Employ *Mohan = new Employ();  // create object using new keyword and we get a pointer varible for object name Mohan
    Mohan->collage = "Nirma";

    cout << Mohan->collage << endl;

    
    return 0;
}

/* 
    class = car 
    object = audi, rolls royal, bugati

    class = Employ 
    object = name, company, age

 */


// if we inherite class to other class so super class aslo private by default in c++.
