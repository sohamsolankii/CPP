#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    auto var {1};
    auto var2 {2.00};
    auto var3 {2.1f};
    cout << var << " "<< sizeof(var) << endl ;   

    auto varr (333u);
    varr = -22;                 //assign negative number. DANGER!
    cout << "varr : " << varr << endl;
    return 0;
}