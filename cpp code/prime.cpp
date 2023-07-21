#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n ,i;
    cin >> n;

    bool num = true;
    for(i = 2;i*i<=n;i++){                        // either sqrt(n)
        if(n%i==0){
            num = false;
            break;
        }
    }

    if(num == 0){
        cout << "not a prime number" << endl;
    }
    else{
        cout << "prime number" << endl;
    }
    
    return 0;
}