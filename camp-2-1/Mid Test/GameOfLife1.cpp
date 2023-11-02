#include<iostream>
using namespace std;
main(){
    int m,n,i,j,count=0;
    cin >> m >>n;
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >> arr[i][j];
            if(arr[i][j]==1)count++;
        }
    }
    cout<<count<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==1){
                cout << i+1 << " "<<j+1<<endl;
            }
        }
    }
}
/*
4 5
0 1 0 0 1
0 0 0 1 1
1 0 0 0 0
0 1 1 0 0
*/
