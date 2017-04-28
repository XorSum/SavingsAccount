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
    void record();
    void accumulate();
public:
    SavingsAccount(int id);
    SavingsAccount(int id,double rate);
    SavingsAccount(double rate);
    SavingsAccount();
    virtual ~SavingsAccount();
    void show();
    void deposit();
    void withdraw();
    void settle();
};
#endif // SAVINGSACCOUNT_H
