/*
file: main.cpp 
Description: program for bank transactions, balance, interest over 30days.
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#include<iostream>
#include<vector>
#include "transaction.h"
#include "transactionlog.h"

int main()
{

   Transactionlog tlog; //reference class, declares tlog
   tlog.add_transaction(Transaction(15,-255,"Cash Withrawal"));
   tlog.print();

return 0;
}

