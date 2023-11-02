#include<iostream>
#include<string.h>
using namespace std;
int compare(char x[],char y[]){
    if(strcmp(x,y)==0) return 1;
    else return 0;
}
int main()
{
    char x[10000],y[10000];
    cin >> x;
    for(int i=strlen(x),j=0;i>0;i--){
        y[i-1]=x[j];
        j++;
    }
    compare(x,y);
}
