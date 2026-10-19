#pragma once
#include <cstddef>

// Элемент меню
struct MenuItem {
    const char* title;                          
    const MenuItem* (*func)(const MenuItem*);   
                                              
    const MenuItem* parent;                  
    const MenuItem* const* children;         
    std::size_t childrenCount;                 
};
