#include<stdio.h>
const int MAX = 100;
float acc[100];
float *ptr=acc;
void withdraw(int add,float money,float *acc){
    *(acc+add)-=money;
}
void deposit(int add,float money,float *acc){
    *(acc+add)+=money;
}
void transfer(int add1,float money,int add2, float *acc){
    *(acc+add1)-=money;
    *(acc+add2)+=money;
}
main()
{
    int w,add,add1,add2,i;
    float money;
    acc[0]=2000;
    acc[1]=200;
    printf("withdraw  type 1\ndeposite  type 2\ntransfers type 3\n");
    scanf("%d",&w);

    if(w==1){
        printf("Your address : ");
        scanf("%d",&add);
        printf("amount : ");
        scanf("%f",&money);
        withdraw(add,money,ptr);
        printf("remain : %.2f",acc[add]);
    }
    else if(w==2){
        printf("Your address : ");
        scanf("%d",&add);
        printf("amount : ");
        scanf("%f",&money);
        deposit(add,money,ptr);
        printf("remain : %.2f",acc[add]);
    }
    else if(w==3){
        printf("tranfer from address : ");
        scanf("%d",&add1);
        printf("to address : ");
        scanf("%d",&add2);
        printf("amount : ");
        scanf("%f",&money);
        transfer(add1,money,add2,ptr);
        printf("address %d remain : %.2f\naddress %d remain : %.2f",add1,acc[add1],add2,acc[add2]);
    }
    else printf("try again");


}

