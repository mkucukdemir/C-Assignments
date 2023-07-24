#include "Car.h"
#include <iostream>

int Car::totalCount{0};

Car::Car():Car(0.0f) {
	std::cout << "Car()" << std::endl;
}

Car::Car(float amount):Car(amount,0) {
	std::cout << "Car(float amount) where amount: " << amount << std::endl;
}

Car::Car(float amount, int passengers) {
	++totalCount;
	this->fuel = amount;
	this->passengers = passengers;
	std::cout << "Car(float amount, int passengers) where amount: " << amount << ", passengers: " << passengers << std::endl;
}

Car::~Car() {
	--totalCount;
	std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount) {
	this->fuel += amount;
}

void Car::Accelerate() {
	this->speed += 1;
	this->fuel -= 0.5f;
}

void Car::Brake() {
	this->speed = 0;
}

void Car::AddPassengers(int count) {
	this->passengers += count;
}

// Dashboard do not changes value of the any member
void Car::Dashboard() const {
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Fuel: " << this->fuel << std::endl;
	std::cout << "Speed: " << this->speed << std::endl;
	std::cout << "Passengers: " << this->passengers << std::endl;
	std::cout << "--------------------------------" << std::endl;
}

void Car::ShowCount() {
	std::cout << "Total Count: " << totalCount << std::endl;
}