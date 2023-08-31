#include<bits/stdc++.h>
using namespace std;
    
signed main()
{
    int x = 4;
    int *p_x = &x;

    cout << &x << " " << p_x << endl; // adress aavse
    cout << *p_x << endl; // 4 aavse

    *p_x = 5; // x = 5;

    // p_x + 1 thi ek block jetlu aagd jase (memory location next pr jase)    
    
    return 0;
}

// variable na address mate &x (address at x)
// aa address ma XU232 type string + int value hoi to ene store krva pointer no use thay
// int *p = &x (p ma x nu address aavi jase) -> it call pointer


// took ma value medva *a krvu

// array nu name pota main ek pointer che to arr a ma cout << a thi a nu address mlse
// so a <-> &a[0] both are same                       cout << *a <-> a[0] both are same
//                                                    cout << *(a+1) == a[1]

/*
    &x (address at x)
    *x (value at x) ne yad rakhvu
*/