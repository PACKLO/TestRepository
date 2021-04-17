#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Переменные для case 1.
	int fNum, sNum, composition, userInput1, possibility, rightAnsws = 0, wrongAnsws = 0;
	// Переменные для case 2.
	int diapStart, diapEnd, userInput, diffirence;


	int Work;
	cout << "Какое задание хотите посмотреть?: ";
	cin >> Work;
	switch (Work)
	{
	case 1: // Проверка пользователя на таблицу умножения. Программа выводит на экран два числа, пользователь должен ввести их произведение. Имеется несколько уровней сложности. Выводит оценку знаний.
		cout << "Выберите уровень сложности от 1 до 3: ";
		cin >> possibility;

		switch (possibility)
		{
		case 1:
			for (int i = 0; i < 5; i++)
			{
				srand(time(NULL));
				fNum = rand() % 10 + 1;
				sNum = rand() % 10 + 1;
				composition = fNum * sNum;
				cout << fNum << " * " << sNum << " = ";
				cin >> userInput1;
				if (userInput1 == composition)
				{
					rightAnsws += 1;
				}
				else
				{
					wrongAnsws += 1;
				}
			}
			switch (rightAnsws)
			{
			case 0:
				cout << "Невероятно плохо! Ты не дал ни одного правльного ответа!";
				break;
			case 1:
				cout << "Очень Плохо! Оценка - " << rightAnsws;
				break;
			case 2:
				cout << "Плохо! Оценка - " << rightAnsws;
				break;
			case 3:
				cout << "Так себе. Оценка - " << rightAnsws;
				break;
			case 4:
				cout << "Неплохо! Оценка - " << rightAnsws;
				break;
			case 5:
				cout << "Отлично! Оценка - " << rightAnsws;
				break;
			}
			break;
		case 2:
			for (int i = 0; i < 5; i++)
			{
				srand(time(NULL));
				fNum = rand() % 50 + 1;
				sNum = rand() % 50 + 1;
				composition = fNum * sNum;
				cout << fNum << " * " << sNum << " = ";
				cin >> userInput1;
				if (userInput1 == composition)
				{
					rightAnsws += 1;
				}
				else
				{
					wrongAnsws += 1;
				}
			}
			switch (rightAnsws)
			{
			case 0:
				cout << "Невероятно плохо! Ты не дал ни одного правльного ответа!";
				break;
			case 1:
				cout << "Очень Плохо! Оценка - " << rightAnsws;
				break;
			case 2:
				cout << "Плохо! Оценка - " << rightAnsws;
				break;
			case 3:
				cout << "Так себе. Оценка - " << rightAnsws;
				break;
			case 4:
				cout << "Неплохо! Оценка - " << rightAnsws;
				break;
			case 5:
				cout << "Отлично! Оценка - " << rightAnsws;
				break;
			}
		
			break;
		case 3:
			for (int i = 0; i < 5; i++)
			{
				srand(time(NULL));
				fNum = rand() % 100 + 1;
				sNum = rand() % 100 + 1;
				composition = fNum * sNum;
				cout << fNum << " * " << sNum << " = ";
				cin >> userInput1;
				if (userInput1 == composition)
				{
					rightAnsws += 1;
				}
				else
				{
					wrongAnsws += 1;
				}
			}
			switch (rightAnsws)
			{
			case 0:
				cout << "Невероятно плохо! Ты не дал ни одного правльного ответа!";
				break;
			case 1:
				cout << "Очень Плохо! Оценка - " << rightAnsws;
				break;
			case 2:
				cout << "Плохо! Оценка - " << rightAnsws;
				break;
			case 3:
				cout << "Так себе. Оценка - " << rightAnsws;
				break;
			case 4:
				cout << "Неплохо! Оценка - " << rightAnsws;
				break;
			case 5:
				cout << "Отлично! Оценка - " << rightAnsws;
				break;
			}
			break;

		/*
		srand(time(NULL));
		fNum = rand() % 100 + 1;
		sNum = rand() % 100 + 1;
		composition = fNum * sNum;
		cout << composition << endl;
		cout << fNum << endl;
		cout << sNum << endl;
		*/
		}
		break;
	case 2: // Пользователь вводит две грацицы диапазона и число. Если число не попадает в диапазон, программа просит пользователя повторно ввести число и так до тех пор пока он не введет число правльно.
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
		cout << "Такого задания не существует! Прочтите README в репозитории! (https://github.com/PACKLO/Work)";
		break;
	}
	return 0;
}
