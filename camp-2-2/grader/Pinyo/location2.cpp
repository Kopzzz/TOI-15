#include<cstdio>
int arr[301][1001];
main(){
    int n,m,k,num,mx=-1,sum,temp=0,i,j;
    scanf("%d %d %d",&n,&m,&k);
   for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&num);
            if(i%(k+1)==0){
                if(j-1>=0) arr[i%(k+1)][j]=num+arr[k][j]+arr[i%(k+1)][j-1]-arr[k][j-1];
                else arr[i%(k+1)][j]=num+arr[k][j];
            }
            else{
                if(j-1>=0) arr[i%(k+1)][j]=num+arr[i%(k+1)-1][j]+arr[i%(k+1)][j-1]-arr[i%(k+1)-1][j-1];
                else arr[i%(k+1)][j]=num+arr[i%(k+1)-1][j];
            }
            if(i%(k+1)!=k){
                if(j-k>=0) sum=arr[i%(k+1)][j]-arr[i%(k+1)+1][j]-arr[i%(k+1)][j-k]+arr[i%(k+1)+1][j-k];
                else sum=arr[i%(k+1)][j]-arr[i%(k+1)+1][j];
            }
            else {
                 if(j-k>=0)sum=arr[i%(k+1)][j]-arr[0][j]-arr[i%(k+1)][j-k]+arr[0][j-k];
                 else sum=arr[i%(k+1)][j]-arr[0][j];
            }
            if(sum==mx) temp++;
            if(sum>mx){
                mx=sum;
                temp=1;
            }
        }
    }
    printf("%d %d",mx,temp);
}
