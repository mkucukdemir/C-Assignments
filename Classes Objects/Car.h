#ifndef CAR_H_
#define CAR_H_

class Car {
private:
	float fuel;
	float speed;
	int passengers;

public:
	Car();
	Car(float amount);
	~Car();
	void FillFuel(float amout);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard();
};

#endif