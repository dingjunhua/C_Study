#define _CRT_SECURE_NO_WARNINGS 1
#include "Date.h"
using std::cout;
using std::endl;

void Date::Print()//打印日期
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

Date& Date::operator=(Date d)//运算符重载赋值
{
	_year = d._year;
	_month = d._month;
	_day = d._day;

	return *this;
}
bool Date::operator<(const Date& d)//运算符重载小于
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
bool Date::operator==(const Date& d)//运算符重载等于
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
bool Date::operator<=(const Date& d)//运算符重载小于等于
{
	return (*this == d)|| (*this < d);
}
bool Date::operator>(const Date& d)//运算符重载大于
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)//运算符重载大于等于
{
	return !(*this < d);
}
Date& Date::operator+=(int d)//运算符重载+=天数
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
Date Date::operator+(int d)//运算符重载+天数
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
Date& Date::operator-=(int d)//运算符重载-=天数
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
Date Date::operator-(int d)//运算符重载-天数
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
Date& Date::operator++()//运算符重载前置++
{
	*this += 1;
	return *this;
}
Date Date::operator++(int)//运算符重载后置++
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}
Date& Date::operator--()//运算符重载前置--
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)//运算符重载后置--
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}
bool Date::operator!=(const Date& d)//运算符重载不等于
{
	return !(*this == d);
}
int Date::operator-(const Date& d)//日期-日期返回天数
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