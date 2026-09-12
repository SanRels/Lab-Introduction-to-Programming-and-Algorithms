#include <iostream>

using namespace std;

int main()
{
    // Объявляем длину, ширину и высоту.
    // Используем float для работы с дробными числами.
    float length, width, height;

    // Вводим длину.
    cout << "Enter length: ";
    cin >> length;

    // Проверяем, что введено число.
    if (cin.fail())
    {
        cout << "Input error. Please enter a number." << endl;
        return 1;
    }

    // Проверяем, что длина положительная.
    if (length <= 0)
    {
        cout << "Input error. Please enter a positive number." << endl;
        return 1;
    }

    // Вводим ширину.
    cout << "Enter width: ";
    cin >> width;

    if (cin.fail())
    {
        cout << "Input error. Please enter a number." << endl;
        return 1;
    }

    if (width <= 0)
    {
        cout << "Input error. Please enter a positive number." << endl;
        return 1;
    }

    // Вводим высоту.
    cout << "Enter height: ";
    cin >> height;

    if (cin.fail())
    {
        cout << "Input error. Please enter a number." << endl;
        return 1;
    }

    if (height <= 0)
    {
        cout << "Input error. Please enter a positive number." << endl;
        return 1;
    }

    // Вычисляем объём.
    float volume = length * width * height;

    // Вычисляем площадь поверхности.
    float Area = 2 * (length * width + length * height + width * height);

    // Выводим результаты.
    cout << "Volume: " << volume << endl;
    cout << "Surface area: " << Area << endl;

    return 0;

}