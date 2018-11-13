/*
file: main.cpp 
Description: program for bank transactions, balance, interest over 30days.
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#include <iostream>
#include "transactionlog.h"

int main()
{

   Transactionlog tlog; //reference class, declares tlog
   
   tlog.add_transaction(Transaction(1,1143.24,"Initial Balance"));
   tlog.add_transaction(Transaction(1,-255.00,"Cash Withrawal"));
   tlog.add_transaction(Transaction(3,-67.08, "ARCO fuel"));
   tlog.add_transaction(Transaction(10,-60.00,"ATM Withrawal"));
   tlog.add_transaction(Transaction(11,-237.50,"Online Payment Verizon"));
   tlog.add_transaction(Transaction(15,-300.00,"Cash Withrawal"));
   tlog.add_transaction(Transaction(16,-223.32,"Online Payment SCE"));
   tlog.add_transaction(Transaction(17,-349.99,"SamAsh"));
   tlog.add_transaction(Transaction(19,-15.12,"Taco Bell"));
   tlog.add_transaction(Transaction(22,1233.98,"Burger King pyrl"));
   tlog.add_transaction(Transaction(29,-24.76,"Amazon"));


   tlog.print();

return 0;
}

