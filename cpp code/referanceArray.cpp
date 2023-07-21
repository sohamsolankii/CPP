#include<bits/stdc++.h>     // array always by referance pass thy
using namespace std;
void fun(int arr[])    {        // 2D array ma secound[] ni value pass karvi j pade
    arr[0] = 10;
}
int main()
{
    int a[10];
    a[0] = 7;
    cout << a[0] << endl;

    fun(a);
    cout << a[0] << endl;
    
    return 0;
}