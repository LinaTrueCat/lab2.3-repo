#ifndef DATE_CLASS
#define DATE_CLASS

#include <iostream> 
using namespace std;
class DateClass
{
private:
    int m_day;
    int m_month;
    int m_year;

public:

    void addDate();

    //����������� �� �������������
    DateClass()
        : m_day(1), m_month(1), m_year(2000) {
    }

    //����������� ����������� 
    DateClass(int day, int month, int year)
        : m_day(day), m_month(month), m_year(year) {
    }

    // �������������� ��������� ������
    friend std::ostream& operator<<(std::ostream& out, const DateClass& date)
    {
        out << "(" << date.m_day << ", " << date.m_month << ")" << date.m_year << "\n";
        return out;
    }

    // ������� �������
    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

};

#endif
#pragma once
