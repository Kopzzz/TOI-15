#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s1,s2;
    bool ch=0;
    cin >> s1 >> s2;
    int l;
    l=s1.size();
    int l1[l],l2[l];
    if(s1.size()!=s2.size()) {
        cout <<"different length";
        return 0;
    }
    for(int i=0;i<l-1;i++){
        if(s1[i+1]-s1[i] != s2[i+1]-s2[i]) ch=1;
        l1[i]=s1[i+1]-s1[i];
        l2[i]=s2[i+1]-s2[i];
    }
    if(ch==1){
        printf("difference\n");
        for(int i=0;i<l-1;i++){
            printf("%d ",l1[i]);
        }
        printf("\n");
        for(int i=0;i<l-1;i++){
            printf("%d ",l2[i]);
        }
    }
    else{
        printf("similarity\n");
        for(int i=0;i<l-1;i++){
            printf("%d ",l1[i]);
        }
    }
}
