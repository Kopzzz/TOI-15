#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    set<long> s;
    long n,num;
    cin >> n;
    while(n--){
        cin >> num;
        s.insert(num);
    }
    cout << s.size();
}
