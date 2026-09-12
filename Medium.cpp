#include <iostream>
// Подключил библиотеку iostream для работы с вводом и выводом данных
using namespace std;
int main() 
{
	// Объявил функцию main, которая является точкой входа в программу
	float side = 0.0;
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
		float perimeter = 4 * side; // Вычислил периметр квадрата по формуле P = 4a
		cout << "The area of the square with side " << side << " is " << area << endl; // Вывел результат на экран
		cout << "The perimeter of the square with side " << side << " is " << perimeter << endl; // Вывел результат на экран

	}
	return 0;
}