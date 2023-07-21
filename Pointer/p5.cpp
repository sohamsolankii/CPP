#include<bits/stdc++.h>  // function referance - call by referance
using namespace std;

void increment(int a){      // a is local variable                              // called function
    a = a+1;                // parameter sivay ahiya declar karela variable is global - gol var. access anywere in program
    cout << "address of variable a in increment :" << &a << endl;
}

void actuleincre(int *p){
    *p = *p+1;
}
    
int main()                 // calling function
{
    int a = 10;

    increment(a);
    cout << "address of variable a in main :" << &a << endl;
    cout << "the value of :" << a <<endl;

    actuleincre(&a);
    cout << "the value of :" << a <<endl;
    return 0;
}

// application memory == code(text) - increment / ststic-global / stack / heap
// local variable ni memory stack rite store thay