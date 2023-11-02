#include<cstdio>
int A[501][501];
void right(int,int,int,int);
void down(int,int,int,int);
void up(int,int,int,int);
void left(int,int,int,int);

void right(int i,int j,int c,int size){
   if(A[i][j-1]==0 || A[i][j+1]==0 || A[i-1][j]==0 || A[i+1][j]==0){
        if(A[i][j+1]==0 && j+1<=size)right(i,j+1,c,size);
        else if((A[i][j+1]>0 || j+1>size )&& A[i][j]==0){
            A[i][j]=c;
            c+=1;
            down(i,j,c,size);
        }
        else down(i,j,c,size);
    }
    else A[i][j]=c;
}
void down(int i,int j,int c,int size){
   if(A[i][j-1]==0 || A[i][j+1]==0 || A[i-1][j]==0 || A[i+1][j]==0){
        if(A[i+1][j]==0 && i+1<=size)down(i+1,j,c,size);
        else if((A[i+1][j]>0 || i+1>size )&& A[i][j]==0){
            A[i][j]=c;
            c+=1;
            left(i,j,c,size);
        }
        else left(i,j,c,size);
    }
    else A[i][j]=c;
}
void left(int i,int j,int c,int size){
     if(A[i][j-1]==0 || A[i][j+1]==0 || A[i-1][j]==0 || A[i+1][j]==0){
        if(A[i][j-1]==0 && j-1>0)left(i,j-1,c,size);
        else if((A[i][j-1]>0 || j-1<1) && A[i][j]==0){
            A[i][j]=c;
            c+=1;
            up(i,j,c,size);
        }
        else up(i,j,c,size);
    }
    else A[i][j]=c;
}
void up(int i,int j,int c,int size){
    if(A[i][j-1]==0 || A[i][j+1]==0 || A[i-1][j]==0 || A[i+1][j]==0){
        if(A[i-1][j]==0 && i-1>0)up(i-1,j,c,size);
        else if((A[i-1][j]>0 || i-1<1)&& A[i][j]==0){
            A[i][j]=c;
            c+=1;
            right(i,j,c,size);
        }
        else right(i,j,c,size);
    }
    else A[i][j]=c;
}
int main(){
    int n,i=1,j=1,c=2;
    scanf("%d",&n);
    A[1][1]=1;
    right(i,j,c,n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(A[i][j]>0)printf("%d ",A[i][j]%10);
            else printf("? ");
        }
        printf("\n");
    }
}
