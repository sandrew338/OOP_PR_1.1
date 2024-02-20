#include "Cursor.h"
#include <iostream>
using namespace std;
void Cursor::changeX(int deltaX) //горизонтальна координата
{
	if (first + deltaX >= 0 && first + deltaX <= SCREEN_WIDTH)
	{
		first = first + deltaX;
	}
	else
	{
		cout << "ERROR";
	}
}
void Cursor::changeY(unsigned int deltaY)//вертикальна координата
{
	if (second + deltaY >= 0 && second + deltaY <= SCREEN_HEIGHT)
	{
		second = second + deltaY;
	}
	else
	{
		cout << "ERROR"<<endl;
	}
}
bool Cursor::Init(int x, int y)
{
	if (x >= 0 && x <= SCREEN_WIDTH && y >= 0 && y <= SCREEN_HEIGHT)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		x = 0;
		y = 0;
		return false;
	}
}
void Cursor::Display() const
{
	cout << "first = " << first << " second = " << second << endl<<endl<<endl;
}
void Cursor::Read()
{
	int x, y;
	do {
		cout << "first = ? ";
		cin >> x;
		cout << "second = ?";
		cin >> y;
	} while (!Init(x, y));
}
