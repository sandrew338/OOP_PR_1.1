#include <iostream>
#include "Cursor.h"
using namespace std;
Cursor makeCursor(int x, int y)
{
	Cursor nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init" << endl;
	return nn;
}
int main()
{
	Cursor n;
	n.Init(10, 10);
	n.Display();
	Cursor k;
	k.Read();
	k.Display();
	k.changeX(100);//////////////////////////////////////////////change to check!!!!!!!!!!!!!!!!!!!!!
	k.changeY(200);
	k.Display();
	int a, b;
	cout << "first = ? ";
	cin >> a;
	cout << "second = ?";
	cin >> b;
	Cursor i = makeCursor(a, b);
	i.Display();
	return 0;
}