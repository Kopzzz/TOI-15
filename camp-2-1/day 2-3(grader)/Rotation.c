#include<stdio.h>
main()
{
    int m,n,r,c;
    scanf("%d %d",&m,&n);
    int p[m][n];
    for (r=0;r<m;r++){
        for(c=0;c<n;c++) scanf("%d",&p[r][c]);
    }
    for(c=n-1;c>=0;c--){
        for(r=0;r<m;r++) {
            printf("%d ",p[r][c]);
        }
        printf("\n");
    }
}
/*
4 3
1 0 0
1 0 0
1 0 0
1 1 1
*/
