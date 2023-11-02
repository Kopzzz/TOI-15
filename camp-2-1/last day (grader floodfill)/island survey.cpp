#include<cstdio>
int A[501][501];
void check(int r,int c,int k){
   if(A[r][c]==1){
        A[r][c]=k;
        if(A[r-1][c+1]==1)  check(r-1,c+1,k);
        if(A[r-1][c]==1)    check(r-1,c,k);
        if(A[r-1][c-1]==1)  check(r-1,c-1,k);
        if(A[r][c+1]==1)    check(r,c+1,k);
        if(A[r][c-1]==1)    check(r,c-1,k);
        if(A[r+1][c+1]==1)  check(r+1,c+1,k);
        if(A[r+1][c]==1)    check(r+1,c,k);
        if(A[r+1][c-1]==1)  check(r+1,c-1,k);
   }
}
int main(){
    int t,r,c;
    scanf("%d",&t);
    while(t--){
        int k=2;
        scanf("%d %d",&r,&c);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                scanf("%d",&A[i][j]);
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(A[i][j]==1) check(i,j,k++);
            }
        }
        printf("%d\n",k-2);
    }
}
/*
2
5 9
0 0 0 0 0 0 0 0 0
0 0 0 1 1 1 0 1 0
0 1 1 0 1 1 0 1 0
0 0 1 1 0 0 0 1 0
0 0 0 0 0 0 0 0 0
9 12
0 0 0 0 0 0 0 0 0 0 0 0
0 1 0 1 0 0 1 1 0 0 1 0
0 1 1 1 0 0 0 1 1 0 0 0
0 0 0 0 0 1 0 1 0 1 0 0
0 0 1 1 1 1 0 0 1 1 0 0
0 1 1 1 0 1 1 0 1 1 0 0
0 0 1 1 1 0 1 0 0 0 0 0
0 1 1 0 0 1 1 0 1 1 1 0
0 0 0 0 0 0 0 0 0 0 0 0
*/
