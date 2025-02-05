#include "Header.h"

enum Key_codes { UP = 72, DOWN = 80, ENTER = 13 };

// перевод курсора в заданную позицию
void gotoXY(int x, int y) {
	COORD pos = { x, y };
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hStdOut, pos);
}
// прячет или показывает курсор
void ConsoleCursorVisible(bool show)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show; // изменяем видимость курсора
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}
//отлавливает клавиши
char keyPress()
{
	char ch;
	ch = _getch();
	if (ch == -32) ch = _getch(); // Отлавливаем стрелочки. Как выяснилось, коды стрелок двухбайтовые, а нам нужен второй
	return ch;
}


//класс Menu
Menu::Menu(const std::vector<std::string>& menu_list, int coord_x, int coord_y, int menu_ptr) :
	menu_list{ menu_list }, coord_x{ coord_x }, coord_y{ coord_y }, menu_ptr{ menu_ptr } {
}
void Menu::show()
{
	int menu_size = menu_list.size();
	ConsoleCursorVisible(false);
	while (true)
	{
		gotoXY(coord_x, coord_y);
		for (int i = 0; i < menu_size; i++)
		{
			gotoXY(coord_x, coord_y + i);
			if (i == menu_ptr)
			{
				std::cout << invert_white;
			}
			else
			{
				std::cout << white;
			}
			std::cout << ' ' << menu_list[i] << ' ' << white;
		}
		switch (keyPress())
		{
		case UP:
			menu_ptr--;
			if (menu_ptr < 0) menu_ptr = menu_size - 1;
			break;
		case DOWN:
			menu_ptr++;
			if (menu_ptr == menu_size) menu_ptr = 0;
			break;
		case ENTER:
			return;
		}

	}
	
};
int Menu::getCoordX()const
{
	return this->coord_x;
};
int Menu::getCoordY()const
{
	return this->coord_y;
};
Menu& Menu::setCoords(int coord_x, int coord_y)
{
	this->coord_x = coord_x;
	this->coord_y = coord_y;
	return *this;
}
Menu& Menu::setMenuItems(const std::vector<std::string>& menu_list)
{
	this->menu_list = menu_list;
	return *this;
}
Menu& Menu::setMenuPointer(int menu_ptr)
{
	this->menu_ptr = menu_ptr;
	return *this;
}

