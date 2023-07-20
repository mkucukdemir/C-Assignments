#pragma once
class Integer {
	int *pInt;
public:
	Integer();
	Integer(int value);
	int GetValue() const;
	void SetValue(int value);
};