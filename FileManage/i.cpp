#include<bits/stdc++.h>     // input
#include<fstream>
using namespace std;
    
int main()
{
    string s ="soham solanki ";
    string str = "this is writed string from string variable";
    string st2;

    // onpening file using constructor and reading it
    ofstream out("in.txt");        // write opration
    out << s;
    out << str;

    

    
    return 0;
}