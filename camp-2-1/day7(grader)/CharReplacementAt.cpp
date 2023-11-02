#include<iostream>
#include<string.h>
#include<string>
using namespace std;
main(){
    string x;
    char f,s;
    int ch;
    getline(cin,x);
    cin >> f >>s;
    cin >>ch;
    for(int i=0,j=0;i<x.size();i++){
        if(x[i]==f){
            if(ch==1){
                x[i]=s;
            }
            ch--;
        }
    }
    cout << x;
}
