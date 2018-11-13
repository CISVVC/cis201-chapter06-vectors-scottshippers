/*
file: transactionlog.cpp 
Description: functions for transaction logs
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#include <iostream>
#include "transactionlog.h"

   Transactionlog::Transactionlog()
   {
      m_balance = 0;
      m_min_balance = false;
      m_average_balance = 0;
   }   

   void Transactionlog::add_transaction(const Transaction &t)
   {
      min_transactions.push_back(t);
      m_balance += t.get_amount();
      min_daily_balance();
   }
   int Transactionlog::min_daily_balance()
   {
      if (m_balance < m_min_balance ||m_min_balance == false)
         m_min_balance = m_balance;
   }

   double Transactionlog::average_daily_balance()
   {
      double sum_total = 0;
      for(double i = 0; i < m_transactions.size();i++)
   {
         sum_total = sum_total + m_transactions[i].get_amount();
   }
      return sum_total / 30;
   }

   void Transactionlog::print()
   {
      double sum_total = 0;
      std::cout << "XXXXX Monthly Bank Statement XXXXX" << std::endl;
      for(double i = 0; i < m_transactions.size();i++)
      {
         std::cout << "Day      Amount      Description" << std::endl;
         std::cout << m_transactions[i].to_string() << std::endl;
         sum_total = sum_total + m_transactions[i].get_amount();
         std::cout << "-----------------------------------" << std::endl;
         std::cout << "Daily Balance: $" << sum_total << std::endl;
         std::cout << "     " << std::endl;
      }
      std::cout << "Monthly Balance:        $" << sum_total << std::endl;
      std::cout << "Average Daily Balance:  $" << average_daily_balance() << std::endl;
      std::cout << "Minimum Daily Balance:  $" << m_min_balance << std::endl;
      std::cout << "Total Interest Earned:  $" << sum_total * 0.005 << std::endl;
   }


