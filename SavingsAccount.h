#ifndef SAVINGSACCOUNT_H 
 #define SAVINGSACCOUNT_H 
 class SavingsAccount {
 private: 
     int id; 
     double balance; 
     double rate; 
     int lastDate;
     double accumulation; 
     void record(double change); 
     void accumulate(int now);
     static double total;
 public:
     SavingsAccount(); 
	 SavingsAccount(int id,double rate); 
     virtual ~SavingsAccount(); 
     const void show();
     void deposit(double money,int now); 
     void withdraw(double money,int now); 
     void settle(int now); 
     void setId(int id); 
     void setRate(double rate);
     const int getId();
     const double getBalance();
     const double getRate();
     static double getTotal();
 }; 
 #endif // SAVINGSACCOUNT_H 
