#include<iostream>
#include<cstring>
using namespace std;
main(){
    string x,y;
    cin >> x >> y;
    int c=0;
    if(x.size()!=y.size())cout <<"different length";
    else{
        for(int i=0;i<x.size()-1;i++){
            if((int)x[i+1]-x[i]==(int)y[i+1]-y[i]){
                c++;
            }
        }
        if(c==x.size()-1){
            cout << "similarity"<<endl;
            for(int i=0;i<x.size()-1;i++){
                cout << x[i+1]-x[i]<<" ";
            }
        }
        else{
            cout << "difference"<<endl;
            for(int i=0;i<x.size()-1;i++){
                cout << x[i+1]-x[i]<<" ";
            }
            cout << endl;
            for(int i=0;i<x.size()-1;i++){
                cout << y[i+1]-y[i]<<" ";
            }
        }
    }
}
