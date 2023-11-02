#include<iostream>
using namespace std;
#include<string.h>
main()
{
    int c=0,r;
    char mas[9],tar[256];
    cin >> mas >> tar;
    for(int i=0;i<=strlen(tar)-strlen(mas);i++){
        for(int j=0,r=0;j<strlen(mas);j++){
            if(mas[j]==tar[i+j]) r++;
            if(r==strlen(mas))c++;
        }
    }
    cout << c;
}

