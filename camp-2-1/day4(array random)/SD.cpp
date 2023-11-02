#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
#define N 5
using namespace std;
main()
{
    int score[N];
    float sum=0,avg,SD;
    for (int i=0;i<N;i++){
        cin >> score[i];
        sum+=score[i];
    }
    avg=sum/N;
    sum=0;
    for (int i=0;i<N;i++) sum+=pow(score[i]-avg,2);
    SD=sqrt(sum/N-1);
    for(int i=0;i<N;i++) printf("student %d scores %d\n",i+1,score[i]);
    cout << "avg = " << setprecision(2) <<fixed<< avg << endl;
    cout << "S.D. = " << SD ;
}
//84 71 96 65 79
