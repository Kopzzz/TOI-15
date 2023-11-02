#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double x,y,d,in=0;
    cin >> n;
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&x,&y);
        d = sqrt(x*x+y*y);
        if(d<=1) in++;
    }
    in/=n;
    printf("%.3lf",in);
}

