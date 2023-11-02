#include<cstdio>
char A[101][101];
int count=0;
void recure(int i,int j){
    if(A[i][j]=='.'){
        A[i][j]='*';
        if(A[i-1][j]=='.') recure(i-1,j);
        if(A[i+1][j]=='.') recure(i+1,j);
        if(A[i][j-1]=='.') recure(i,j-1);
        if(A[i][j+1]=='.') recure(i,j+1);
    }
}
int checkH(int i,int j){
    if(A[i-1][j]=='*') count++;
    if(A[i+1][j]=='*') count++;
    if(A[i][j-1]=='*') count++;
    if(A[i][j+1]=='*') count++;
}
int main(){
    int n,m;
    while(1){
        count=0;
        scanf("%d %d",&n,&m);
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++){
            scanf("%s",&A[i]);
        }
        recure(0,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(A[i][j]=='H') checkH(i,j);
            }
        }
        printf("%d\n",count);
    }
}
/*
3 4
....
.H..
....
3 5
.....
.HH..
.....
3 5
.....
.H.H.
.....
5 5
.....
.HHH.
.H.H.
.HHH.
.....
5 6
......
.HHH..
.H....
.HHH..
......
0 0
*/
