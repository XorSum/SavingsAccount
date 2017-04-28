#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
class SavingsAccount
{
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;
    void record(double change);
    void accumulate(int now);
public:
    SavingsAccount(int id);
    SavingsAccount(int id,double rate);
    SavingsAccount(double rate);
    SavingsAccount();
    virtual ~SavingsAccount();
    void show();
    void deposit(double money,int now);
    void withdraw(double money,int now);
    void settle();
};
#endif // SAVINGSACCOUNT_H
