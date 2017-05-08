#include "SavingsAccount.h" 
#include <iostream> 
using namespace std; 
SavingsAccount::SavingsAccount() {
	id=1; 
	rate=0.02; 
	accumulation=0; 
	lastDate=0;
	balance=0; 
} 
SavingsAccount::SavingsAccount(int id,double rate) {
	this->id=id;
	this->rate=rate;
	accumulation=0; 
	lastDate=0;
	balance=0; 
}
SavingsAccount::~SavingsAccount() {
} 
const void SavingsAccount::show() {
	cout<<"the ballence of "<<id<<" is "<<balance<<endl;
} 
void SavingsAccount::record(double change) {
	if (change>=0) cout<<"the balance of "<<id<<" has increased "<<change<<" yuan"<<endl;
	else cout<<"the balance of "<<id<<" has decreased "<<-change<<" yuan"<<endl;
	balance+=change;
	total+=change;
} 
void SavingsAccount::accumulate(int now) {
	accumulation+=(now-lastDate)*balance; 
	lastDate=now; 
} 
void SavingsAccount::withdraw(double money,int now) {
	accumulate(now); 
	record(money); 
} 
void SavingsAccount::deposit(double money,int now) {
	accumulate(now); 
	record(-money); 
} 
void SavingsAccount::settle(int now) {
	accumulate(now);
	record(rate*accumulation/365);
	accumulation=0;
} 
void SavingsAccount::setRate(double rate) { 
	this->rate=rate; 
} 
void SavingsAccount::setId(int id) { 
	this->id=id; 
}

const double SavingsAccount::getBalance() {
	return this->balance;
}

const int SavingsAccount::getId() {
	return this->id;
}

const double SavingsAccount::getRate() {
	return this->rate;
}

double SavingsAccount::getTotal() {
	return total;
}

