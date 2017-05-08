#include <iostream> 
 #include "SavingsAccount.h"

 using namespace std;
double SavingsAccount::total=0;
 int main() {
     int id,data; 
     double money,rate;

	 id=123456;
	 rate=0.02;
     SavingsAccount b(id,rate),c;
     cout<<"请输入id和年利率"<<endl;
     cin>>id>>rate;
     c.setId(id);
     c.setRate(rate);
     b.show();
     c.show();
     c.withdraw(200,3);
     b.withdraw(10000,1); 
     b.show(); 
     b.settle(365); 
     b.deposit(5000,660); 
     b.settle(660); 
     b.show();
     c.settle(660);
     cout<<b.getBalance()<<" "<<b.getId()<<" "<<b.getRate()<<" "<<b.getTotal()<<endl;
     cout<<c.getBalance()<<" "<<c.getId()<<" "<<c.getRate()<<" "<<c.getTotal()<<endl;
     cout<<"Total is "<<SavingsAccount::getTotal()<<endl;

     return 0; 
 } 
