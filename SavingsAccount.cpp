#include "SavingsAccount.h"
#include <iostream>
using namespace std;
SavingsAccount::SavingsAccount(int id=123456,double rate=0.02)
{
    //ctor
    this->id=id;
    this->rate=rate;
    accumulation=0;
    lastDate=0;
    balance=0;
}
SavingsAccount::SavingsAccount(int id=123456)
{
    //ctor
    this->id=id;
    rate=0.02;
    accumulation=0;
    lastDate=0;
    balance=0;
}
SavingsAccount::SavingsAccount(double rate)
{
    //ctor
    id=123456;
    this->rate=rate;
    accumulation=0;
    lastDate=0;
    balance=0;
}
SavingsAccount::SavingsAccount()
{
    //ctor
    id=123456;
    rate=0.02;
    accumulation=0;
    lastDate=0;
    balance=0;
}
SavingsAccount::~SavingsAccount()
{
    //dtor
}
void SavingsAccount::show()
{
    cout<<"id="<<id<<endl;
    cout<<"balance="<<balance<<endl;
}

