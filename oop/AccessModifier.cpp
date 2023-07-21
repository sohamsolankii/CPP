#include<bits/stdc++.h>         // three type modifier -- private, public, protected
using namespace std;
    
class  Employ{
public:
    string name = "Soham";
    string company;
    int age;

    void intro(){               // function
        cout << "Name using function - " << name << endl;
         cout << "Company - " << company << endl;
    }
};    

int main()                  
{
    Employ emp1 ;
    emp1.company = "Own";
    emp1.name;
    emp1.age = 18;
    // invoke function
    emp1.intro();
    
    cout << emp1.name<< endl;
    cout << emp1.age<< endl;

    Employ emp2;
    emp2.name = "DAx";
    emp2.age = 16;
    emp2.company = "Hero";
    emp2.intro();

    return 0;
}