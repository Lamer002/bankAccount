#pragma once

#include <string>
#include <stdexcept>

class BankAccount {
public:
    BankAccount(const std::string& ownerName, double initialBalance, double limitBalance = 1'000'000);

    void deposit(double amount);
    void withdraw(double amount);
    void transfer(BankAccount& other, double amount);
    void showPerson();

    double balance() const noexcept { return balance_; }
    std::string ownerName() const noexcept { return ownerName_; }

private:
    std::string ownerName_;
    double balance_;
    static const double LIMIT_AMOUNT_;
};