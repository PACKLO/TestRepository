#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	// Переменные классных работ:
	// Переменные для case 1.
	int fNum, sNum, composition, userInput1, possibility, rightAnsws = 0, wrongAnsws = 0;
	// Переменные для case 2.
	int diapStart, diapEnd, userInput, diffirence;

	// Переменные домашних работ:
	// Переменные для case 1000.
	float r1, r2, r3, r0, prer0;
	// Переменные для case 1001.
	float S, pi = 3.14, R, L;
	// Переменные для case 1002.
	float S1, v, t, a;


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
	case 1000: // Заданы три сопротивлении R1, R2, R3. Вычислить значение сопротивления R0 по формуле: 1/R0 = 1 / R1 + 1 / R2 + 1 / R3. Контрольный пример : R1 = 2, R2 = 4, R3 = 8, R0 = 1.142857.
		cout << "Введите R1: ";
		cin >> r1;
		cout << "Введите R2: ";
		cin >> r2;
		cout << "Введите R3: ";
		cin >> r3;
		prer0 = (1 / r1) + (1 / r2) + (1 / r3);
		r0 = 1 / prer0;
		cout << "R0 = " << r0 << endl;


		break;
	case 1001: // По заданной длине окружности найти площадь круга по формуле S = pi*R2, радиус вычислить из формулы длины окружности : L = 2 * pi * R.
		cout << "Введите L: ";
		cin >> L;
		R = L / (2 * pi);
		S = pi * R * R;
		cout << "S = " << S;


		break;
	case 1002: // Вычислить пройденное расстояние при прямолинейном равноускоренном движении по формуле S = v * t + (a * t2) / 2, где v — скорость, t — время, а — ускорение.
		cout << "Введите v: ";
		cin >> v;
		cout << "Введите t: ";
		cin >> t;
		cout << "Введите a: ";
		cin >> a;
		S1 = v * t + (a * t * t) / 2;
		cout << "S = " << S1;


		break;
	default:
		cout << "Такого задания не существует! Прочтите README в репозитории! (https://github.com/PACKLO/Work)";
		break;
	}
	return 0;
}
