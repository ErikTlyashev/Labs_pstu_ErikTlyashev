#include <iostream>  
using namespace std; 

int main() {
 
    float a_f = 1000.0f;                  // a = 1000 для типа float
    float b_f = 0.0001f;                  // b = 0.0001 для типа float
    double a_d = 1000.0;                  // a = 1000 для типа double
    double b_d = 0.0001;                  // b = 0.0001 для типа double

    cout << "=== Задание 2 ===" << endl;

    // Для float 
    cout << "--- float ---" << endl;
    float n_f = a_f / b_f;                // n = a/b = 10000000
    float m_f = b_f / a_f;                // m = b/a = 0.0000001

    cout << "n = " << n_f << ", m = " << m_f << endl; // выводим n и m

    // 1) n++ * m
    // Сначала n умножается на m, потом n увеличивается на 1
    float expr1_f = n_f++ * m_f;          // сохраняем результат, n увеличивается
    cout << "1) n++ * m = " << expr1_f << " (n теперь " << n_f << ")" << endl;

    // 2) n++ < m
    // Сначала n сравнивается с m, потом n увеличивается на 1
    bool expr2_f = n_f++ < m_f;           // сравнение, n увеличивается
    cout << "2) n++ < m = " << expr2_f << " (n теперь " << n_f << ")" << endl;

    // 3) m-- > m
    bool expr3_f = m_f-- > m_f;           // сравнение, m уменьшается
    cout << "3) m-- > m = " << expr3_f << " (m теперь " << m_f << ")" << endl;
    cout << endl;

    //Для double 
    cout << "--- double ---" << endl;
    double n_d = a_d / b_d;               // n = a/b = 10000000
    double m_d = b_d / a_d;               // m = b/a = 0.0000001

    cout << "n = " << n_d << ", m = " << m_d << endl; // выводим n и m

    // 1) n++ * m
    double expr1_d = n_d++ * m_d;         // сохраняем результат, n увеличивается
    cout << "1) n++ * m = " << expr1_d << " (n теперь " << n_d << ")" << endl;

    // 2) n++ < m
    bool expr2_d = n_d++ < m_d;           // сравнение, n увеличивается
    cout << "2) n++ < m = " << expr2_d << " (n теперь " << n_d << ")" << endl;

    // 3) m-- > m
    bool expr3_d = m_d-- > m_d;           // сравнение, m уменьшается
    cout << "3) m-- > m = " << expr3_d << " (m теперь " << m_d << ")" << endl;

    return 0;                             
}