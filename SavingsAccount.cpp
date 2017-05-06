#include "SavingsAccount.h" 
#include <iostream> 
using namespace std; 
SavingsAccount::SavingsAccount() 
{ 
	id=1; 
	rate=0.02; 
	accumulation=0; 
	lastDate=0; 
	lastSettleData=0; 
	balance=0; 
} 
SavingsAccount::SavingsAccount(int id,double rate) 
{ 
	this->id=id;
	this->rate=rate;
	accumulation=0; 
	lastDate=0; 
	lastSettleData=0; 
	balance=0; 
}
SavingsAccount::~SavingsAccount() 
{ 
} 
void SavingsAccount::show() 
{ 
	cout<<"id="<<id<<"   balance="<<balance<<endl; 
} 
void SavingsAccount::record(double change) 
{ 
	if (change>=0) cout<<"the balance has increased "<<change<<" yuan"<<endl; 
	else cout<<"the balance has decreased "<<-change<<" yuan"<<endl; 
	balance+=change; 
} 
void SavingsAccount::accumulate(int now) 
{ 
	accumulation+=(now-lastDate)*balance; 
	lastDate=now; 
} 
void SavingsAccount::withdraw(double money,int now) 
{ 
	accumulate(now); 
	record(money); 
} 
void SavingsAccount::deposit(double money,int now) 
{ 
	accumulate(now); 
	record(-money); 
} 
void SavingsAccount::settle(int now) 
{ 
	accumulate(now); 
	double average=accumulation/(now-lastSettleData); 
	record(average*rate); 
	accumulation=0;
	lastSettleData=now; 
} 
void SavingsAccount::setRate(double rate) { 
	this->rate=rate; 
} 
void SavingsAccount::setId(int id) { 
	this->id=id; 
} 

