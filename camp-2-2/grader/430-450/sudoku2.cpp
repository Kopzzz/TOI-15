#include<bits/stdc++.h>
using namespace std;
int arr[10][10];
set<int> s,ans;
set<int>::iterator it;
int main(){
    int n,num,t,i,j,row,col;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&t,&num);
        if(t==-1){
            i=num;
            for(j=1;j<=9;j++){
                it=s.find(arr[i][j]);
                if(it!=s.end()) ans.insert(arr[i][j]);
                s.insert(arr[i][j]);
            }
        }
        if(t==1){
            j=num;
            for(i=1;i<=9;i++){
                it=s.find(arr[i][j]);
                if(it!=s.end()) ans.insert(arr[i][j]);
                s.insert(arr[i][j]);
            }
        }
        if(t==0){
            if(num==1){
                row=1;
                col=1;
            }
            if(num==2){
                row=1;
                col=4;
            }
            if(num==3){
                row=1;
                col=7;
            }
            if(num==4){
                row=4;
                col=1;
            }
            if(num==5){
                row=4;
                col=4;
            }
            if(num==6){
                row=4;
                col=7;
            }
            if(num==7){
                row=7;
                col=1;
            }
            if(num==8){
                row=7;
                col=4;
            }
            if(num==9){
                row=7;
                col=7;
            }
            for(i=row;i<=row+2;i++){
                for(j=col;j<=col+2;j++){
                    it=s.find(arr[i][j]);
                    if(it!=s.end()) ans.insert(arr[i][j]);
                    s.insert(arr[i][j]);

                }
            }
        }
       // for(it=s.begin();it!=s.end();it++)printf("%d ",*it);
        if(ans.size()>0){
            for(it=ans.begin();it!=ans.end();it++)printf("%d ",*it);
            printf("\n");
        }
        else printf("0\n");
        s.clear();
        ans.clear();
    }
}

