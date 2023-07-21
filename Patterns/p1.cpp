#include<bits/stdc++.h>
using namespace std;
    
void print1(){
     for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout << "* " ;
        }
        cout << endl;
    }
}    
void print2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void print3(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout <<"* ";
        }
        cout << endl;
    }
}
void print4(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout <<i+1;
        }
        cout << endl;
    }
}
void print5(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout << " ";
        }
        
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout << " ";
        }
        
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print7(){
    for(int i =0;i<5;i++){
        //space
        for(int j=0;j<5-i-1;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout << "*" ;
        }
        //space
        // for(int j=0;j<5-i-1;j++){
        //     cout << " ";
        // }
        cout << endl;
    }
}
void print8(){
    // for(int i=5;i>0;i--){
    //     for(int j=5;j>i;j--){
    //         cout << " ";
    //     }
    //     for(int j=2*i-1;j>0;j--){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    for(int i =0;i<5;i++){
        //space
        for(int j=0;j<i;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*5-(2*i+1);j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
void print9(){
    print7();
    print8();
}
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int star = i;
        if(i>n)star = 2*n-i;                // i = row, n = user input
        for(int j=1;j<=star;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print11(){

}
int main()
{
    
    print10(3);
    
    return 0;
}
