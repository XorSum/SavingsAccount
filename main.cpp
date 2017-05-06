#include <iostream> 
 #include "SavingsAccount.h" 
 using namespace std; 
 int main() 
 { 
     int id,data; 
     double money,rate; 
//     cout<<"请输入id和年利率"<<endl; 
//     cin>>id>>rate; 
	 id=123456;
	 rate=0.02;
     SavingsAccount b(id,rate); 
//     b.setId(id); 
//     b.setRate(rate); 
     b.show(); 
     b.withdraw(10000,1); 
     b.show(); 
     b.settle(365); 
     b.deposit(5000,660); 
     b.settle(660); 
     b.show(); 
     return 0; 
 } 
