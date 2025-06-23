#pragma once

#include <string>

class BankAccount {
public:
    BankAccount(const std::string& ownerName, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    void transfer(BankAccount& other, double amount);

    double balance() const noexcept { return balance_; }
    std::string ownerName() const noexcept { return ownerName_; }

private:
    std::string ownerName_;
    double balance_;
};