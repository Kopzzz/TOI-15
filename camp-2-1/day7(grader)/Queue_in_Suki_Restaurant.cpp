#include<iostream>
#include<list>
using namespace std;
main(){
    int i,n,in,out,y,sum=0,keep,count=0;
    list<int> l;
    list<int>:: iterator it=l.begin();
    cin >> n;
    int arr[n],Q[n];
    for(i=0;i<n;i++){
        arr[i]=0;
        Q[i]=0;
    }
    while(1){
        char x;
        cin >> x >> y;
        if(x=='X'&&y==0)break;
        count++;
        sum=0;
        for(i=0;i<n;i++) if(arr[i]==0)sum+=4;
        if(x=='I'){
            if(l.empty()){
                if(sum>=y){
                    if(y<=4){
                        for(i=0;i<n;i++) {
                            if(arr[i]==0){
                                arr[i]=y;
                                Q[i]=count;
                                break;
                            }
                        }
                    }
                    else if(y>4){
                        for(i=0;i<n;i++){
                            if(arr[i]==0){
                                arr[i]=y;
                                Q[i]=count;
                                break;
                            }
                        }
                       for(i=0;i<n;i++){
                            if(arr[i]==0){
                                arr[i]=-1;
                                Q[i]=count;
                                y-=4;
                                if(y<=0)break;
                            }
                        }
                    }
                }
                else l.push_back(y);
            }

            else if(!l.empty()){
            	it=l.begin();
            	for(i=0;i<l.size();i++){
            		if(sum>=*it){
                        l.erase(it);
                        it=l.begin();
                        if(y<=4){
                            for(i=0;i<n;i++) {
                                if(arr[i]==0){
                                    arr[i]=y;
                                    Q[i]=count;
                                    break;
                                }
                            }

                        }
                        else if(y>4){
                            for(i=0;i<n;i++){
                                if(arr[i]==0){
                                    arr[i]=y;
                                    Q[i]=count;
                                    break;
                                }
                            }
                            for(i=0;i<n;i++){
                                if(arr[i]==0){
                                    arr[i]=-1;
                                    Q[i]=count;
                                    y-=4;
                                    if(y<=0){
                                        break;
                                    }
                                }
                            }

                        }

                    }
                    else if(sum<*it) it++;
                }
            }
        }
        else if(x=='O'){
            arr[y]=0;
            for(i=0;i<n;i++)if(Q[i]==Q[y])Q[i]=0;
        }
        for(i=0;i<n;i++){
            if(arr[i]==-1)cout<<"x ";
            else cout<<arr[i]<<" ";
        }
        cout<<'[';
        if(!l.empty()){
            it=l.begin();
            for(i=0;i<l.size();i++){
                if(i==0)cout<<*it;
                else cout<<" "<<*it;
            }
              //  (auto&ite:l)cout<<ite<<" ";
        }
        cout<<']';
        cout<<endl;
    }
}
/*
5
I 3
I 2
I 4
I 5
I 7
O 4
O 2
I 8
O 3
O 4
I 1
I 6
I 2
O 3
O 5
X 0
*/
