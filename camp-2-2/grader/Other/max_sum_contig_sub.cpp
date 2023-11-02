#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long num,mx=0,sum=0;
    cin >> n;
    while(n--){
        scanf("%d",&num);
        sum+=num;
        if(sum>mx) mx=sum;
        if(sum<0) sum=0;
    }
    printf("%d",mx);
}


