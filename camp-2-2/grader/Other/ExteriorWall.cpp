#include <bits/stdc++.h>
using namespace std;
char arr[102][102];
void floodfill(int r,int c,int row,int col){
    arr[r][c]='1';
    if(arr[r+1][c]=='.' && r+1<=row) floodfill(r+1,c,row,col);
    if(arr[r-1][c]=='.' && r-1>=1) floodfill(r-1,c,row,col);
    if(arr[r][c+1]=='.' && c+1<col) floodfill(r,c+1,row,col);
    if(arr[r][c-1]=='.' && c-1>=0) floodfill(r,c-1,row,col);
}

int main(){
    int n,m,ans,ch;
    while(1){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0) break;
        ans=0;
        ch=0;
        for(int i=0;i<=n;i++) gets(arr[i]);
      /*  for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }*/
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='.'){
                    floodfill(i,j,n,m);
                    ch=1;
                }
                if(ch==1) break;
            }
            if(ch==1) break;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                ch=ans;
                if(arr[i][j]=='1'){
                    if(arr[i+1][j]=='H' && i+1<n) ans++;
                    if(arr[i-1][j]=='H' && i-1>=0) ans++;
                    if(arr[i][j+1]=='H' && j+1<m) ans++;
                    if(arr[i][j-1]=='H' && j-1>=0) ans++;
                }
                if(ch==ans-4) ans=ch;
            }
        }
       printf("%d\n",ans);
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

