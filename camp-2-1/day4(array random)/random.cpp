#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
using std::setw;
main(){
    int n,m,r;
    srand(time(NULL));
    cout << "Max value : "; cin >> r;
    cout << "# sets : "; cin >> n;
    cout << "# in each set : "; cin >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        cout << "[SET " << i+1 << "]" << endl;
        for(int j=0;j<m;j++){
            arr[i][j]=1+rand()%r;
            cout << setw(8) << arr[i][j] << " ";
            if((j+1)%10==0) cout << endl;
        }
        if(m%10!=0) cout << endl;
    }

}
