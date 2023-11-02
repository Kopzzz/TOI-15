#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    char  f,re;
    cin >> f >>re;
    for(int i=0;i<s.size();i++){
        if(s[i]==f){
            s[i]=re;
            break;
        }
    }
    cout << s;
}
