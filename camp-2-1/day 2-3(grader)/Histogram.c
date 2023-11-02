#include<stdio.h>
int c[10];
main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int p[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&p[i][j]);
            for(int k=0;k<10;k++){
                if(p[i][j]==k)c[k]++;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",i);
        for(j=c[i];j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
