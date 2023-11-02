#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
main(){
    int n,r=0;
    cin>>n;
    int arr[n];
    char s[1500],sub[150];
    for(int i=0;i<=n;i++)cin>>arr[i];
    gets(s);
    int time=strlen(s)/n;
    for(int i=strlen(s);i<1500;i++)s[i]=' ';
    for(int i=0;i<=time;i++){
        for(int j=0;j<n;j++) sub[j]=s[j+r];
        for(int j=0;j<n;j++){
            int index=arr[j];
            cout << sub[index-1];
        }
        r+=n;
    }
}
/*
7
6 4 5 3 1 7 2
SILPAKORN UNIVERSITY NAKORN PRATHOMTHAILAND 73000
*/
