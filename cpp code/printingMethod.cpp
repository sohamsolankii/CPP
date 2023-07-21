#include<iostream>
using namespace std;
    
int main()
{
    // printing stuff in consol
    cout << " this is a number : " << 12 << endl;

    int num {12};
    cout << " this is a number : " << num << endl;

    //Error
    cerr << "cerr output : something went wrong" << endl;

    //log message
    clog  << "clog output : this is a log message" << endl;
    return 0;
}