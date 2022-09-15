#pragma once
#include <iostream>
#include <assert.h>

class Date
{
public:
	

	Date(int year = 1990, int month = 1, int day = 1)//调用频率高，故放在头文件中定义
	{
		Is_legal(year, month, day);
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)//拷贝构造
	{
		_day = d._day;
		_month = d._month;
		_year = d._year;
	}
	~Date()//析构函数
	{
		_day = 0;
		_month = 0;
		_year = 0;
	}
	void Is_legal(int year, int month, int day)
	{
		assert(((year > 0) && (month > 0 && month < 13) && (day > 0 && day <= GetMonthDay(year, month))));
		
	}
	int GetMonthDay(int year,int month)
	{
		static int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
		int day = a[month];
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			return 29;
		}
		else
		{
			return day;
		}
	}
	void Print();//打印日期
	Date& operator=(Date d);//运算符重载赋值
	bool operator<(const Date& d);//运算符重载小于
	bool operator<=(const Date& d);//运算符重载小于等于
	bool operator>(const Date& d);//运算符重载大于
	bool operator>=(const Date& d);//运算符重载大于等于
	bool operator==(const Date& d);//运算符重载等于
	bool operator!=(const Date& d);//运算符重载不等于
	Date& operator+=(int d);//运算符重载+=天数
	Date operator+(int d);//运算符重载+天数
	Date& operator-=(int d);//运算符重载-=天数
	Date operator-(int d);//运算符重载-天数
	Date& operator++();//运算符重载前置++
	Date operator++(int);//运算符重载后置++
	Date& operator--();//运算符重载前置--
	Date operator--(int);//运算符重载后置--
	int operator-(const Date& d);//日期-日期放回天数



private:
	int _year;
	int _month;
	int _day;
};