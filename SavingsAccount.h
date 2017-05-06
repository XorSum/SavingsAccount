#ifndef SAVINGSACCOUNT_H 
 #define SAVINGSACCOUNT_H 
 class SavingsAccount 
 { 
 private: 
     int id; 
     double balance; 
     double rate; 
     int lastDate; 
     int lastSettleData; 
     double accumulation; 
     void record(double change); 
     void accumulate(int now); 
 public: 
     SavingsAccount(); 
	 SavingsAccount(int id,double rate); 
     virtual ~SavingsAccount(); 
     void show(); 
     void deposit(double money,int now); 
     void withdraw(double money,int now); 
     void settle(int now); 
     void setId(int id); 
     void setRate(double rate); 
 }; 
 #endif // SAVINGSACCOUNT_H 
