#include <iostream>
#include "bankAccount.h"


int main()
{
	setlocale(LC_ALL, "ru");
	BankAccount b1("Chuvak1", 0);
	BankAccount b2("Billy", 0);
	BankAccount b3("Max_pain", 0);
	BankAccount b4("Linus", 0);

	b1.showPerson();
	b1.deposit(999999);
	b1.showPerson();
	b1.transfer(b2, 500000);
	std::cout << "Перевод d1 d2 пятьсот косых" << std::endl;
	b1.showPerson();
	b2.showPerson();

}