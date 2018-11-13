/*
file: transactionlog.h 
Description: header file for transaction logs
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#ifndef TRANSACTIONLOG_H
#define TRANSACTIONLOG_H
#include <vector>
#include "transaction.h"

   class Transactionlog
   {
      std::vector<Transaction> m_transactions;
      double m_balance; // declare member function
      double m_min_balance; // declare member function
      double m_average_balance; // declare member function

   public:
      Transactionlog();
      void add_transaction(const Transaction &t);
      int min_daily_balance();
      double average_daily_balance();
      void print();
   };

#endif
