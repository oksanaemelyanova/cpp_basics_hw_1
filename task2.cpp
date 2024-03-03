#include "hw1.hpp"

struct bank_account {
  int account_number;
  std::string account_holder_name;
  int account_balance;
};

void change_balance(bank_account *account, int new_balance) {
  
  account->account_balance = new_balance;
  
}

int task2() {  
  bank_account account1;
  int new_balance;

  std::cout << "enter account number: \n";
  std::cin >> account1.account_number;
  std::cout << "enter account holder name: \n";
  std::cin >> account1.account_holder_name;
  std::cout << "enter account balance: \n";
  std::cin >> account1.account_balance;



  std::cout << "enter new balance: \n";
  std::cin >> new_balance;

  change_balance(&account1, new_balance);

  std::cout << "your account: " << account1.account_holder_name << ", "
            << account1.account_number << ", " << account1.account_balance
            << std::endl;

  return (0);
}