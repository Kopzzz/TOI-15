#include<iostream>
#include<cstring>
using namespace std;

bool check(string str1, string str2, int m, int n){
   int j = 0;
   for (int i=0; i<n&&j<m ; i++)
       if (str1[j] == str2[i])
         j++;

   return (j==m);
}
main()
{
    int n;
    string str1,str2;
    cin >> str1 >>n;
    int x = str1.size();
    for(int i=0;i<n;i++){
        cin >> str2;
        int y = str2.size();
         check(str1, str2, x, y)?cout << "yes"<<endl:cout << "no"<<endl;
    }

}
