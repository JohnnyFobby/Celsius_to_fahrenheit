#include <iostream>

int main()
{
    double convert{};
    
    std::cout << "Enter degree in celsius: ";
    std::cin >> convert;
    

    double C_to_F = (convert * 9 / 5) + 32;
    std::cout << "Celsius to Fahrenheit equals: " << C_to_F << std::endl;


    return 0;
}