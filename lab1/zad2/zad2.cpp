#include <iostream>
#include <cmath> // для pow() (возведение в степень)

using namespace std;

int main() {

	const int N = 9; // количество членов ряда 


	double sum = 0.0; // Переменная для суммы 

 


    // Цикл для вычисления суммы
    // n меняется от 1 до 9
    for (int n = 1; n <= N; n++) {
        // Вычисляем n-й член ряда: a_n = e^(-sqrt(n))
        double a_n = exp(-sqrt(n));

        // Добавляем его к сумме
        sum += a_n;

        // Выводим текущий член ряда
        cout << "a_" << n << " = " << a_n << endl;
    }

    // Вывод итоговой суммы
    cout << "----------------------------------------" << endl;
    cout << "Сумма " << N << " членов ряда = " << sum << endl;





	return 0;



}