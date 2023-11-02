#include<iostream>
using namespace std;
void sortmax(int a[],int SIZE){
int i,j,k;
    for(j=SIZE;j>0;j--){
        for(i=0;i<j-1;i++){
            if(a[i]<a[i+1]){
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }
}
void sortmin(int a[],int SIZE){
    int i,j,k;
    for(j=SIZE;j>0;j--){
        for(i=0;i<j-1;i++){
            if(a[i]>a[i+1]){
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }
}
main(){
    int n,k,c=0;
    cin>>n>>k;
    int p[n],q[n];
    for(int i=0;i<n;i++) cin>>p[i];
    sortmax(p,n);
    for(int i=0;i<n;i++) cin>>q[i];
    sortmin(q,n);
    for(int i=0;i<n;i++) if(p[i]+q[i]>=k)c++;
    if(c==n)cout << "YES";
    else cout<<"NO";
}
