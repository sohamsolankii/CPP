#include<bits/stdc++.h>         
using namespace std;
    
class  Employ{                                              // class
public:
    string name = "Soham";
    string company;
    int age;

    void intro(){                                           // function
        cout << "Name using function - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "age - " << age << endl;
    }
    Employ(string name1,string company1,int age1){          // constructor -- when we make constructor we lose our default constructor and when use in main method we need to invoke it
        name = name1;
        company = company1;
        age = age1;
    }

    
};    

int main()                  
{
    // Employ emp1 ;
    // emp1.company = "Own";
    // emp1.name;
    // emp1.age = 18;
    // emp1.intro();

    // invoke constructor = pachi nu Employ constructor add karva mate nu che
    Employ emp1 = Employ("Soham","Own",18);             
    emp1.intro();
    

    return 0;
}

/*
constructor rules :

    1. don't have return type like void in intro
    2. same name as class names

*/
