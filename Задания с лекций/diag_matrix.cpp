#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите n: ";
    cin >> n;

    int a[100][100];

    // заполняем единицами
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 1;

    // выше главной И выше побочной -> 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j > i && i + j < n - 1)
                a[i][j] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}