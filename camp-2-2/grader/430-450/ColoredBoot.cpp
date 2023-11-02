#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    char c=-10;
    string s1,s2;
    scanf("%d",&n);
    getline(cin,s1);
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s1[i]==s2[j] &&s1[i]!='?' && s2[j]!='?'){
                ans++;
                s1[i]=c;
                c--;
                s2[j]=c;
                c--;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s1[i]=='?' && s2[j]!='?' &&s2[j]>0){
                ans++;
                s1[i]=c;
                c--;
                s2[j]=c;
                c--;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s2[j]=='?' && s1[i]>0){
                ans++;
                s1[i]=c;
                c--;
                s2[j]=c;
                c--;
            }
        }
    }
    printf("%d",ans);
}

