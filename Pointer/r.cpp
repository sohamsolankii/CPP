#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int a {10};
    int &p = a;         //refrances

    cout << p << endl;
    cout << &a << endl;
    cout << &p << endl << "==========================" << endl;
    
    p = 20;
    cout << a << endl;
    return 0;
}