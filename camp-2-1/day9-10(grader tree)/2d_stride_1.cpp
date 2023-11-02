#include<list>
#include<iostream>
using namespace std;
main(){
    int n;
    cin>>n;
    list<int> l;
    for(int i=1;i<=n;i++)l.push_back(i%10);
    for(auto& it:l)cout<<it<<" ";
    cout<<endl;
    for(int i=0;i<n-1;i++){
        int keep=l.back();
        l.pop_back();
        l.push_front(keep);
        for(auto& it:l)cout<<it<<" ";
        cout<<endl;
    }
}
