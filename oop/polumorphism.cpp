#include<bits/stdc++.h>                 
using namespace std;

class AbstractEmploy{
   virtual void AskForPromotion() = 0;             
};  

class  Employ : AbstractEmploy{  
private:                                           
    string company;
    int age;
protected:
    string name ;
public:
    void setname(string name2){             
        name = name2;
    }
    string getname(){
        return name;                        
    }
    void setage(int age1){
        if(age1>=18)
        age = age1;
    }
    int getage(){
        return age;
    }

    void intro(){                                           
        cout << "Name using function - " << name << endl;
        cout << "Company - " << company << endl;
        cout << "age - " << age << endl;
    }
    Employ(string name1,string company1,int age1){      
        name = name1;
        company = company1;
        age = age1;
    }
    void AskForPromotion(){
        if(age > 30)
            cout << name << " get promoted!" << endl;
        else
            cout << name << " Sorry no promotion for you!" << endl;
    }
    virtual void work(){                // for help to the pointer
        cout << name << " is checking email, task baklog, performing task.."<< endl;
    }
};    

class Developer : public Employ {      
public:
    string FavProgramingLan;
    Developer(string name1,string company1,int age1,string favProgramingLan)
        :Employ(name1,company1,age1)                                      
    {
        FavProgramingLan = favProgramingLan;
    }
    void FixBug(){                            
       
        cout << name << " fix bugs using " << FavProgramingLan << endl; 
    }
    void work(){
        cout << name << " is writing "<< FavProgramingLan << " codes.."<< endl;
    }
};

class Teacher:public Employ{
public:
    string subject;
    void PrepareLesson(){
        cout << name << " is preparing " << subject << "lesson!" <<endl;
    }
    Teacher(string name1,string company1,int age1,string Subject)
        :Employ(name1,company1,age1)
        {
            Subject = subject;
        }
    void work(){                // comment this and try output
        cout << name << " is teaching "<< subject << endl;
    }
};

int main()                  
{
    Developer d = Developer("Soham","Word",18,"C++");
    Teacher t = Teacher("jack","school",35,"hindi");
    d.work();
    t.work();
    
    Employ* e1 = &d;            // pointer base to derive calss object
    Employ* e2 = &t;
    e1->work();         // we use . oprator for access member using pointer -- we also write vartule method above
    e2->work();  

    return 0;
}

/*
polymorphism -  many forms decribe method to many forms

most comman use is when parent class reference use to a refer to child class object 

ek sarkha function hoi tyre kya ne bolavu tenu kam polymorphism jove
*/