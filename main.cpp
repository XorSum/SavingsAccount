#include <iostream>
#include "SavingsAccount.h"
using namespace std;
int main()
{
    SavingsAccount b(222222,0.01);
    b.show();
    b.withdraw(10000,1);
    b.deposit(1000,2);
    b.show();
    return 0;
}
