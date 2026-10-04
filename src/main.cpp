#include "ExpenseManager.h"

int main()
{
    ExpenseManager manager;

    Expense lunch(
        1,
        "2026-09-29",
        "Food",
        "University Lunch",
        450.0
    );

    Expense transport(
        2,
        "2026-09-29",
        "Transport",
        "Uber to university",
        800.0
    );

    manager.addExpense(lunch);
    manager.addExpense(transport);

    manager.displayAllExpenses();

    return 0;
}