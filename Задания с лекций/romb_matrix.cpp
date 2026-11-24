#include <iostream>
#include <cstdlib>   // abs
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите n (нечётное): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "n должно быть нечётным!" << endl;
        return 0;
    }

    char a[100][100];
    int c = n / 2;               // центр

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int d = abs(i - c) + abs(j - c);
            if (d == c)      a[i][j] = '1';   // граница
            else if (d < c)  a[i][j] = '0';   // внутри
            else             a[i][j] = ' ';   // снаружи
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}