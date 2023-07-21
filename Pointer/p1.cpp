#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int a {10};
    int *p =&a;

    cout << "address of a :"<< p <<endl;
    cout <<"address of a :"<< &a << endl;
    cout << "address of p :"<< &p << endl;
    cout << a << endl;
    cout << *p << endl;
    
    int b {20};
    *p = b;             // a nu derefrancing thy ne b ni value put karse
    cout << "value of a :" << a << endl;
    cout << "value of p :" << *p << endl;
    cout << "address of p :" << p << endl;

    return 0;
}

