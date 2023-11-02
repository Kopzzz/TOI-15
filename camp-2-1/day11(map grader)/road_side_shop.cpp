#include<cstdio>
#include<map>
using namespace std;
int main(){
    map<int,int>Map;
    int n,k,x,sum=0,max=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k*2+1;i++){
        scanf("%d",&x);
        Map[i]=x;
        sum+=Map[i];
        if(sum>max) max=sum;
    }
    for(int i=k*2+1;i<n;i++){
        scanf("%d",&x);
        Map[i]=x;
        sum = sum-Map[i-(k*2+1)]+Map[i];
        Map.erase(i-(k*2+1));
        if(sum>max) max=sum;
    }
    printf("%d",max);
}
