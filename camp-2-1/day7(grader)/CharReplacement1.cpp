#include<iostream>
#include<string.h>
#include<string>
using namespace std;
main(){
    string x;
    char f,s;
    getline(cin,x);
    cin >> f >>s;
    for(int i=0;i>-1;i++){
        if(x[i]==f){
            x[i]=s;
            break;
        }
    }
    cout << x;
}
