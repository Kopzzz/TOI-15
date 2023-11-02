#include<iostream>
#include<cstdio>
using namespace std;
main()
{
    int n,i;
    cout << "How many people : " ;
    cin >> n ;
    int child[50],teen[50],adult[50],mid[50],old[50],x;
    int c=0,t=0,a=0,m=0,o=0,sumC=0,sumT=0,sumA=0,sumM=0,sumO=0;
    for(i=0;i<n;i++){
        cin >> x;
        if(x>60){
            old[o]=x;
            o++;
        }
        else if(x>40){
            mid[m]=x;
            m++;
        }
        else if(x>20){
            adult[a]=x;
            a++;
        }
        else if(x>=15){
            teen[t]=x;
            t++;
        }
        else{
            child[c]=x;
            c++;
        }
    }
    for(i=0;i<c;i++){
            sumC+=child[i];
    }
    for(i=0;i<t;i++){
            sumT+=teen[i];
    }
    for(i=0;i<a;i++){
            sumA+=adult[i];
    }
    for(i=0;i<m;i++){
            sumM+=mid[i];
    }
    for(i=0;i<o;i++){
            sumO+=old[i];
    }
    if(c==0)c++; if(t==0)t++; if(a==0)a++; if(m==0)m++; if(o==0)o++;
    printf("Child \t: %d person    avg = %d\n",c,sumC/c);
    printf("Teen \t: %d person    avg = %d\n",t,sumT/t);
    printf("Adult \t: %d person    avg = %d\n",a,sumA/a);
    printf("Middle \t: %d person    avg = %d\n",m,sumM/m);
    printf("Old \t: %d person    avg = %d\n",o,sumO/o);
}
