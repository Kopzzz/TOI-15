#include<iostream>
using namespace std;
main(){
    int r,c,count=0,n,x,y,sum;
    cin >> r >> c;
    int m[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
                cin >> m[i][j];
                if(m[i][j]==1) m[i][j]=-1;
        }

    }

    for(int x=1;x<=r;x++){
        for(int y=1;y<=c;y++){
            count=0;
            if(m[x-1][y-1]==-1)cout<<"* ";
            else {
                if(m[x-0][y-2]==-1 && y-2>=0 && x-0<r && y-2<c) count++;
                if(m[x-0][y-1]==-1 && y-1>=0 && x-0<r && y-1<c) count++;
                if(m[x-0][y-0]==-1 && x-0<r && y-0<c) count++;
                if(m[x-1][y-2]==-1 && x-1>=0 && y-2>=0   && x-1<r&& y-2<c) count++;
                if(m[x-1][y-0]==-1 && x-1>=0  && x-1<r && y-0<c) count++;
                if(m[x-2][y-2]==-1 && x-2>=0 && y-2>=0  && x-2<r && y-2<c) count++;
                if(m[x-2][y-1]==-1 && x-2>=0 && y-1>=0  && x-2<r && y-1<c) count++;
                if(m[x-2][y-0]==-1 && x-2>=0 && x-2<r && y-0<c) count++;
                cout <<count<<" ";
            }
        }
        cout<<endl;
    }
}
