#include <iostream>
#include "Car.h"

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

    return 0;
    
}