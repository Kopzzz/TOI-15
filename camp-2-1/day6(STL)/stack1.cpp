#include<iostream>
#include<stack>
#include<cmath>
#include<string>
using namespace std;
main(){
    while(1){
        stack <string> st;
        string n;
        int k,s,d,l,b10=0,j=0;
        cin >> n >> s >> d;
        if(n=="0"&&s==0&&d==0) break;
        l=n.length();
        for(int i=l-1;i>=0;i--){
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
            else if(n[i]=='a') k=10;
            else if(n[i]=='b') k=11;
            else if(n[i]=='c') k=12;
            else if(n[i]=='d') k=13;
            else if(n[i]=='e') k=14;
            else if(n[i]=='f') k=15;
            b10+=k*pow(s,j);
            j++;
        }
        while(b10>0){
            k=b10%d;
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
            if(k==10) st.push("a");
            if(k==11) st.push("b");
            if(k==12) st.push("c");
            if(k==13) st.push("d");
            if(k==14) st.push("e");
            if(k==15) st.push("f");
            b10/=d;
        }
        k=st.size();
        for(int i=0;i<k;i++){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}

