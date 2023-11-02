#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,s2;
    bool ch;
    deque<char> dq,dq2;
    int m=1001,nub,p,ch2=0;
    char temp;
    cin >> s;
    for(int i=0;i<s.size();i++){
        ch=0;
        for(int j=0;j<dq.size();j++){
           if(s[i]==dq[j]) ch=1;
        }
        if(ch==1){
            s1=s.substr(i,dq.size());
            s2=s.substr(0,dq.size());
           break;
        }
        else {
            dq.push_back(s[i]);
            dq2.push_back(s[i]);
        }
    }
    nub=0;
    for(int i=0;i<dq.size();i++){
        p=0;
        ch=0;
        for(deque<char>::iterator it=dq.begin();it!=dq.end();it++){
            if(*it!=s1[p]) ch=1;
            else p++;
        }
        if(ch==1){
            temp = dq.front();
            dq.pop_front();
            dq.push_back(temp);
            nub++;
        }
        else{
            if(i==0){
                ch2=3;
                break;
            }
            if(nub<m){
                m=nub;
                ch2=1;
                break;
            }
        }
    }
    nub=0;
    for(int i=0;i<dq2.size();i++){
        p=0;
        ch=0;
        for(deque<char>::iterator it=dq2.begin();it!=dq2.end();it++){
            if(*it!=s1[p]) ch=1;
            else p++;
        }
        if(ch==1){
            temp = dq2.back();
            dq2.pop_back();
            dq2.push_front(temp);
            nub++;
        }
        else{
            if(i==0){
                ch2=3;
                break;
            }
            if(nub<m){
                m=nub;
                ch2=2;
                break;
            }
        }
    }
    if(ch2==0) printf("INVALID");
    else if(ch2==1){
        cout << s2 << endl;
        printf("< %d",m);
    }
    else if(ch2==2){
        cout << s2 << endl;
        printf("> %d",m);
    }
    else if(ch2==3){
        cout << s2 << endl;
        printf("=");
    }
}
/*
ABCDBCDACDABDABCABCD
*/
