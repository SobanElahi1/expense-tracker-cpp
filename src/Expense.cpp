#include "Expense.h"
#include <iostream>

Expense::Expense(int id,
std::string date,
std::string category,
std::string description,
double amount)

{
    this->id=id;
    this->date= date;
    this->category= category;
    this->description= description;
    this->amount= amount;

};
void Expense::display() const
{
    std::cout << "ID: " << id << std::endl;
    std::cout << "Date: " << date << std::endl;
    std::cout << "Category: " << category << std::endl;
    std::cout << "Description: " << description << std::endl;
    std::cout << "Amount: Rs. " << amount << std::endl;
}