#pragma once
#include <iostream>
#include <assert.h>

template<typename T>
class Stack
{
public:
	Stack(size_t capacity = 4)
		:_a(nullptr)
		,_top(0)
		,_capacity(0)
	{
		if (capacity > 0)
		{
			_a = new T[capacity];
			_capacity = capacity;
			_top = 0;
		
		}
	}
	~Stack()
	{
		delete[] _a;
		_a = nullptr;
		_capacity = 0;
		_top = 0;
	}
	void Push(const T& x)
	{
		if (_capacity == _top)
		{
			int newcapacity = _a == nullptr ? 4 : _capacity * 2;
			//1.开新空间
			//2.拷贝数据
			//3.释放数据
			T* tmp = new T[newcapacity];
			if (_a)
			{
				memcpy(tmp, _a, sizeof(T) * _top);
				delete[] _a;
			}
			_a = tmp;
			_capacity = newcapacity;
		}
		_a[_top] = x;
		_top++;
	}
	void Pop()
	{
		assert(_a);
		_top--;
	}
	bool Empty()
	{
		return _top == 0;
	}
	T& top()
	{
		assert(_a);
		return _a[_top - 1];
	}

private:
	T* _a;
	size_t _top;
	size_t _capacity;
};
