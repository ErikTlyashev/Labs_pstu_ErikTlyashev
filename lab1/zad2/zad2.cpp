#include <iostream>
#include <cmath> // для pow() (возведение в степень)

using namespace std;

int main() {

    // --- Для float ---
    cout << "--- float ---" << endl;
    float n_f = a_f / b_f;   // n = a/b = 10000000
    float m_f = b_f / a_f;   // m = b/a = 0.0000001

    cout << "n = " << n_f << ", m = " << m_f << endl;

    // 1) n++ * m
    // Сначала n умножается на m, потом n увеличивается на 1
    float expr1_f = n_f++ * m_f;
    cout << "1) n++ * m = " << expr1_f << " (n теперь " << n_f << ")" << endl;

    // 2) n++ < m
    // Сначала n сравнивается с m, потом n увеличивается на 1
    bool expr2_f = n_f++ < m_f;
    cout << "2) n++ < m = " << expr2_f << " (n теперь " << n_f << ")" << endl;

    // 3) m-- > m
    // Сначала m сравнивается с m (после декремента), потом m уменьшается
    bool expr3_f = m_f-- > m_f;
    cout << "3) m-- > m = " << expr3_f << " (m теперь " << m_f << ")" << endl;
    cout << endl;

    // --- Для double ---
    cout << "--- double ---" << endl;
    double n_d = a_d / b_d;   // n = a/b = 10000000
    double m_d = b_d / a_d;   // m = b/a = 0.0000001

    cout << "n = " << n_d << ", m = " << m_d << endl;

    // 1) n++ * m
    double expr1_d = n_d++ * m_d;
    cout << "1) n++ * m = " << expr1_d << " (n теперь " << n_d << ")" << endl;

    // 2) n++ < m
    bool expr2_d = n_d++ < m_d;
    cout << "2) n++ < m = " << expr2_d << " (n теперь " << n_d << ")" << endl;

    // 3) m-- > m
    bool expr3_d = m_d-- > m_d;
    cout << "3) m-- > m = " << expr3_d << " (m теперь " << m_d << ")" << endl;

    return 0;
}

