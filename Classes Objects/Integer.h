#pragma once
/* *
* Rule of 3
* All should be defined if a user implements any of them
* - Destructor [to free the resources]
* - Copy constructor [to perform a deep copy]
* - Copy assignment operator [to perform a deep copy]
* If not, then memory leak or shallow copy can be occured
*/
class Integer {
	int *pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer &value);
	int GetValue() const;
	void SetValue(int value);
};