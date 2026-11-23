#include <iostream>
#include <clocale>

using namespace std;

// Задание 2: все элементы главной и побочной диагонали -> 0
int main() {

    setlocale(LC_ALL, "Russian");

    int n = 5;                                 // диагонали у квадратной матрицы
    int** m = new int* [n];
    for (int i = 0; i < n; i++) {
        m[i] = new int[n];
        for (int j = 0; j < n; j++) m[i][j] = i * n + j + 1;
    }

    cout << "До:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m[i][j] << '\t';
        cout << '\n';
    }

    for (int i = 0; i < n; i++) {
        m[i][i] = 0;                           // главная диагональ
        m[i][n - 1 - i] = 0;                   // побочная диагональ
    }

    cout << "После:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << m[i][j] << '\t';
        cout << '\n';
    }

    for (int i = 0; i < n; i++) delete[] m[i];
    delete[] m;
    return 0;
}