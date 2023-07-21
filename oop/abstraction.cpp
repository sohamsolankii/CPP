#include<bits/stdc++.h>                 // mobile button logic -- two interface easy and hard = easy dekhay and complex part pachad rey
using namespace std;

class AbstractEmploy{
   virtual void AskForPromotion() = 0;             // also make obligatory - to force class sign here contract to implement this method by pure virtul function
};  

class  Employ : AbstractEmploy{                                             
    string name = "Soham";
    string company;
    int age;

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

int main()                  
{
    Employ emp1 = Employ("Soham","Own",18);         //try with > 30
    emp1.AskForPromotion();

    return 0;
}

/*
 Like java and c# = simulate interface by using abstract class
*/