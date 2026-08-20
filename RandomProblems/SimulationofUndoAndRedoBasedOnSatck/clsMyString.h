#pragma once

#include <iostream>
#include <stack>

using namespace std;

class clsMyString
{

private:

	string _Value;

	stack<string> _stkUndo;

	stack<string> _stkRedo;

public:

	clsMyString(string Value = " ")
	{
		_Value = Value;
	}

	string GetValue()
	{
		return _Value;
	}

	void SetValue(string Value)
	{
		_stkUndo.push(_Value);
		_Value = Value;
	}

	void Undo()
	{
		if (_stkUndo.empty())
			return;

		_stkRedo.push(_Value);
		_Value = _stkUndo.top();
		_stkUndo.pop();
	}

	void Redo()
	{
		if (_stkRedo.empty())
			return;

		_stkUndo.push(_Value);
		_Value = _stkRedo.top();
		_stkRedo.pop();
	}


};