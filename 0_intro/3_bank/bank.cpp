#include <iostream>
#include <string>

class BankAccount {
public:
    BankAccount(std::string owner, double balance = 0.0) : owner(owner), balance(balance) {}

    void deposit(double amount) {
        balance += amount;
        std::cout << owner << " deposited " << amount << ". New balance: " << balance << std::endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient funds for " << owner << "." << std::endl;
        } else {
            balance -= amount;
            std::cout << owner << " withdrew " << amount << ". New balance: " << balance << std::endl;
        }
    }

private:
    std::string owner;
    double balance;
};

int main() {
    BankAccount account1("Alice", 100.0);
    BankAccount account2("Bob", 50.0);

    account1.deposit(50);
    account1.withdraw(30);
    account2.withdraw(70);

    return 0;
}
