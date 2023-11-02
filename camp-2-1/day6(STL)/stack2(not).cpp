#include<iostream>
#include<stack>
using namespace std;
main(){//x[i]=='"'||x[i]==''||
    string x;
    cin>>x;
    stack <char> st;
    for(int i=0;i>-1;i++){
        if(x[i]=='('||x[i]=='{'||x[i]=='['||x[i]=='<') st.push(x[i]);
        else if (x[i]==')'||x[i]=='}'||x[i]==']'||x[i]=='>'){
            if (st.empty()){
                st.push('n');
                break;
            }
            else {
                if(st.top()==x[i])st.pop();
                else break;
            }
        }
    }
    if(st.empty()) cout<<"Balance";
    else cout<<"Not Balance";
}//(ab)[x{y}AB]<pk>
