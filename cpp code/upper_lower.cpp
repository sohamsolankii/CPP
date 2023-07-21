#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
    
int main()
{
    string s1 = "asyhcbj";
    string s2 = "scaulh";

    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);

    for (int i=0;i<s1.size();i++){
        s1[i]=(tolower(s1[i]));
        
    }

    
    return 0;
}