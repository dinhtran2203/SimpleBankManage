/*
 * Bank.h
 *
 *  Created on: Dec 31, 2021
 *      Author: Dinh's Study Laptop
 */

#ifndef BANK_H_
#define BANK_H_

class Bank {
  char name[100], add[100];
  char type;
  int balance;
  int dep_amount;
 public:
  void open_account();
  void deposite_money();
  void withdraw_money();
  void display_account();
};

#endif /* BANK_H_ */
