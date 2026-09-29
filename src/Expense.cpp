#include "Expense.h"

Expense::Expense(int id,
std::string date,
std::string category,
std::string description,
double amount):

{
    this->id=id;
    this->date= date;
    this->category= category;
    this->description= description;
    this->amount= amount;

}