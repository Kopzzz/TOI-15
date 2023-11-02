#include<iostream>
#include<string>
using namespace std;
class Bank{
    private:
        float account[10000];
    public:
        bool deposit(float amount,int accID);
        float showAccount(int accID);
};

bool Bank::deposit(float amount,int accID){
    account[accID]+=amount;
    return true;
}
float Bank::showAccount(int accID){
    cout << "Account ID : " << accID << ", " << account[accID] <<" Bath"<< endl;
    return account[accID];
}
class Krungsri:public Bank{  //สืบทอดลักษณะของ Bank มาให้ Krungsri
    public:
        float newCar();//fucntion
};
float Krungsri::newCar(){ //นิยาม newCar
    cout << "You got 500,000 baht from Krungsri New Car" << endl;
    return 500000.0;
}

class Customer{
    public:
        Customer(string name,int accID); //ชื่อเหมือน class มันคือ constructors
        ///เมือทีการโหลด object ของ Human constructors จะถูกเรียกมาโดยอตโนมัติ
        Customer(); //ถ้าไม่มี paramiter จะถูกใช้ constructors นี้แทน
        ~Customer(); //destructor
        int getAccID();
    private:
        string name;
        int accID;

};
Customer::Customer(string name, int accID){
    this->name = name;
    this->accID = accID;
}
Customer::Customer() {
    this->name = "unknown";
}
Customer::~Customer(){
    cout << "Bye " << name ;
}
int Customer::getAccID(){
    return accID;
}
main(){
    int accID = 1234;
    float bath;

    Krungsri krungsriBank;

    Customer tiwat = Customer("Tiwat Suprattanakul",accID);
    krungsriBank.deposit(500,tiwat.getAccID());
    krungsriBank.showAccount(tiwat.getAccID());

    krungsriBank.deposit(500,tiwat.getAccID());
    krungsriBank.showAccount(tiwat.getAccID());

    bath = krungsriBank.newCar();
    krungsriBank.deposit(bath,tiwat.getAccID());
    krungsriBank.showAccount(tiwat.getAccID());


}
