#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int n;
    cin >> n;
    float x[n],y[n],sum=0;
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++){
            cin >> y[i];
            sum+=pow(x[i]+y[i],2);
    }
    cout << sum;
}
/*
6
145.93 85.44 30.25 66.12 913.48 2.078
355.49 518.77 119.0 4.209 594.321 5.01357
*/
