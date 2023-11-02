#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s,s2;
    int n,temp=0;
    cin >> n;
    int a[n];
    char k[n];
    for(int i=0;i<n;i++) cin >> a[i];
    getline(cin, s);
    getline(cin, s);
    while(s.size()%n!=0) s.push_back(' ');
    for(int i=0;i<s.size()/n;i++){
        for(int j=temp;j<n+temp;j++){
            k[j-temp]=s[j];
        }
        for(int j=0;j<n;j++){
            for(int l=0;l<n;l++){
                if(l==a[j]-1) s2.push_back(k[l]);
            }
        }
        temp+=n;
    }
    cout << s2;
}
/*
3
3 2 1
JUPITER IS THE BIGGEST PLANET.
*/
