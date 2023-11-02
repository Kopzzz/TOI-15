#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
main()
{
    int n,i;
    cin >> n;
    float b[n],m[n],f[n],sumB=0,sumM=0,sumF=0,avgB,avgM,avgF,avg=0;
    float maxB=0,maxM=0,maxF=0,minB=100,minM=100,minF=100,SD,sum[n],total=0;
    for(i=0;i<n;i++){
        cin >> b[i] >> m[i] >> f[i];
        if(b[i]>60||m[i]>20||f[i]>20){
            cout << "Error!";
            break;
        }
        sumB+=b[i];  sumM+=m[i];  sumF+=f[i];
        sum[i]= b[i]+m[i]+f[i];
        avg+=sum[i];
    }
    avg/=n;
    for(i=0;i<n;i++) total+=pow(sum[i]-avg,2);
    SD=sqrt(total/n-1);
    avgB=sumB/n; avgM=sumM/n; avgF=sumF/n;
    for(i=0;i<n;i++){
        if(b[i]>maxB) maxB=b[i];
        if(m[i]>maxM) maxM=m[i];
        if(f[i]>maxF) maxF=f[i];
        if(b[i]<minB) minB=b[i];
        if(m[i]<minM) minM=m[i];
        if(f[i]<minF) minF=f[i];
    }
    printf("avg score Between : %.2f\n",avgB);
    printf("avg score Mid : %.2f\n",avgM);
    printf("avg score Final : %.2f\n",avgF);
    printf("Highest score Between : %.2f\n",maxB);
    printf("Lowest score Between : %.2f\n",minB);
    printf("Highest score Mid : %.2f\n",maxM);
    printf("Lowest score Mid : %.2f\n",minM);
    printf("Highest score Final : %.2f\n",maxF);
    printf("Lowest score Final : %.2f\n",minF);
    for(i=0;i<n;i++){
         printf("Student %d  total score : %.2f\n",i+1,sum[i]);
    }
    printf("S.D. = %.2f",SD);
}
/*
3
45 15 10
55 18 19
49 17 16
*/
