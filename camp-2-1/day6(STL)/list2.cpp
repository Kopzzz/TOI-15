#include<bits/stdc++.h>
using namespace std;
main(){
    int n,e=0,o=0;
    srand(time(NULL));
    n=10+rand()%20;
    list<int> ran,even,odd;
    for(int i=0;i<n;i++){
        ran.push_front(rand()%100);
        if(ran.front()%2==0){
            even.push_front(ran.front());
            e++;
        }
        else {
            odd.push_front(ran.front());
            o++;
        }
    }
    printf("Random numbers [%d]\n",n);
    for (auto&it:ran)cout << it <<" ";

    even.reverse();
    printf("\nEven numbers [%d]\n",e);
    for (auto&it:even)cout << it <<" ";
    odd.reverse();
    printf("\nOdd numbers [%d]\n",o);
    for (auto&it:odd)cout << it <<" ";
    while(1){
        if(even.front()>odd.front()){
            even.pop_front();
            e--;
        }
        else {
            odd.pop_front();
            o--;
        }
        if(e==0||o==0)break;
    }
    if(e==0)cout<<endl<<"Even is the winer!";
    else cout<<endl<<"Odd is he winer!";

}
