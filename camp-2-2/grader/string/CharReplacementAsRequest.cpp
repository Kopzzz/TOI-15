#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,yes;
    getline(cin,s);
    char  f,re;
    int nub=0;
    cin >> f >>re>>yes;
    for(int i=0;i<s.size();i++){
        if(s[i]==f){
            if(yes[nub]=='Y') s[i]=re;
            nub++;
        }
    }
    cout << s;
}



