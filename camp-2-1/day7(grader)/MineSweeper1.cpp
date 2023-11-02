#include<iostream>
using namespace std;
main(){
    int r,c,count=0;
    cin >> r >> c;
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(m[i][j]==1)count++;
        }
    }
    cout<<count;
}
