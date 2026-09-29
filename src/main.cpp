#include "Expense.h"
#include <iostream>
int main()
{
    Expense lunch(
        1, "2026-09-29", "food", "Unii lunch", 450.0
    );

    lunch.display();
    return 0;
}