#include "menu_items.h"
#include "functions.h"

namespace {

const MenuItem* const mainChildren[] = { &studyMath, &lieDown };
const std::size_t mainSize = sizeof(mainChildren) / sizeof(mainChildren[0]);

const MenuItem* const mathChildren[] = { &algebra, &analysis, &mathBack };
const std::size_t mathSize = sizeof(mathChildren) / sizeof(mathChildren[0]);

const MenuItem* const algebraChildren[] = {
    &algebraAdd, &algebraSub, &algebraMul, &algebraDiv, &algebraBack
};
const std::size_t algebraSize = sizeof(algebraChildren) / sizeof(algebraChildren[0]);

const MenuItem* const analysisChildren[] = { &analysisDiff, &analysisInt, &analysisBack };
const std::size_t analysisSize = sizeof(analysisChildren) / sizeof(analysisChildren[0]);

} 

const MenuItem mainMenu  = { nullptr, showMenu, nullptr, mainChildren, mainSize };
const MenuItem studyMath = { "Хочу учиться математике!", showMenu, &mainMenu, mathChildren, mathSize };
const MenuItem lieDown   = { "Я лучше пойду полежу...", exitProgram, &mainMenu };

const MenuItem algebra  = { "Хочу изучать алгебру!", showMenu, &studyMath, algebraChildren, algebraSize };
const MenuItem analysis = { "Хочу изучать математический анализ!", showMenu, &studyMath, analysisChildren, analysisSize };
const MenuItem mathBack = { "Выйти в главное меню.", goUpTwoLevels, &studyMath };

const MenuItem algebraAdd  = { "Хочу научиться складывать!", algebraLesson, &algebra };
const MenuItem algebraSub  = { "Хочу научиться вычитать!",   algebraLesson, &algebra };
const MenuItem algebraMul  = { "Хочу научиться умножать!",   algebraLesson, &algebra };
const MenuItem algebraDiv  = { "Хочу научиться делить!",     algebraLesson, &algebra };
const MenuItem algebraBack = { "Вернуться к выбору предметов.", goUpTwoLevels, &algebra };

const MenuItem analysisDiff = { "Хочу изучить дифференциальное исчисление!", analysisLesson, &analysis };
const MenuItem analysisInt  = { "Хочу изучить интегральное исчисление!",     analysisLesson, &analysis };
const MenuItem analysisBack = { "Вернуться к выбору предметов.", goUpTwoLevels, &analysis };
