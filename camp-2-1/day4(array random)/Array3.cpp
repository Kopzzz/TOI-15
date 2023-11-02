#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
void bubble_sort(int A[],int SIZE){
    int i,j,keep;
    for(i=SIZE;i>0;i--){
        for(j=0;j<i-1;j++){
            if(A[j]<A[j+1]){
                keep=A[j];
                A[j]=A[j+1];
                A[j+1]=keep;
            }
        }
    }
}
main()
{
    srand(time(NULL));
    int m=1+rand()%20;
    int arr[2][m],c,keep[m+m],run=0;
    for(int i=0;i<2;i++){
        cout << "[SET " << i+1 << "]" << endl;
        for(int j=0;j<m;j++){
            arr[i][j]=1+rand()%100;
            c=0;
            for(int r=0;r<j;r++){
                if(arr[i][r]==arr[i][j]) {
                        j--;
                        c++;
                }
            }
            if(c==0){
                keep[run]=arr[i][j];
                run++;
                cout << setw(8) << arr[i][j] << " ";
                if((j+1)%10==0) cout << endl ;
            }
        }
        if(m%10!=0) cout << endl ;
    }
    c=0;
    for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                if(arr[1][i]==arr[0][j]) c++;
            }
    }
    cout << endl <<"[SET 1] same as [SET 2] : " << c << " number" << endl;
    cout << endl <<"[SET 1] and [SET 2] " << endl;
    bubble_sort(keep,m+m);

    for(int i=0;i<m+m;i++) if(keep[i]!=keep[i+1]) cout << setw(8) << keep[i];

}
