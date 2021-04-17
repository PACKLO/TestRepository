#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int Work;
	cout << "Какое задание хотите посмотреть?: ";
	cin >> Work;
	switch (Work)
	{
	case 1: // две границы диапазона
		int diapStart, diapEnd, userInput, diffirence;
		int WorkingNumbersList[10];
		cout << "Введите начало границы диапазона: ";
		cin >> diapStart;
		cout << "Введите конец границы диапазона: ";
		cin >> diapEnd;
		cout << "Введите число которое будет внутри данного диапазона: ";
		cin >> userInput;
		diffirence = diapEnd - diapStart;
		for (int i = diapStart; i <= diapEnd; i++)
		{
			if (i = userInput)
			{
				cout << userInput << ' ' << i << endl;
				break;
			}
			else
			{
				cout << userInput << ' ' << i << endl;
			}
		}


		break;
	default:
		cout << "Неверно! Прочтите README в репозитории!";
		break;
	}
	return 0;
}