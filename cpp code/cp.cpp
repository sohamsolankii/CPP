#include<bits/stdc++.h>
#define int long long
#define double long double
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define vp vector<pii>
#define mii map<int,int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define loCase(s) transform(s.begin(),s.end(),s.begin(),::tolower)
#define upCase(s) transform(s.begin(),s.end(),s.begin(),::toupper)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
    
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << 1987%1000 << endl;
    cout << 1987/1000 %100 << endl;
    cout << pow(2,3) << endl;

    string s= "223???";
    int cnt = count(s.begin(),s.end(),'?');
    
    return 0;
}