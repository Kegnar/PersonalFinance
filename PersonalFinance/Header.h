#pragma once
#include "Menu.h"
void start();

// перевод курсора в заданную позицию
void gotoXY(int x, int y);

// прячет или показывает курсор
void ConsoleCursorVisible(bool show);

//отлавливает клавиши
char keyPress();

