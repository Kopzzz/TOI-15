#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp,sum=0;
    string s;
    getline(cin,s);
    sum+=s[0]-48;
    sum+=s[1]-64;
    for(int i=2;i<=9;i++){
        sum+=s[i]-48;
    }
    temp=sum;
    if(sum%11>1){
        if(s[10]==(11-sum%11)+48) printf("T ");
        else printf("F ");
    }
    if(sum%11<=1){
        if(s[10]==(1-sum%11)+48) printf("T ");
        else printf("F ");
    }
    printf("%d",sum);
}
