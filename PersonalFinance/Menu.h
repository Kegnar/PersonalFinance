#pragma once
#include <vector>
#include <string>
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
	unsigned int show();
	int getCoordX()const;
	int getCoordY()const;
	Menu& setCoords(int, int);
	Menu& setMenuItems(const std::vector<std::string>&);
	Menu& setMenuPointer(int menu_ptr);
};