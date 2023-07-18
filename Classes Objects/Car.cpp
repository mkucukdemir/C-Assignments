#include "Car.h"
#include <iostream>

Car::Car() {
	std::cout << "Car()" << std::endl;
}

Car::Car(float amount) {
	this->fuel = amount;
	std::cout << "Car(float amount) where amount: " << amount << std::endl;
}

Car::~Car() {
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

void Car::Dashboard() {
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Fuel: " << this->fuel << std::endl;
	std::cout << "Speed: " << this->speed << std::endl;
	std::cout << "Passengers: " << this->passengers << std::endl;
	std::cout << "--------------------------------" << std::endl;
}