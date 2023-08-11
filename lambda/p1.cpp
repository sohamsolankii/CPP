#include<bits/stdc++.h>
using namespace std;
    
signed main()
{
    // how to creat [cc](p){fd};

    int d;
    // [d](int x){                                          // put side ni vstu access karva [] braces ma lakhva nu but in innetr part i cannot change d value
    //     if(x%d) cout << x << " " << "x is divide by d";
    //     else cout << x << " " << "x is not divide by d";
    // };                                                       // if i want to cahnge d's value then i need to pass by referance&  either do only & sign then all will work and if want to pass by the value then the sign is =(then value is not change)

    vector<int> v{1,2,3,4,6};
    // for_each(v.begin(),v.end(), [](int x){cout << x << " "; });         // this function iterate over the vcetor
    for_each(v.begin(),v.end(), [](int x){
        if(x%2) cout << x << " " << "x is odd" << endl;
        else cout << x << " " << "x is even " << endl;
    });         
    
    return 0;
}

/*
    [] squar bracket (capture claws)
    () paranthese are used to pass parameters
    {} definations og the labda functions



*/