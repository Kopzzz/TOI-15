#include<iostream>
#include<list>
#include<algorithm>
#include<time.h>
using namespace std;
main(){
    int n;
    srand(time(NULL));
    list <int> l1,l2,l3,l4;
    vector<int> comp;
    for(int i=0;i<10;i++){
        l1.push_back(1+rand()%100);
        l2.push_back(1+rand()%100);
        l3.push_back(1+rand()%100);
    }

    cout<<"List 1 : ";  for(auto&it:l1)cout<<it<<" ";   cout<<endl;
    cout<<"List 2 : ";  for(auto&it:l2)cout<<it<<" ";   cout<<endl;
    cout<<"List 3 : ";  for(auto&it:l3)cout<<it<<" ";   cout<<endl;

    while(!l1.empty()||!l2.empty()||!l3.empty()){
        comp.clear();
        if(!l1.empty()) comp.push_back(l1.front());
        if(!l2.empty()) comp.push_back(l2.front());
        if(!l3.empty()) comp.push_back(l3.front());
        sort(comp.begin(),comp.end());
        if(l1.front()==comp[0]){
            l4.push_back(l1.front());
            l1.pop_front();
        }
        else if(l2.front()==comp[0]){
            l4.push_back(l2.front());
            l2.pop_front();
        }
        else if(l3.front()==comp[0]){
            l4.push_back(l3.front());
            l3.pop_front();
        }
    }
   for(int i=0;i<30;i++){
        cout<<l4.front()<<" ";
        l4.pop_front();
   }

}
