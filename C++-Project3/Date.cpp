#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
using std::cout;
using std::endl;

void Date::Print()//��ӡ����
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

Date& Date::operator=(Date d)//��������ظ�ֵ
{
	_year = d._year;
	_month = d._month;
	_day = d._day;

	return *this;
}
bool Date::operator<(const Date& d)//���������С��
{
	if (_year < d._year 
		||_year == d._year && _month < d._month
		|| _year == d._year && _month == d._month && _day < d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Date::operator==(const Date& d)//��������ص���
{
	if (_year == d._year && _month == d._month && _day == d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Date::operator<=(const Date& d)//���������С�ڵ���
{
	return (*this == d)|| (*this < d);
}
bool Date::operator>(const Date& d)//��������ش���
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)//��������ش��ڵ���
{
	return !(*this < d);
}
Date& Date::operator+=(int d)//���������+=����
{
	_day += d;
	while(_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}
Date Date::operator+(int d)//���������+����
{
	Date tmp(* this);
	tmp._day += d;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		tmp._month++;
		if (tmp._month == 13)
		{
			tmp._month = 1;
			tmp._year++;
		}
	}
	return tmp;
}
Date& Date::operator-=(int d)//���������-=����
{
	_day -= d;
	while (_day < 0)
	{
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
Date Date::operator-(int d)//���������-����
{
	Date tmp(*this);
	tmp._day -= d;
	while (tmp._day < 0)
	{
		tmp._month--;
		if (tmp._month == 0)
		{
			tmp._year--;
			tmp._month = 12;
		}
		tmp._day += GetMonthDay(tmp._year, tmp._month);
	}
	return tmp;
}
Date& Date::operator++()//���������ǰ��++
{
	*this += 1;
	return *this;
}
Date Date::operator++(int)//��������غ���++
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
Date& Date::operator--()//���������ǰ��--
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)//��������غ���--
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}
bool Date::operator!=(const Date& d)//��������ز�����
{
	return !(*this == d);
}
int Date::operator-(const Date& d)//����-���ڷ�������
{
	int day = 0;
	Date MinDate = *this;
	Date MaxDate = d;
	if (MinDate > MaxDate)
	{
		MinDate = d;
		MaxDate = *this;
	}
	while (MinDate != MaxDate)
	{
		MinDate++;
		day++;
	}
	if (*this > d)
	{
		return day;
	}
	else
	{
		return -day;
	}
	
}