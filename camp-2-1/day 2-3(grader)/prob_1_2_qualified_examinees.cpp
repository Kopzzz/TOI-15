#include<iostream>
using namespace std;
#include<string>
class Std {
public:
    string id;
    int score;
};
main()
{
    Std A[10001];
    int n,c=0;
    float sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A[i].id >> A[i].score;
        sum+=A[i].score;
    }
    sum/=n;
    for(int i=0;i<n;i++){
        if(A[i].score>=sum)c++;
    }
    cout << c <<endl;
    for(int i=0;i<n;i++){
        if(A[i].score>=sum){
                cout << A[i].id<<endl;
        }
    }

}
