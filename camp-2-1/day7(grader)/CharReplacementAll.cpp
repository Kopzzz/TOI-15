#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
main(){
    string x;
    char f,s;
    getline(cin,x);
    cin >> f >>s;
    for(int i=0;i<x.size();i++)if(x[i]==f)x[i]=s;

    cout << x;
}
