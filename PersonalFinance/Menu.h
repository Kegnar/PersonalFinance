#pragma once

//TODO: ���������� ��� �����

class Menu
{
	// ������� ������� � �������� �������
	void gotoXY(int x, int y) {
		COORD pos = { x, y };
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hStdOut, pos);
	}

	// ������ ��� ���������� ������
	void ConsoleCursorVisible(bool show)
	{
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO structCursorInfo;
		GetConsoleCursorInfo(hStdOut, &structCursorInfo);
		structCursorInfo.bVisible = show; // �������� ��������� �������
		SetConsoleCursorInfo(hStdOut, &structCursorInfo);
	}
	char keyPress()
	{
		char ch;
		ch = _getch();
		if (ch == -32) ch = _getch(); // ����������� ���������. ��� ����������, ���� ������� ������������, � ��� ����� ������
		return ch;
	}

	void menu(int coord_x, int coord_y, string* menu, int menu_size, int& menu_ptr)
	{

		system("cls");

		ConsoleCursorVisible(false);
		while (true)
		{
			gotoXY(coord_x, coord_y);
			for (int i = 0; i < menu_size; i++)
			{
				gotoXY(coord_x, coord_y + i);
				if (i == menu_ptr)
				{
					cout << invert_white;
				}
				else
				{
					cout << white;
				}

				cout << ' ' << menu[i] << ' ' << white;

			}
			char keyPressed = keyPress();
			switch (keyPressed)
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
	}
};

