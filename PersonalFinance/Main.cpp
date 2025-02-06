#include "Header.h"
#include <Windows.h>
#include <iostream>
void start()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::vector<std::string> menu1{"Вход", "Туда", "Сюда", "ОЛОЛО"};
	Menu main(menu1);
	while (true)
	{
		switch (main.show()) {
		case 0:
			std::cout << "\nТыц";
			exit(0);
		case 1:
			std::cout << "\nПыц";
			exit(1);
		case 2:
			std::cout << "\nпям";
			exit(2);
		case 3:
			std::cout << "\n:S:";
			exit(3);
		case 4:
			std::cout << "\nexit!";

			exit(4);
			default:
				break;

		}
	}
	
}
