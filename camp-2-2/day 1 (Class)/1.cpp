#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,c;
    cin >> w;
    if(w<=1) c=50;
    else if(w>1 && w<11){
        w--;
        c=50;
        c+=w*40;
    }
    else if(w>=11) c=w*30;
    cout << c;
}

