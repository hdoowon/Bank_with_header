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
		cout << "��(��)�ݾ� " << exval << "�� ��ȿ���� �ʽ��ϴ�!" << endl;
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
		cout << "�ܾ׿��� " << reqval - balance << "��(��) �����մϴ�!" << endl;
	}
};

#endif