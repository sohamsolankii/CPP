#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    // connection txt file with sout string 
    ofstream sout("in.txt");

    // creating string and filling it with string etter by user
    cout << "enter your name here :";
    string name;
    cin>> name;

    // writing string to the file
    sout << "My names is :" << name;
    
    sout.close();


    //ahiya thi claso kari read karvu
    // connecting our file with hin stream
    ifstream hin("in.txt");
 
    // creating a content string variable and filling it with string present there in the text file
    string content;
    hin>>content;       // by this only first letter
    cout<<"The content of the file is: "<<content;
 
    // disconnecting our file
    hin.close();

    return 0;
}