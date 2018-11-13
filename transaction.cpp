/*
file: transaction.cpp 
Description: functions for transactions
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#include "transaction.h"
#include <iostream>

   Transaction::Transaction()
   {
      m_day = 1;
      m_amount = 0;
      m_description = " ";
   }

   Transaction::Transaction(int day, double amount, std::string description)
   {
      m_day = day;
      m_amount = amount;
      m_description = description;
   }

   std::string Transaction::to_string()
   {
      return std::to_string(m_day)
         + "      $" + std::to_string(m_amount)
         + "       " + m_description;
   }

   double Transaction::get_amount()
   {
      return m_amount;
   }

   int Transaction::get_day()
   {
      return m_day;
   }

