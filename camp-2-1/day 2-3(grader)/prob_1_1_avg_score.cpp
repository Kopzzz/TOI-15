#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    int n;
    double s,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        sum+=s;
    }
    cout << setprecision(6) << fixed <<sum/n;
}
/*
10
5 6 7 99 9 5 7 5 9 0
*/
