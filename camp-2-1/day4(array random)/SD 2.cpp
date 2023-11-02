#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
main()
{
    int score[3][5] = {{84,71,96,65,79},{90,55,83,68,96},{61,77,82,94,59}};
    float avg[3],SD[3],sum2[3],sum;
    for (int i=0;i<3;i++){
            sum=0;
        for (int j=0;j<5;j++){
                sum+=score[i][j];
        }
            avg[i]=sum/5;
            cout << "average for test " <<i+1<<" is ";
            cout << setprecision(2) << fixed <<avg[i]<<endl;
    }

    for (int i=0;i<3;i++){
            sum2[i]=0;
        for (int j=0;j<5;j++){
            sum2[i]+=pow(score[i][j]-avg[i],2);
        }
        SD[i]=sqrt(sum2[i]/4);
        cout << "S.D. for test "<<i+1<<" is ";
        cout << setprecision(2) << fixed << SD[i] <<endl;
    }
}
