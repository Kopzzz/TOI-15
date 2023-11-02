#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
main()
{
    int n,m,i,fail=0,full=0;
    cin >> n >> m;
    float s[n],avg,sum=0,SD,minn=1000000,maxx=0;
    for(i=0;i<n;i++){
        cin>>s[i];
        sum+=s[i];
    }
    avg=sum/n;
    sum=0;
    for(i=0;i<n;i++) {
        sum+=(s[i]-avg,2);
        if(s[i]<avg) fail++;
        if(s[i]==m) full++;
        if(s[i]>maxx) maxx=s[i];
        if(s[i]<minn) minn=s[i];
    }
    SD=sqrt(sum/n-1);
    printf("avg = %.2f\nSD = %.2f\nless than avg : %d person\n",avg,SD,fail);
    printf("more than avg : %d person\nFull score : %d person\n",n-fail,full);
     printf("Highest score = %.2f \nLowest score = %.2f \n",maxx,minn);
}
