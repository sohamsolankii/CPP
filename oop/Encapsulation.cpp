#include<bits/stdc++.h>         // getter and setter method to astract data from private modifier
using namespace std;
    
class  Employ{                                              // class
private: 
    string name = "Soham";
    string company;
    int age;

public:
    void setname(string name2){             //getter and setter methhod
        name = name2;
    }
    string getname(){
        return name;                        //return value of private modifier
    }
    void setage(int age1){
        if(age1>=18)
        age = age1;
    }
    int getage(){
        return age;
    }

    void intro(){                                           // function
        cout << "Name using function - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "age - " << age << endl;
    }
    Employ(string name1,string company1,int age1){          // constructor -- when we make constructor we lose our default constructor
        name = name1;
        company = company1;
        age = age1;
    }
     
};    

int main()                  
{
    Employ emp1 = Employ("Soham","Own",18);
    emp1.intro();
    
    //cout << emp1.name<< endl;         -- we cannot use by this bcz private access modifier
    emp1.setname("Mohan");
    cout << emp1.getname() << " is " << emp1.getage() << " years old!" << endl;

    emp1.setage(10);                //setvalue is not work bcz we put condition above
    cout << emp1.getname() << " is " << emp1.getage() << " years old!" << endl;
    emp1.setage(22);
    cout << emp1.getname() << " is " << emp1.getage() << " years old!" << endl;
    emp1.intro();
    
    return 0;
}

