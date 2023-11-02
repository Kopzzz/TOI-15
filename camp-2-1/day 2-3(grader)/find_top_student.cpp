#include<iostream>
using namespace std;
int sum[1001],s[1001][6];
main()
{
    int n,k,maxx=0,keep,c=0,kept;
    cin >> n >> k;
    for(int p=0;p<n;p++){
        for(int r=0;r<k;r++){
                cin>> s[p][r];
                sum[p]+=s[p][r];
        }
    }
    for(int i=0;i<n;i++){
        if(sum[i]>maxx){
            maxx=sum[i];
            keep=i;
        }
    }
    kept=maxx;
    for(int r=0;r<k;r++){
            maxx=0;
        for(int p=0;p<n;p++){
                if(s[p][r]>maxx)maxx=s[p][r];
        }
        if (s[keep][r]==maxx)c++;
    }
    cout << kept << endl << c ;
}
/*
4 3
5 7 8
7 3 9
9 6 9
1 2 3
*/
