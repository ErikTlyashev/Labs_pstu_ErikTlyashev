#include <iostream>
#include <algorithm>
#include <clocale>

using namespace std;

// Задание 1: изменение длины динамического массива.
// Возвращает новый массив длины newSize, старые данные копируются,
// новые элементы (если массив растёт) заполняются нулями.
int* resizeArray(int* arr, int oldSize, int newSize) {
    int* res = new int[newSize]();            // () - обнуление
    int toCopy = min(oldSize, newSize);
    for (int i = 0; i < toCopy; i++)
        res[i] = arr[i];
    delete[] arr;                              // освобождаем старый блок
    return res;
}

void printArray(const int* arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n';
}

int main() {

    setlocale(LC_ALL, "Russian");

    int n = 5;
    int* a = new int[n];
    for (int i = 0; i < n; i++) a[i] = i + 1;
    cout << "Исходный (" << n << "): ";
    printArray(a, n);

    a = resizeArray(a, n, 8);                  // увеличиваем
    n = 8;
    cout << "Увеличен (" << n << "): ";
    printArray(a, n);

    a = resizeArray(a, n, 3);                  // уменьшаем
    n = 3;
    cout << "Уменьшен (" << n << "): ";
    printArray(a, n);

    delete[] a;
    return 0;
}