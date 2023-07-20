#pragma once
class Integer {
	int *pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer &value);
	int GetValue() const;
	void SetValue(int value);
};