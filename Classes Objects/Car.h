#ifndef CAR_H_
#define CAR_H_

class Car {
private:
	float fuel{0.0f};
	float speed{0.0f};
	int passengers{0};
	static int totalCount;

public:
	Car();
	Car(float amount);
	~Car();
	void FillFuel(float amout);
	void Accelerate();
	void Brake();
	void AddPassengers(int count);
	void Dashboard() const;
	static void ShowCount();
};

#endif