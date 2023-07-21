#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    lamda function signature:
                                [capture list] (parameter) -> return type{
                                    // function body
                                }
    
    */

    // declare function call with name
    auto fun = [](){
        cout << "Hello Word!" << endl;

    };
    fun();

    // declare function and call it directly
    [](){
    cout << "Hello Word!" << endl;
    }();

    // with parameter
    [](double a,double b){
    cout << "A+B : " << a+b << endl;
    }(10.3,32);

    // return 
    cout << "result :" << [](double a,double b){
        return a+b;
    }(10.3,32);
    
    return 0;
}

// anonymous function(without names)