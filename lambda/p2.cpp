#include<bits/stdc++.h>
using namespace std;
    
signed main()
{
//     cout << [](int x){return x+2;}(2) << endl;        // last nu () bracket value pass krva
   
//     auto summ =  [](int x, int y){return x+y;};       
//     cout << summ(2,3) << endl;

    vector<int> v{1,2,3,4};

    cout << all_of(v.begin(), v.end(),[] (int x){
        return x > 0;
    });

    return 0;
}


/*
    all_of() badha mate true hse to 1 return krse
    any_of() jpo koi pn ek sacho hse to true return kari dese
    none_of() jo koi pn match naii kre to true return karse

    ture 1, false 0

*/