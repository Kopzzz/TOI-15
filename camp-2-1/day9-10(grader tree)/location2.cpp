#include<cstdio>
int main(){
    int m,n,k,max=0,count=0,sum=0,keep=0;
    scanf("%d %d %d",&m,&n,&k);
    int A[m][n];
    for(int r=0;r<k;r++){
        for(int c=0;c<n;c++) scanf("%d",&A[r][c]);
    }
    for(int c=0;c<k;c++){
        for(int r=0;r<k;r++){
            sum+=A[r][c];
        }
    }
    if(sum==max) count++;
    else if(sum>max){
        max=sum;
        count=1;
    }
    for(int c=1;c<=n-k;c++){
        for(int r=0;r<k;r++){
            sum+=A[r][c+k-1];
            sum-=A[r][c-1];
        }
        if(sum==max) count++;
        else if(sum>max){
            max=sum;
            count=1;
        }
    }
    for(int i=2;i<m;i++){
        if(keep==k) keep=0;

    }



    printf("%d %d",max,count);
}
/*int main(){
    int m,n,k,max=0,count=0;
    scanf("%d %d %d",&m,&n,&k);
    int A[m][n];
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++) scanf("%d",&A[i][j]);

    }
    for(int r=0;r<=m-k;r++){
        int sum=0;
        for(int c=0;c<k;c++){
            for(int i=0;i<k;i++){
                sum+=A[r+i][c];
            }
        }
        if(sum==max) count++;
        else if(sum>max) {
                max=sum;
                count=1;
        }
        else if(sum==max) count++;
        for(int c=1;c<=n-k;c++){
            for(int i=0;i<k;i++){
                sum+=A[r+i][c+k-1];
                sum-=A[r+i][c-1];
            }
            if(sum==max) count++;
            else if(sum>max){
                max=sum;
                count=1;
            }
        }
    }
    printf("%d %d",max,count);
}*/
/*
5 10
2
5 9 2 9 1 2 8 9 1 6
9 1 3 9 8 4 2 1 5 7
2 7 9 3 8 5 2 7 6 8
1 6 2 1 7 7 1 9 4 1
8 5 2 3 9 8 5 6 3 3
*/
