#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>

void start();
// прототипы перегрузок цветной печати
inline std::ostream& blue(std::ostream& s);
inline std::ostream& red(std::ostream& s);
inline std::ostream& green(std::ostream& s);
inline std::ostream& yellow(std::ostream& s);
inline std::ostream& white(std::ostream& s);
inline std::ostream& invert_white(std::ostream& s);
inline std::ostream& aqua(std::ostream& s);
struct color;
template <class _Elem, class _Traits>
std::basic_ostream<_Elem, _Traits>&
operator<<(std::basic_ostream<_Elem, _Traits>& i, color& c);

// перевод курсора в заданную позицию
void gotoXY(int x, int y);

// прячет или показывает курсор
void ConsoleCursorVisible(bool show);

//отлавливает клавиши
char keyPress();

// класс, отвечающий за менюшки 
class Menu
{
	std::vector<std::string> menu_list{};		//элементы меню
	int coord_x{};								// координаты левого верхнего угла
	int coord_y{};
	int menu_ptr{};								// индекс курсора
public:
	Menu() = delete;
	Menu(const std::vector<std::string>& menu_list, int coord_x = 0, int coord_y = 0, int menu_ptr = 0);
	void show();
	int getCoordX()const;
	int getCoordY()const;
	Menu& setCoords(int, int);
	Menu& setMenuItems(const std::vector<std::string>&);
	Menu& setMenuPointer(int menu_ptr);
};

//класс для финансов
class Bank  
{

public:
	
};
