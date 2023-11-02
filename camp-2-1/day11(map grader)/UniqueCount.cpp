#include<cstdio>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>unMap(1000000);
    int n,x;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        unMap[x]=1;
    }
    printf("%d",unMap.size());
}
