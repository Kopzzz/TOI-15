#include<stdio.h>
int POW(int);
main()
{
    int n[100],i,j,count[100],a=0,b;
    printf("INPUT NUMBER : ");
    scanf("%ld",&i);

	for(j=1;j<=10;j++)
    {
        n[j]=i%10;
        i   =i/10;
        a++;
        if (i==0)
        	break;
    }

    for(j=a;j>0;j--)
    {
        b=POW(j);
        printf(" %5d digit = %d\n",b,n[j]);
    }

count[0] = 0; count[1] = 0; count[2] = 0; count[3] = 0; count[4] = 0; count[5] = 0; count[6] = 0; count[7] = 0; count[8] = 0; count[9] = 0;

    for(j=1;j<6;j++)
    {

        switch(n[j])
            {
                case 0 : count[0]++; break;
                case 1 : count[1]++; break;
                case 2 : count[2]++; break;
                case 3 : count[3]++; break;
                case 4 : count[4]++; break;
                case 5 : count[5]++; break;
                case 6 : count[6]++; break;
                case 7 : count[7]++; break;
                case 8 : count[8]++; break;
                case 9 : count[9]++; break;
            }

    }
    for(b=0;b<10;b++)
    {
        if(count[b]>0)
        {
            printf(" '%d' = %d\n",b,count[b]);
        }
    }
}
int POW(int x)
{
    int y,z=1;
    for(y=1;y<x;y++)
    {
        z = z*10;
    }
    return(z);
}
