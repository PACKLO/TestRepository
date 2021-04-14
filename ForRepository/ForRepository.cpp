#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int resultnum = rand() % 10 + 1;
	int usernum;
	for (int n = 0; n <= 15; n++)
	{
		cout << "Попробуй угадать мое число!: ";
		cin >> usernum;
		if (usernum == resultnum)
		{
			cout << "Это оно!" << endl;
			break;
		}
		else
		{
			cout << "Нет, это не " << usernum << endl;
			if (usernum > resultnum)
			{
				cout << "Нужное число меньше чем " << usernum << endl;
			}
			if (usernum < resultnum)
			{
				cout << "Нужное число больше чем " << usernum << endl;
			}
		}
		if (n == 15)
		{
			cout << "У тебя закончились попытки! Ты проиграл.";
		}
	}
	return 0;
}

