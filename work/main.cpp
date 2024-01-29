#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float x;
	float y;
	cout << "Введите чему равен x - ";
	cin >> x;

	if (x != 0 && x >= -1)
	{
		y = (1 / x) + (sqrt(x + 1));
		cout << "y = " << y << endl;
	}
	else
	{
		cout << "Функция не определена " << endl;
	}
}
