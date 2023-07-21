#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    bool condi {true};
    bool other{false};

    cout << "condition :"<<condi <<endl;             // 0-1
    cout << "other condition :" << other << endl << "\n";
    
    cout <<boolalpha;                                     // true - false
    cout << "condition :"<<condi <<endl;
    cout << "other condition :" << other << endl << "\n";
    
    cout <<noboolalpha;                                  // 0-1
    cout << "condition :"<<condi <<endl;
    cout << "other condition :" << other << endl << "\n";

    return 0;
}