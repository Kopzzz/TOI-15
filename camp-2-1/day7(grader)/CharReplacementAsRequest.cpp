#include<iostream>
#include<string.h>
#include<string>
using namespace std;
main(){
    string x,ch;
    char f,s;
    getline(cin,x);
    cin >> f >>s;
    cin >>ch;
    for(int i=0,j=0;i<x.size();i++){
        if(x[i]==f){
            if(ch[j]=='Y'){
                x[i]=s;
            }
            j++;
        }
    }
    cout << x;
}
