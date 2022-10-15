#include<iostream>
#include<comio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	}while (key != 27);

}