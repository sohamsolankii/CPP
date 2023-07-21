#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    cout << uppercase;
    string name = "soham";
    cout << name << endl;

    double na{ 3.3421589739829576};
    double nu{3.3};
    cout << fixed;                                         //for fix value not scintific
    cout << "number :" << na <<  endl;

    cout <<showpoint;                                     //show trailing zeros if necessary
    cout << "number :" << nu <<  endl;

    cout <<setprecision(4);                               // 4 decimal sudhi precise karva
    cout << "number :" << na <<  endl;

    cout << "Size of float : " << sizeof(float) << " bytes"<< endl;
    cout << "char minimum value: " << CHAR_MIN << endl;
    cout << "INT maximum value: " << INT_MAX << endl;
  
    return 0;
}