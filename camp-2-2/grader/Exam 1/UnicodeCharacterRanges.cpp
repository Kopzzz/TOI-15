#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s,ans;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]!=',') ans.push_back(s[i]);
        if(s[i]==',' || i==s.size()-1){
            if(ans.compare("0020")<0) printf("UNKNOWN\n");
            else if(ans.compare("007F")<=0 && ans.compare("0020")>=0) printf("BASIC LATIN\n");
            else if(ans.compare("06FF")<=0 && ans.compare("0600")>=0) printf("ARABIC\n");
            else if(ans.compare("0E7F")<=0 && ans.compare("0E00")>=0) printf("THAI\n");
            else if(ans.compare("0EFF")<=0 && ans.compare("0E80")>=0) printf("LAO\n");
            else if(ans.compare("309F")<=0 && ans.compare("3040")>=0) printf("HIRAGANA\n");
            else if(ans.compare("30FF")<=0 && ans.compare("30A0")>=0) printf("KATAKANA\n");
            else  printf("UNKNOWN\n");
            ans.clear();
        }
    }
}
