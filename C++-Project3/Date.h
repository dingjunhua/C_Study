#pragma once
#include <iostream>
#include <assert.h>

class Date
{
public:
	

	Date(int year = 1990, int month = 1, int day = 1)//����Ƶ�ʸߣ��ʷ���ͷ�ļ��ж���
	{
		Is_legal(year, month, day);
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)//��������
	{
		_day = d._day;
		_month = d._month;
		_year = d._year;
	}
	~Date()//��������
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
	void Print();//��ӡ����
	Date& operator=(Date d);//��������ظ�ֵ
	bool operator<(const Date& d);//���������С��
	bool operator<=(const Date& d);//���������С�ڵ���
	bool operator>(const Date& d);//��������ش���
	bool operator>=(const Date& d);//��������ش��ڵ���
	bool operator==(const Date& d);//��������ص���
	bool operator!=(const Date& d);//��������ز�����
	Date& operator+=(int d);//���������+=����
	Date operator+(int d);//���������+����
	Date& operator-=(int d);//���������-=����
	Date operator-(int d);//���������-����
	Date& operator++();//���������ǰ��++
	Date operator++(int);//��������غ���++
	Date& operator--();//���������ǰ��--
	Date operator--(int);//��������غ���--
	int operator-(const Date& d);//����-���ڷŻ�����



private:
	int _year;
	int _month;
	int _day;
};