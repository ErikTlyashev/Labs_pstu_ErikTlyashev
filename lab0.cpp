#include <iostream>
#include <cmath> // для pow() (возведение в степень)

using namespace std;

int main() {

    float a_f = 1000.0;      // _f приписка чтобы понимать что это float
    float b_f = 0.0001;

    float a2_f = a_f * a_f;           // a^2
    float a3_f = a2_f * a_f;          // a^3
    float b2_f = b_f * b_f;           // b^2
    float b3_f = b2_f * b_f;          // b^3 так удобнее

    float sum_f = a_f + b_f;
    float sum3_f = sum_f * sum_f * sum_f;   // (a+b)^3
    float chislitel_f = sum3_f - a3_f;      // (a+b)^3 - a^3 (числитель)


    float znaminatel_f = 3 * a_f * b2_f + b3_f + 3 * a2_f * b_f; // знаминатель

    float result_f = chislitel_f / znaminatel_f; // результат для float


    double a_d = 1000.0;      // double
    double b_d = 0.0001;

    double a2_d = a_d * a_d;           // a^2
    double a3_d = a2_d * a_d;          // a^3
    double b2_d = b_d * b_d;           // b^2
    double b3_d = b2_d * b_d;          // b^3


    double sum_d = a_d + b_d;
    double sum3_d = sum_d * sum_d * sum_d;   // (a+b)^3
    double chislitel_d = sum3_d - a3_d;      // (a+b)^3 - a^3(числитель)

    double znaminatel_d = 3 * a_d * b2_d + b3_d + 3 * a2_d * b_d; //знаминатель

    double result_d = chislitel_d / znaminatel_d; // результат для double 


    cout << "float:  " << result_f << endl;
    cout << "double: " << result_d << endl; // вывод ответов
    cout << endl;

    return 0;

}