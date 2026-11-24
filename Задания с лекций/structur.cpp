#include <iostream>
#include <string>

using namespace std;

struct Apartment {
    int price;
    int floor;
    double size;
    string street;
};

int main() {
    setlocale(LC_ALL, "Russian");

    Apartment v[3]; // Создание массива структур на 3 элемента
    for (int i = 0; i < 3; i++) // Поочерёдно заполняем каждую структуру
    {
        cout << "Цена за квартиру: ";
        cin >> v[i].price;
        cout << "Этаж: ";
        cin >> v[i].floor;
        cout << "Площадь квартиры: ";
        cin >> v[i].size;
        cout << "Улица: ";
        cin.ignore(); // Очистка буфера перед вводом строки с пробелами
        getline(cin, v[i].street);
        cout << endl;
    }

    int target_price;
    cout << "\n\nЗа какую цену вы ищете квартиру: ";
    cin >> target_price; // Интересующая нас цена квартиры
    for (int i = 0; i < 3; i++)
    {
        if (target_price == v[i].price) // Сравниваем интересующую цену с реальными ценами
        {
            cout << "Цена за квартиру: " << v[i].price << endl;
            cout << "Этаж: " << v[i].floor << endl;
            cout << "Площадь квартиры: " << v[i].size << endl;
            cout << "Улица и номер дома: " << v[i].street << endl;
        }
    }

    return 0;
}
