#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    string s = "Soham";
    cout << s[3] << "\tsize of string is : " << s.size() << " or " << s.length() <<"\n";
    cout << s[s.size() - 1];

    //change value
    s[s.length() - 1 ]= 'n';                                 // store in character form
    cout << s[4];
    
    return 0;
}