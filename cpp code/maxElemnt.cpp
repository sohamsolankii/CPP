#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n =4;
    int m =5;

    int ma = max(m,n);
    cout << ma << endl;

    int t;
    cin >> t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin >> arr[i];
    }

    int amax =0;
    for(int i=0;i<t;i++){
        amax = max(0,arr[i]);
    }

    cout << amax << endl;

    
    return 0;
}