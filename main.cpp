#include <iostream>
#include "SavingsAccount.h"
using namespace std;
int main()
{

    SavingsAccount a(222222);
    SavingsAccount b(222222,0.01);
    SavingsAccount c(0.03);
    SavingsAccount d;
    a.show();
    b.show();
    c.show();
    d.show();
    return 0;
}
