#include<iostream>
using namespace std;
main(){
    int m,n,i,j,count=0,r,c,row,col,x;
    cin >> m >>n;
    int arr[m+1][n+1];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin >> arr[i][j];
        }
    }
    cin >> x;
    for(i=0;i<x;i++){
        cin>>row>>col>>r>>c;
        count=0;
        for(j=0;j<row;j++){
            for(int k=0;k<col;k++){
                if(arr[(r-row/2)+j][(c-col/2)+k]==1 &&( r-row/2)+j>0 && (r-row/2)+j<=m && (c-col/2)+k>0 && (c-col/2)+k<=n)count++;
            }
        }
        cout<<count<<endl;
    }

}
/*
6
9
1 0 0 0 0 1 0 0 1
0 1 0 0 0 0 1 0 0
0 0 1 0 0 1 0 0 0
0 1 0 0 0 0 0 0 1
0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 1 1
3
5 5 3 4
1 5 1 6
5 9 1 1
*/
