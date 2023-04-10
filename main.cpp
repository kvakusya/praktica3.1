

#include <iostream>
string namber();
int main()
{
    std::cout << "Hello World!\n";
    cout << number() << endl;
	system("pause");
	return 0;
}
string number()
{
	cout << "Введите число от 1 до 10"<<endl;
	int b;
	cin >> b;
	string st;
	switch (b)
	{
	case 1:
		st = "Один";
		return st;
		break;
	case 2:
		st = "Два";
		return st;
		break;
	case 3:
		st = "Три";
		return st;
		break;
	case 4:
		st = "Четыре";
		return st;
		break;
	case 5:
		st = "Пять";
		return st;
		break;
	case 6:
		st = "Шесть";
		return st;
		break;
	case 7:
		st = "Семь";
		return st;
		break;
	case 8:
		st = "Восемь";
		return st;
		break;
	case 9:
		st = "Переполнение1";
		return st;
		break;
	case 10:
		st = "Переполнение2";
		return st;
		break;
	}
}
