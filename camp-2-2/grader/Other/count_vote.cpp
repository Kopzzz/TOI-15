#include <bits/stdc++.h>
using namespace std;
int arr[101];
int main(){
    int n,k,mx=-1,index;
    scanf("%d %d",&n,&k);
    while(k--){
        scanf("%d",&n);
        arr[n]++;
        if(arr[n]>mx){
            mx=arr[n];
            index=n;
        }
    }
    printf("%d\n%d",index,mx);
}


