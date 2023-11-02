#include<cstdio>
int row[1000001],col[1000001];
main(){
    int n,count=1,r,c,g=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&r,&c);
        if(row[r]==0&&col[c]==0){
            row[r]=count;
            col[c]=count;
            g++;
            count++;
        }
        else if(row[r]==0&&col[c]!=0) row[r]=col[c];
        else if(row[r]!=0&&col[c]==0) col[c]=row[r];
        else if(row[r]!=0&&col[c]!=0&&row[r]!=col[c]) g--;
    }
    printf("%d",(g+1)/2);
}

