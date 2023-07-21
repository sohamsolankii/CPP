#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int i = 10;
    int &j = i;
    j = 20;

    cout << "value of i:" << i << endl;

    
    return 0;
}