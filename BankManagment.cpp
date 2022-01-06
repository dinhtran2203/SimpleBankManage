//============================================================================
// Name        : BankManagment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Bank.h"

using namespace std;

int main() {
  int option;
  char comd = 'y';
  Bank bank;
do {
  cout << "1/ Open account" << endl;
  cout << "2/ Deposite Money"<< endl;
  cout << "3/ Withdraw Money" << endl;
  cout << "4/ Display Account" << endl;
  cout << "5/ Exit" << endl;
  cout << "========== Select option above =========" << endl;
  cin >> option;
  switch (option) {
    case 1:
    cout << "1/ Open Account" << endl;
    bank.open_account();
    break;
    case 2:
    cout << "2/ Deposite" << endl;
    bank.deposite_money();
    break;
    case 3:
    cout << "3/ Withdraw Money" << endl;
    bank.withdraw_money();
    break;
    case 4:
    cout << "4/ Display Account" << endl;
    bank.display_account();
    break;
    case 5:
    if (option == 5) {
      exit(1);
    }
    default:
    cout << "THis option is not exist" << endl;
    cout << "Do you want to select next option? (y/n) " << endl;
    comd = getch();
    if (tolower(comd) == 'n') {
      exit(0);
    }
    break;
  }
}while (tolower(comd) == 'y');
  getch();
  return 0;

}

