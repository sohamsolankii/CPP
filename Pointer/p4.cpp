#include<bits/stdc++.h>             // pointer to pointer
using namespace std;
    
main()
{
    int x = 5;
    int* p =&x;           // p ni value x nu address -- p ne derefrancing karva thi x ni value male
    int **q = &p;
    int*** r = &q;

    cout <<"value of x : " <<*p << endl;
    cout << "address of x je che value of p : "<< p << endl;
    cout << "address of p je che value of q : "<< q << endl;
    cout << "value of p :"<<*q << endl;                // value of p -- value of p is address of x
    cout << **q << endl;
    cout <<"q ni value -- je che p nu address : " << *r << endl;
    cout << "p ni value -- je che x nu address " <<**r << endl;
    cout << ***r << endl;

    ***r = 10;
    cout << "value of x :  "<< x << endl;
    *p = 6;  // now x value is 6
    **q = *p +2;
    cout << "value of x :  "<< x;

}