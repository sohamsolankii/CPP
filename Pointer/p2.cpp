#include<bits/stdc++.h>                     // arithmatic in pointer
using namespace std;
    
int main()
{
    
    int a {10};
    int* p = &a;

    cout << &a << endl;         // address of a
    cout << p << endl;          // address of a
    cout << &p << endl;         // address of p
    cout << sizeof(int) << endl;
    cout << p+1 << endl << endl;           //size of int 4 so change in 4 digits   -- a na addressb ma 4 vadhse

    cout << "value at p :" << *p << endl;
    cout << "value at p+1 :" << *(p+1) << endl;    // some garbage value
    
    
    return 0;
}