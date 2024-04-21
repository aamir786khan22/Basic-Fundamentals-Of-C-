#include<iostream>
 #include<string> 
 using namespace std; 
 class BankAccount {

private:
int accountNumber;
 string customerName;
  double balance;

public:
BankAccount(int accNum, string name, double initialBalance) 
{ accountNumber = accNum;
customerName = name; 
balance = initialBalance;
}

void deposit(double amount) 
{ balance += amount;
cout << "Deposit of " << amount << " \n New balance is " << balance << "." << endl;
}
void withdraw(double amount) 
{ if (amount > balance)
 {
cout << "Insufficient balance. Cannot withdraw " << amount << "." << endl;
} 
else {
balance -= amount;
cout << "Withdrawal of " << amount << " \n New balance is " << balance << "." << endl;}}
double getBalance()
 { return balance;
}
string getCustomerName()
 { return customerName;
}
int getAccountNumber() 
{ return accountNumber;}
};
int main() {
BankAccount account(123456, "harry", 5000.00); 
account.deposit(500);
account.withdraw(200);
cout << "Account holder: " << account.getCustomerName() << endl; 
cout << "Account number: " << account.getAccountNumber() << endl;

cout << "Current balance: " << account.getBalance() << endl; 
return 0;
}
