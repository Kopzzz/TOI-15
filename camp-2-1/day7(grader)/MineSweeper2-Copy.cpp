#include<iostream>
using namespace std;
int main(){
    int m,n;
    int num=0;
    cin >> m >> n;
    bool A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                cin >> A[i][j];}

    }
    cin >> num;
    for(int i=0;i<num;i++){
        int x,y,count=0;
        cin >> x >> y;
        if(A[x-1][y-1]==1) cout << "YES\n";
        else {
            if(A[x-0][y-2]==1 && y-2>=0 && x-0<m && y-2<n) count++;
            if(A[x-0][y-1]==1 && y-1>=0 && x-0<m && y-1<n) count++;
            if(A[x-0][y-0]==1 && x-0<m && y-0<n) count++;
            if(A[x-1][y-2]==1 && x-1>=0 && y-2>=0   && x-1<m && y-2<n) count++;
            if(A[x-1][y-0]==1 && x-1>=0  && x-1<m && y-0<n) count++;
            if(A[x-2][y-2]==1 && x-2>=0 && y-2>=0  && x-2<m && y-2<n) count++;
            if(A[x-2][y-1]==1 && x-2>=0 && y-1>=0  && x-2<m && y-1<n) count++;
            if(A[x-2][y-0]==1 && x-2>=0 && x-2<m && y-0<n) count++;
            cout << "NO " << count <<endl;

        }
    }


}

