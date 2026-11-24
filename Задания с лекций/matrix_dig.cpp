#include <iostream>
using namespace std;

int main() {
    int n = 4;
    // Создаём матрицу n x n, заполняем единицами
    int a[4][4];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = 1;
        }
    }

    // Обнуляем элементы выше главной диагонали
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            a[i][j] = 0;
        }
    }

    // Вывод результата
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
