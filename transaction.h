/*
file: transaction.h
Description: header file for transactions
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <string>
#include <vector>

   class Transaction
   {
   private:
      int m_day;
      double m_amount;
      std::string m_description;

   public:
      Transaction();
      Transaction(int day, double amount, std::string description);
      std::string to_string();
      double get_amount();
      int get_day();
   };

#endif
