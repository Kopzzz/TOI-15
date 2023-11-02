#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    char keep[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    string s;
    getline (cin,s);
    for(int i=0;i<s.size()/n;i++){
        for(int j=0;j<n;j++){
            keep[j]=s[j+c];
        }
        for(int j=0;j<n;j++){
             s[j+c]=keep[arr[j]];
        }
        c+=n;
    }
    for(int i=0;i<s.size();i++)cout<<s[i];
}
/*
7
6 4 5 3 1 7 2
SILPAKORN UNIVERSITY NAKORN PRATHOMTHAILAND 73000
*/
