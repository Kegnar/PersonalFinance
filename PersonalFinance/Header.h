#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <conio.h>

void start();
// ��������� ���������� ������� ������
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

// ������� ������� � �������� �������
void gotoXY(int x, int y);

// ������ ��� ���������� ������
void ConsoleCursorVisible(bool show);

//����������� �������
char keyPress();

// �����, ���������� �� ������� 
class Menu
{
	std::vector<std::string> menu_list{};		//�������� ����
	int coord_x{};								// ���������� ������ �������� ����
	int coord_y{};
	int menu_ptr{};								// ������ �������
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

//����� ��� ��������
class Bank  
{

public:
	
};
