#include<iostream>
#include <string>
using namespace std;
    
int main()
{
    int age;
    std::string name,name2;

    cout << "Please type your name here :";                        //space mukva thi niche input nai leva dey
    cin >> name;

    cout << "enter your age here :";
    cin >> age;
    
    //cin >> name >> age;

    cout << "enter your full name again :";
    getline(cin,name2);                                           //uper string problem na niche ek variable bane
    getline(cin,name2);
    cout << name2;
    
    return 0;
}