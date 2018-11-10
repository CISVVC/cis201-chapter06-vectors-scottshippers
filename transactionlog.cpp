/*
file: transactionlog.cpp 
Description: functions for transaction logs
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Nov 2018
*/

#include<iostream>
#include "transactionlog.h"

   void Transactionlog::add_transaction(const Transaction &t)
   {
      min_daily_balance.push_back(t);


