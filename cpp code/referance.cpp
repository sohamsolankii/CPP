#include<bits/stdc++.h>
using namespace std;

void increment(int n)   {
    n++;
}
void DiffIncrement(int &n){     // & is cpp referance
    n++;
}
int main()
{
    int n =3;
    cout << n << endl;

    increment(n);       // pass by value copy pass thy
    cout << n << endl;

    DiffIncrement(n);   // pass by referance
    cout << n << endl;

}

// array always by referance pass thy
