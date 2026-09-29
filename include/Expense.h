#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>
class Expense
{
    private:
    int id;
    std::string date;
    std::string category;
    std::string description;
    double amount;

    public:
    Expense(
        int id,
         std::string date,
    std::string category,
    std::string description,
    double amount
    );
    void display() const;

};
#endif