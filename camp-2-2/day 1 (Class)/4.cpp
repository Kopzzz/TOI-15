#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,n=0,r=0;
    while(1){
        cin >> w;
        if(w<0) break;
        r+=w;
        if(r>=500 && r%1000>=500){
            n=r/1000;
            r=0;
            n++;
        }
        else if(r>=500 && r%1000 < 500){
            n=r/1000;
            r-=n*1000;
        }
        printf("%d\n",n);
        n=0;
    }
}

