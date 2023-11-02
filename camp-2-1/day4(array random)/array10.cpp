#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
main(){
	srand(time(NULL));
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=1+rand()%n;
		for(int j=i-1;j>=0;j--){
			if(arr[i]==arr[j]){
				i--;
			}
		}	
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
		if((i+1)%20==0) cout << endl;
	}
}
