#include<iostream>
#include<cstring>
using namespace std;
main(){
    string s;
    char c[21];
    cin >> s;
    int count=0,ch=0;
    for(int i=0;i<s.size();i++){
        c[i]=s[i];
        for(int j=0;j<count;j++){
               if(c[i]==c[j])ch=1;
        }
        if(ch==1)break;
        count++;
    }
    for(int i=0;i<count;i++){
        cout << c[i];
    }
}
/*
ABCDBCDACDABDABCABCD
*/

