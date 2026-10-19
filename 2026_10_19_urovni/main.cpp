#include <clocale>

#include "menu_items.h"

int main()
{
    std::setlocale(LC_ALL, "");

    const MenuItem* current = &mainMenu;
    while (current != nullptr) {
        current = current->func(current);   
    }
    return 0;
}