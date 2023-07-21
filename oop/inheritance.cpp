#include<bits/stdc++.h>                 // child class and parent class
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
};    

class Developer : public Employ {      // employ class pase constructor che so derived class ne main method ma use karti vkhte constructor invoke karvu padse bcz  
public:
    string FavProgramingLan;
    Developer(string name1,string company1,int age1,string favProgramingLan)
        :Employ(name1,company1,age1)                                        // base class apse pela 3 input na parameter setkyra
    {
        FavProgramingLan = favProgramingLan;
    }
    void FixBug(){                              // method for print constructor
       // cout << getname() << " fix bugs using " << FavProgramingLan << endl;
        cout << name << " fix bugs using " << FavProgramingLan << endl; // now we also use it bcz upper we write protected
    }                                           // private modifier che atle direct class ni bar access na thy so use getname() which is public

};


int main()                  
{
    Developer d = Developer("Soham","Word",18,"C++");
    d.FixBug();
    d.AskForPromotion();        // bcz me above inheritance we write public

    return 0;
}
/*
child class get all attribute of super/base calss so it call inherite
inheritance is private by default so we need to write public for use it function in main method

super class mathi sub class inherit karti vkhte jo super class ma constructor hoi to sub ma pan banavu pde
*/