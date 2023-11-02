#include<bits/stdc++.h>
using namespace std;
queue<int> q[26];
int table[26],tim[26],w[26];
bool visit[101],ch;
int main(){
    int n,t,num,temp=1;
    char in;
    string s;
    scanf("%d %d",&t,&n);
    table[0]=1;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        temp+=num;
        table[i]=temp;
    }
    fflush(stdin);
    while(1){
        scanf("%s",&s);
        in=s[0];
        if(s[0]=='0') break;
     /*   printf("%c",in);
        if(in=='0') return 0;*/
        ch=0;
        if(in>=65){
            w[in-65]++;
            for(int i=table[in-65];i<table[in-65+1];i++){
                if(visit[i]==0){
                    visit[i]=1;
                    tim[in-65]++;
                    printf("%c%d %d",in,tim[in-65],i);
                    ch=1;
                    break;
                }
            }
            if(ch==0){
                q[in-65].push(1);
                printf("%c%d w",in,w[in-65]);
            }
        }
        else{
            if(s.size()==2) in=(in-48)*10+s[1]-48;
            else in-=48;
            visit[in]=0;
            if(q[in].size()==0) printf("-- %d\n",in);
            else {
                q[in].pop();
                visit[in]=1;
                for(int i=0;i<t;i++){
                    if(table[i]>in){
                        tim[i-1]++;
                        printf("%c%d %d",i-1+65,tim[i-1],in);
                        break;
                    }
                    if(table[i]==in){
                        tim[i]++;
                        printf("%c%d %d",i+65,tim[i],in);
                        break;
                    }
                }
            }
        }
    }
    //-48
}

