#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

#ifndef __ACCOUNT_EXCEPTION_H__
#define __ACCOUNT_EXCEPTION_H__

class MinusException
{
private:
	int exval;

public:
	MinusException(int val) : exval(val)
	{ }

	void ShowExceptionInfo(void) const
	{
		cout << "입(출)금액 " << exval << "은 유효하지 않습니다!" << endl;
	}
};

class InsuffException
{
private:
	int balance;
	int reqval;
public:
	InsuffException(int val, int req)
		: balance(val), reqval(req)
	{ }

	void ShowExceptionInfo() const
	{
		cout << "잔액에서 " << reqval - balance << "가(이) 부족합니다!" << endl;
	}
};

#endif