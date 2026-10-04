#include "ExpenseManager.h"

void ExpenseManager::addExpense(const Expense& expense)
{
    expenses.push_back(expense);
}

void ExpenseManager::displayAllExpenses() const
{
    for (const Expense& expense : expenses)
    {
        expense.display();
    }
}