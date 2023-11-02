#include<bits/stdc++.h>
using namespace std;
main(){
    int n,e=0,o=0;
    srand(time(NULL));
    n=10+rand()%20;
    vector<int> ran,even,odd;
    for(int i=0;i<n;i++){
        ran.push_back(rand()%100);
        if(ran[i]%2==0){
            even.push_back(ran[i]);
            e++;
        }
        else {
            odd.push_back(ran[i]);
            o++;
        }
    }
    printf("Random numbers [%d]\n",n);
    for (int i=0;i<n;i++)cout << ran[i] <<" ";
    reverse(even.end(),even.begin());
    printf("\nEven numbers [%d]\n",e);
    for (int i=0;i<e;i++)cout << even[i] <<" ";
    reverse(odd.end(),odd.begin());
    printf("\nOdd numbers [%d]\n",o);
    for (int i=0;i<o;i++)cout << odd[i] <<" ";
    while(1){
        if(even[e]>odd[o]){
            even.pop_back();
            e--;
        }
        else {
            odd.pop_back();
            o--;
        }
        if(e==0||o==0)break;
    }
    if(e==0)cout<<endl<<"Even is the winer!";
    else cout<<endl<<"Odd is he winer!";

}
