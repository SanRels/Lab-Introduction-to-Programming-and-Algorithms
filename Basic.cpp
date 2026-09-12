#include <iostream>

// Подключил библиотеку iostream для работы с вводом и выводом данных

using namespace std;

// Указал что буду использовать пространство имен std, чтобы не писать std:: перед cout и endl

float side = 0.0; // Объявил переменную side типа float и присвоил ей значение 0.0

struct Foo
{
    int x;
};   // <-- добавлена ;

int main() {
	// Объявил функцию main, которая является точкой входа в программу

	cout << "Enter the side of the square: ";

	if (!(cin >> side))
		
	{

		// Проверил, что ввод корректный, если нет, то выводим сообщение об ошибке

		cout << "Input error. Please enter a number." << endl;
		return 1;
	}

	if (side <= 0)
	{
		// Проверил, что введенное число не отрицательное, если да, то выводим сообщение об ошибке
		cout << "Input error. Please enter a positive number." << endl;
		return 1;
	}
	else
	{
		// Если ввод корректный и число положительное, то вычисляем площадь квадрата и выводим результат
			float area = side * side; // Вычислил площадь квадрата по формуле S = a^2
			
			cout << "The area of the square with side " << side << " is " << area << endl; // Вывел результат на экран

	}	
	return 0;
 }