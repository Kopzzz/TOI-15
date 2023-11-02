#include<iostream>
using namespace std;
int c[3];
void bubbleSort(int num[], int SIZE)
{
  int i,j,keep;
  for (i=(SIZE);i>0;i--){
    for (j=1;j<i;j++){
        if (num[j-1] < num[j]){
            keep = num[j-1];
            num[j-1] = num[j];
            num[j] = keep;
        }
    }
  }
}
main()
{
    int n[3][10],x,sumC=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            cin>>x;
            if(x==-9999)break;
            n[i][j]=x;
            c[i]++;
            sumC++;
        }
    }
    int num[sumC],r=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<c[i];j++){
                num[r]=n[i][j];
                r++;
          }
    }
    bubbleSort(num,sumC);
    for(int i=0;i<sumC;i++) cout<<num[i]<<" ";
}
/*
-8 -2 0 7 9 -9999
-4 -1 2 3 -9999
-8 3 5 10 11 15 -9999
*/
