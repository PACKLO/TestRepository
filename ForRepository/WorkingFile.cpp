#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// case 6 function.
void MakeASquare(string symbol,int row, int colu)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < colu; j++)
		{
			cout << symbol;
		}
		cout << "\n";
	}
}
// case 7 function
int result = 0;
void CubeIt(int number)
{
	result = number * number * number;
	cout << result;
}
// case 8 function
int preresult, result2, x = 1;
void FactorialIt(int number)
{
	for (int i = 2; i <= number; i++)
	{
		x = x * i;
	}
	cout << x;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	// Переменные классных работ:
	// Переменные для case 1.
	int fNum, sNum, composition, userInput1, possibility, rightAnsws = 0, wrongAnsws = 0;
	// Переменные для case 2.
	int diapStart, diapEnd, userInput, diffirence;
	// Переменные для case 3.
	int kek;
	// Переменные для case 4.
	// Переменные для case 5.
	const int row = 5;
	const int col = 5;
	int mr[row][col];
	int k = 0, babaika = 0;

	// Переменные домашних работ:
	// Переменные для case 1000.
	float r1, r2, r3, r0, prer0;
	// Переменные для case 1001.
	float S, pi = 3.14, R, L;
	// Переменные для case 1002.
	float S1, v, t, a;
	// Переменные для case 1003.
	int s, sec, min, hour;
	// Переменные для case 1004.
	// -
	// Переменные для case 1005.
	double timee, speed, distance, min2, sec2, time_2;
	// Переменные для case 1006.
	double price_min, price_sec, timeee, time_sec, price_all;

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
	case 3: // Рандом циферки.
		srand(time(NULL));
		kek = rand();
		cout << kek << endl;
		srand(time(NULL));
		kek = rand();
		cout << kek << endl;
		break;
	case 4: // Заполнение массива рандомными числами циклом for.
		int spisok[11];
		srand(time(NULL));
		for (int i = 0 ; i < 11; i++)
		{
			spisok[i] = rand() % 100;
			cout << spisok[i] << endl;
		}
		break;
	case 5: // Матрица из рандомных чисел а также ее минимальное и максимальное число.
		srand(time(NULL));
		for ( int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				k++;
				mr[i][j] = rand() % 100;
				cout << mr[i][j] << " ";
				if (k == 5)
				{
					cout << "\n";
					k = 0;
				}
			}
		}
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (babaika < mr[i][j])
				{
					babaika = mr[i][j];
				}
			}
		}
		cout << "Максимальное: "<< babaika << "\n";
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (babaika > mr[i][j])
				{
					babaika = mr[i][j];
				}
			}
		}
		cout << "Минимальное: "<< babaika;
		break;
	case 6: // Функция которая создает квадрат.
		MakeASquare("o", 5, 8);
		break;
	case 7: // Функция которая возводит заданное число в куб.
		CubeIt(5);
		break;
	case 8: // Функция которая находит факториал числа.
		FactorialIt(4);
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
	case 1003: // Пользователь вводит с клавиатуры время в секундах. Необходимо написать программу, которая переведет введенные пользователем секунды в часы, минуты, секунды и выводит их на экран.
		cout << "Введите секунды: ";
		cin >> s;
		hour = s / 3600;
		min = (s - hour * 3600) / 60;
		sec = s - hour * 3600 - min * 60;
		cout << "Часов: " << hour << endl;
		cout << "Минут: " << min << endl;
		cout << "Секунд: " << sec << endl;


		break;
	case 1004: // Написать программу, которая преобразует введенное с клавиатуры дробное число в денежный формат. Например, число 12,5 должно быть преобразовано к виду 12 грн 50 коп.
		cout << "Я не смог сделать данное задание. Не получается";


		break;
	case 1005: // Написать программу, вычисляющую, с какой скоростью бегун пробежал дистанцию.Рекомендуемый вид экрана во время выполнения программы приведен ниже : Вычисление скорости бега. Введите длину дистанции(метров) = 1000. Введите время(мин.сек) = 3.25. Дистанция : 1000 м.  Время : 3 мин 25 сек = 205 сек. Вы бежали со скоростью : 17.56 км / ч.
		cout << "Введите длину дистанции (метров): ";
		cin >> distance;
		cout << "Введите время (мин.сек): ";
		cin >> timee;
		sec2 = (timee - int(timee)) * 100;
		min2 = int(timee) * 60;
		time_2 = min2 + sec2;
		speed = (distance / time_2) * 3.6;
		cout << "Дистанция  : " << distance << " м \n";
		cout << "Время : " << min2 / 60 << " мин  " << sec2 << " сек " << " = " << time_2 << " сек \n";
		cout << "Скорость : " << speed << " км/ч \n";


		break;
	case 1006: // Пользователь указывает цену одой минуты исходящего звонка с одного мобильного оператора другому, а также продолжительность разговора в минутах и секундах. Необходимо вычислить денежную сумму на которую был произведен звонок.
		cout << "Введите цену минуты исходящего звонка другому оператору: ";
		cin >> price_min;
		cout << "Введите продолжительность разговора в минутах и секундах: ";
		cin >> timeee;
		time_sec = ((int)timeee * 60) + ((timeee * 100) - (int)timeee * 100);
		price_sec = price_min / 60;
		price_all = time_sec * price_sec;
		cout << "Стоимость звонка составила: " << price_all;


		break;
	case 1007: // Написать программу, которая преобразует введенное пользователем количество дней в количество полных недель и оставшихся дней. Например, пользователь ввел 17 дней, программа должна вывести на экран 2 недели и 3 дня.
		double day, week, a;
		cout << "Введите количество дней : ";
		cin >> a;
		week = int(a / 7);
		day = a - (week * 7);
		cout << week << " недели  " << day << " дней";


		break;
	default:
		cout << "Такого задания не существует! Прочтите README в репозитории! (https://github.com/PACKLO/Work)";
		break;
	}
	return 0;
}
