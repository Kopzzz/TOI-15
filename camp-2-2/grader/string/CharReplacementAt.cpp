#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char  f,re;
    int nub;
    cin >> f >>re>>nub;
    for(int i=0;i<s.size();i++){
        if(s[i]==f) nub--;
        if(nub==0){
           s[i]=re;
           break;
        }
    }
    cout << s;
}

