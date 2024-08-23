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

    Employ() {                                               
        name = "Raj";
        company = "Meta";
        age = 24;
    }
    // Employ(string name1,string company1,int age1){          // parametarised constuctor - args passed
    //     name = name1;                                                           
    //     company = company1;
    //     age = age1;
    // }

    Employ(string name1, string company1, int age1) {         
        name = name1;                                                           
        company = company1;
        age = age1;
    }


    Employ(Employ& emp) {                                                         // copy constructor - initialise an obj by another existing obj 
        name = emp.name;
        company = emp.company;
        age = emp.age;
    }
    
};    

int main()                  
{
    // Employ emp1 ;
    // emp1.company = "Own";
    // emp1.name;
    // emp1.age = 18;
    // emp1.intro();

    Employ default_con_employ;
    default_con_employ.intro();
    
    // Creating an object using the parameterized constructor
    Employ emp1("Soham", "Own", 18);             
    emp1.intro();

    // Creating an object using the copy constructor
    Employ emp2 = emp1;
    emp2.intro();
    

    return 0;
}

/*

constructor use :
    use to initialise an object
    this is function which is called when an object is created

constructor types:
    default
    parameterized
    copy

constructor rules :
    1. don't have return type like void 
    2. same name as class names

*/
