#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void sortt(int a[],int SIZE){
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
int check[100000];
main(){
    srand(time(NULL));
    int n;
    cin >> n;
    int arr[2][n],a[2*n],r=0,c=0;
    for(int i=0;i<n;i++)arr[0][i]=1+rand()%(2*n);
    sortt(arr[0],n);
    cout << "[0]" ;
    for(int i=0;i<n;i++){
            if((i)%10==0) cout << endl;
            cout <<"\t"<< arr[0][i] ;
    }
    for(int i=0;i<n;i++)arr[1][i]=1+rand()%(2*n);
    sortt(arr[1],n);
    cout << endl << "[1]" ;
    for(int i=0;i<n;i++){
            if((i)%10==0) cout << endl;
            cout << "\t"<<arr[1][i] ;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[0][i]==arr[1][j]){
                    a[r]=arr[0][i];
                    r++;
            }
        }
    }
    for(int i=1;i<r;i++){
        if(a[i]==a[i-1])check[i]=1;
    }
    cout << endl << "[NEW]" ;
    for(int i=0;i<r;i++){
            if((c)%10==0)cout<<endl;
            if(check[i]!=1){
                    cout<<"\t" << a[i];
                    c++;
            }
    }

}
