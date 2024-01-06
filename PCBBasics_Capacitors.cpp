#include <iostream>

int main() 
{
    // Capacitor formulas
    double charge, capacitance, voltage;

    charge = 100e-6; // in coulombs
    capacitance = 1e-6; // in farads

    // Calculate voltage
    voltage = charge / capacitance;

    std::cout << "Capacitor Voltage: " << voltage << " Volts" << std::endl;

    return 0;
}

