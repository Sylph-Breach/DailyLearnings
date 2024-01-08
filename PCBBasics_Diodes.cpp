#include <iostream>
#include <cmath>

int main() 
{
    // Diode Equation
    double diodeCurrent, reverseSaturationCurrent, voltage, idealityFactor, thermalVoltage;
    voltage = 0.7; // in volts
    reverseSaturationCurrent = 1e-12; // in amperes
    idealityFactor = 1.0;
    thermalVoltage = 0.026; // in volts
    // Calculate diode current
    diodeCurrent = reverseSaturationCurrent * (exp(voltage / (idealityFactor * thermalVoltage)) - 1);
    std::cout << "Diode Current: " << diodeCurrent << " Amperes" << std::endl;
    return 0;
}

