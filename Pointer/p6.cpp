#include<bits/stdc++.h>           // pointer and arrays
using namespace std;
    
int main()
{
    int a[4] = {1,2,3,4};
    cout << a << endl;
    cout << &a[0] << endl;
    cout << a[0] << endl;
    cout << *a << endl;
 
    for(int i=0;i<sizeof(a[i]);i++)
    {
        cout << a+i << endl;
        cout << &a[i] << endl;
        cout << a[i] << endl;
        cout << *(a+i) << endl;  
    }
    return 0;
}

// element at index i :
    //address - &a[i] - (a+i)
    //value - a[i]   - *(a+i)