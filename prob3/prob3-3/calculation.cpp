#include "calculation.h"

// class Calculation {
// private:
//     int m_number1;
//     int m_number2;
// public:
//     void setNumber1(int n);
//     void setNumber2(int n);
//     int getNumber1();
//     int getNumber2();
//     int add();
//     int sub();
// };

void Calculation::setNumber1(int n)
{
    m_number1 = n;
}

void Calculation::setNumber2(int n)
{
    m_number2 = n;
}

int Calculation::getNumber1()
{
    return m_number1;
}

int Calculation::getNumber2()
{
    return m_number2;
}

int Calculation::add()
{
    return m_number1 + m_number2;
}

int Calculation::sub()
{
    return m_number1 - m_number2;
}