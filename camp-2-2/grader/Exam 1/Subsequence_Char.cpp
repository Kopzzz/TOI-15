#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    string q,s;
    int n,k;
    bool ch;
    cin >> q >> n;
    while(n--){
        cin >> s;
        ch=0;
        k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==q[k])k++;
            if(k==q.size()){
                ch=1;
                break;
            }
        }
        if(ch==1) printf("yes\n");
        else printf("no\n");
    }
}

