#include<bits/stdc++.h>           // type casting
using namespace std;
    
int main()
{
    int a =1025;
    int *p = &a;
    cout << "address : " << p << " value : "<< *p << endl;
    cout << "address : " << p+1 << " value : "<< *(p+1) << endl << endl;

    char *c ;             //typecasting
    c = (char*)p;
    cout << "size of character is in bytes : " << sizeof(char) << endl;
    cout << "address : " << c << " value : "<< *c << endl;                                        //value = 1
    cout << "address : " << c+1 << " value : "<< *(c+1) << endl << endl;                           //value = 4   byte na data par thi jose

    void *p0 = p;
    cout << "address : " << p0 << endl;       //we cannot store the value -- also cannot use arithmetic progration 
    return 0;
}