#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H

#include <vector>
#include "Expense.h"

class ExpenseManager
{
private:
    std::vector<Expense> expenses;

public:
    void addExpense(const Expense& expense);
    void displayAllExpenses() const;
};

#endif