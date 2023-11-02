#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s,ans;
    bool ch;
    cin >> s;
    for(int i=0;i<s.size();i++){
        ch=0;
        for(int j=0;j<ans.size();j++){
           if(s[i]==ans[j]) ch=1;
        }
        if(ch==1) break;
        else ans.push_back(s[i]);
    }
    cout << ans;
}
