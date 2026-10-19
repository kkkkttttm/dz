#include "menu_items.h"
#include "functions.h"

namespace {

const MenuItem* const mainChildren[] = { &russianart, &back };
const std::size_t mainSize = sizeof(mainChildren) / sizeof(mainChildren[0]);

const MenuItem* const artChildren[] = { &russianartists, &russianmusicians, &backtomainmenu };
const std::size_t artSize = sizeof(artChildren) / sizeof(artChildren[0]);

const MenuItem* const artistsChildren[] = {
    &artistsRublev, &artistsPolenov, &artistsAivazovsky, &artistsback
};
const std::size_t artistsSize = sizeof(artistsChildren) / sizeof(artistsChildren[0]);


const MenuItem* const musiciansChildren[] = {};
const std::size_t musiciansSize = sizeof(musiciansChildren) / sizeof(musiciansChildren[0]);

}

const MenuItem mainMenu  = { nullptr, showMenu, nullptr, mainChildren, mainSize };
const MenuItem russianart = { "Искусство России", showMenu, &mainMenu, artChildren, artSize };
const MenuItem lieDown   = { "Выйти", exitProgram, &mainMenu };

const MenuItem russianartists  = { "Русские художники", showMenu, &russianart, artistsChildren, artistsSize };
const MenuItem russianmusicians = { "Русские музыканты", showMenu, &russianart, musiciansChildren, musiciansSize };
const MenuItem backtomainmenu = { "Выйти в главное меню", goUpTwoLevels, &russianart };

const MenuItem artistsRublev  = { "Андрей Иван сын Рублев", artistsName, &russianartists };
const MenuItem artistsPolenov = { "Василий Дмитриевич Поленов", artistsName, &russianartists };
const MenuItem artistsAivazovsky = { "Иван Константинович Айвазовский", artistsName, &russianartists };
const MenuItem artistsback = { "Выйти в предыдущее меню", goUpTwoLevels, &russianartists };