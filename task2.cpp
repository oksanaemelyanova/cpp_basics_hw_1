#include "hw1.hpp"

struct bank_account {
  int account_number;
  std::string account_holder_name;
  int account_balance;
};

void create_account(bank_account *account) {
  std::cout << "enter account number: \n";
  std::cin >> account->account_number;
  std::cout << "enter account holder name: \n";
  std::cin >> account->account_holder_name;
  std::cout << "enter account balance: \n";
  std::cin >> account->account_balance;
  std::cout << "enter new balance: \n";
  std::cin >> account->account_balance;
  std::cout << "your new account is: " << account->account_holder_name << ", "
            << account->account_number << ", " << account->account_balance
            << std::endl;
}

int task2() {  
  bank_account account1;

  create_account(&account1);
  return (0);
}