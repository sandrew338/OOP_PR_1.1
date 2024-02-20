// Number2.h
// заголовний файл Ц визначенн€ класу
#pragma once
class Cursor
{
private:
	int first;
	int second;
	const int SCREEN_WIDTH = 1920;
	const int SCREEN_HEIGHT = 1080;
public:
	int GetX() const { return first; }//first
	int GetY() const { return second; }//second
	void changeX(int value);
	void changeY(unsigned int value);
	bool Init(int x, int y);
	void Display() const;
	void Read();
};