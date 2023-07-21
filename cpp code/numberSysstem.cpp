#include<bits/stdc++.h>
using namespace std;
    
int main()              // binary, octal, hexadecimal
{
    int n1 = 15; // decimal
    int n2 = 017;  // octal
    int n3 = 0x0F; // hexadecimal
    int n4  = 0b00001111; // binary
    
    int n {2};
    cout << n << endl << n1 << n2 << n3 << n4 << endl;

    int pn {2010};

    // no show base - default
    cout << "in decimal :" << dec << pn << endl;
    cout << "in hex :" << hex << pn << endl;
    cout << "in octal :" << oct << pn << endl << endl;

    // showing base
    cout << showbase;
    cout << "in decimal :" << dec << pn << endl;
    cout << "in hex :" << hex << pn << endl;
    cout << "in octal :" << oct << pn << endl << "\n";

    // upparcase
    cout << uppercase;
    cout << "in decimal :" << dec << pn << endl;
    cout << "in hex :" << hex << pn << endl;
    cout << "in octal :" << oct << pn << endl << endl;


    return 0;
}

/* binary = 0000 to decimal = 1
    digit 1  || data range 0~1
    digit 2  || data range 0~3
    
    digit n  || data range 0 ~ 2^n - 1

    for the unsigned range 0 to infinite 0 ~ 2^n - 1
    for the signed range -infi to +infi  2^n ~  2^n - 1

ex. digit 8 || byte 1 || data range 0~255
*/

/* hexadecimal = 0 to 9 and A to F   == right thi jav nu ane 4 no ek block banava no
    dec = 0 || hec = 0
    dec = 10 || hec = A
*/

/* octal = 0 to 7  == 3 na block ma ferva nu
    dec = 7 || oct = 7  
*/