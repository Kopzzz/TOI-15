#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,c=0,tw=0,cost,d;
    while(1){
        cin >> w;
        if(tw+w > 1000) break;
        tw+=w;
        if(w<=1) c+=50;
        else if(w>1 && w<11){
            w--;
            c+=50;
            c+=w*40;
        }
        else if(w>=11) c+=w*30;
    }
    cin >> d;
    cost = 2000+(d*5);
    printf("%d %d ",cost,c);
    if(c>cost) printf("gain\n%d",c-cost);
    if(c<cost) printf("lose\n%d",cost-c);
}
