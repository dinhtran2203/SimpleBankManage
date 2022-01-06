/*
 * Bank.cpp
 *
 *  Created on: Dec 31, 2021
 *      Author: Dinh's Study Laptop
 */

#include "Bank.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void Bank::open_account() {
  cout << "Enter full-name: " << endl;
  cin.ignore();
  cin.getline(name, 100);
  cout << "enter your address: " << endl;
  cin.ignore();
  cin.getline(add, 100);
  cout << "Account type: Saving (s) or currunt(c): " << endl;
  cin >> type;
  cout << "Enter deposite amount: " << endl;
  cin >> balance;
  cout << "Account is created!!" << endl;
}

void Bank::deposite_money() {
  cout << "Enter amount you want to take" << endl;
  cin >> dep_amount;
  balance += dep_amount;
  cout << "Current total amount" << endl;
}

void Bank::withdraw_money() {
  float wit_amount;
  cout << "Withdraw: " << endl;
  cin >> wit_amount;
  balance = balance - wit_amount;
  cout << "Your account balance: " << balance;
}

void Bank::display_account() {
  cout << "Enter your full-name: " << name << endl;
  cout << "Your address : " << add << endl;
  cout << "Type of Account : " << type << endl;
  cout << "Amount you deposite: " << balance << endl;

}

