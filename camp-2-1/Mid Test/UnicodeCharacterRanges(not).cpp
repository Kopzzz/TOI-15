#include<iostream>
#include<cstring>
#include<stack>
#include<cmath>
using namespace std;

int main (){
    string s;
    getline(cin,s);
    char n[4],bin;
    int count=0,r=0;
    while(r<s.size()){
        for(int j=0;j<4;j++){
            n[j]=s[r];
            r++;
        }
        r++;
        for(int j=0;j<4;j++){
            stack <string> st;
            int k,b10=0,r;
            for(int i=3;i>=0;i--){
                if(n[i]=='0') k=0;
                else if(n[i]=='1') k=1;
                else if(n[i]=='2') k=2;
                else if(n[i]=='3') k=3;
                else if(n[i]=='4') k=4;
                else if(n[i]=='5') k=5;
                else if(n[i]=='6') k=6;
                else if(n[i]=='7') k=7;
                else if(n[i]=='8') k=8;
                else if(n[i]=='9') k=9;
                else if(n[i]=='A') k=10;
                else if(n[i]=='B') k=11;
                else if(n[i]=='C') k=12;
                else if(n[i]=='D') k=13;
                else if(n[i]=='E') k=14;
                else if(n[i]=='F') k=15;
                b10+=k*pow(16,r);
                r++;
            }
            while(b10>0){
                k=b10%10;
                if(k==0) st.push("0");
                if(k==1) st.push("1");
                if(k==2) st.push("2");
                if(k==3) st.push("3");
                if(k==4) st.push("4");
                if(k==5) st.push("5");
                if(k==6) st.push("6");
                if(k==7) st.push("7");
                if(k==8) st.push("8");
                if(k==9) st.push("9");
                if(k==10) st.push("A");
                if(k==11) st.push("B");
                if(k==12) st.push("C");
                if(k==13) st.push("D");
                if(k==14) st.push("E");
                if(k==15) st.push("F");
                b10/=10;
            }
            k=st.size();
            for(int i=0;i<k;i++){
                cout<<st.top();
                st.pop();
            }
            cout<<endl;
        }
    }
}
