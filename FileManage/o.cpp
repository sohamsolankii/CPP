#include<bits/stdc++.h>     // output
using namespace std;
    
int main()
{
    string s ="soham solanki";
    string st2;

    // onpening file using constructor and reading it
    ifstream in("out.txt");
    // in >> st2;
    in >> st2;          // ek sbd mate
    getline(in,st2);        // ek line mate 
    getline(in,st2);        // secound line mate
    cout << st2 ;   
    
    return 0;
}