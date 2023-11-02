#include<cstdio>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
int lift[1001];
int main(){
    int n,k,x,f,w;
    scanf("%d %d",&n,&k);
    for(int i=0;i<k;i++){
        scanf("%d",&x);
        lift[x]++;
    }
    scanf("%d",&x);
    while(x--){
        scanf("%d %d",&f,&w);
        int j=1;
        while(1){
            if(lift[f]>0){
                printf("%d\n",f);
                lift[f]--;
                lift[w]++;
                break;
            }
            if(f+j<=n && lift[f+j]>0){
                printf("%d\n",f+j);
                lift[f+j]--;
                lift[w]++;
                break;
            }
            if(f-j>=1 && lift[f-j]>0){
                printf("%d\n",f-j);
                lift[f-j]--;
                lift[w]++;
                break;
            }
            j++;
        }
    }
}
/*
10 8
1 1 1 1 9 9 9 9
15
5 2
5 1
5 2
5 1
5 10
5 10
10 1
5 1
5 4
5 1
5 1
6 8
8 6
1 10
3 7
*/
