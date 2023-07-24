#include <iostream>
#include "Car.h"
#include "Integer.h"

// Copy constructor is invoked to pass the value as argument
void PassByValue(Integer a) {
    // smt...
}

// Copy constructor is invoked to return an Integer
Integer ReturnByValue(int a) {
    return Integer(a);
}

int main()
{
    Car car(50);
    car.Dashboard();

    car.FillFuel(30);
    car.Dashboard();

    for(int i = 0;i<80;i++)
        car.Accelerate();
    car.Dashboard();
    
    car.Brake();
    car.Dashboard();

    car.AddPassengers(25);
    car.Dashboard();

    for (int i = 0; i < 20; i++)
        car.Accelerate();
    car.Dashboard();

    car.Brake();
    car.Dashboard();

    Car::ShowCount();

    const Car newCar(0);
    Car::ShowCount();
    //
    Integer i(9);
    std::cout << "i: " << i.GetValue() << std::endl;
    // Copy constructor is invoked to create a copy
    Integer j(i);

    Integer k;
    i.SetValue(17);
    // i.SetValue(17.5f);  // attempting to reference a deleted function

    return 0;
    
}