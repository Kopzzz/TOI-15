#include<iostream>
using namespace std;
int x[100000];
main(){
	int c;
	cin >> c;
	int n,m,r;
	char nul;
	for(int i=0;i<c;i++){
		cin >> n >> nul >> m;
		r=0;
		for (int j=1;j<=n;j++) x[j]=1;
		for (int j=0;j<n;j++){
			for(int k=0;k<m;k++){
				++r;
				while(x[r]==0){
					++r;
					if(r>n) r=1;	
				}	
				
			}
			if(j!=n-1) cout << r << "->";	
			else cout << r << endl; 
			x[r]=0; 
		}
	}
}
// 1 8 4
