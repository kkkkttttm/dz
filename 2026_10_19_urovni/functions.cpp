#include "functions.h"

#include <iostream>
#include <limits>

const MenuItem* showMenu(const MenuItem* current)
{
    std::cout << "\n";
    if (current->title != nullptr) {
        std::cout << current->title << "\n";
    }

    for (std::size_t i = 0; i + 1 < current->childrenCount; ++i) {
        std::cout << i + 1 << " - " << current->children[i]->title << "\n";
    }
    std::cout << "0 - " << current->children[current->childrenCount - 1]->title << "\n";

    int choice;
    if (!(std::cin >> choice)) {
        if (std::cin.eof()) {
            return nullptr;                  
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Введите число из меню.\n";
        return current;                     
    }

    if (choice == 0) {
        return current->children[current->childrenCount - 1];
    }
    if (choice > 0 && static_cast<std::size_t>(choice) < current->childrenCount) {
        return current->children[choice - 1];
    }

    std::cout << "Нет такого пункта.\n";
    return current;
}

const MenuItem* exitProgram(const MenuItem* current)
{
    std::cout << "\n" << current->title << "\n";
    return nullptr;                             
}

const MenuItem* goUpTwoLevels(const MenuItem* current)
{
    return current->parent->parent;
}

const MenuItem* artLesson(const MenuItem* current)
{
    std::cout << "\n" << current->title << "\n";
    return current->parent;                   
}