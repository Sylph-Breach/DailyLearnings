//g++  7.4.0
#include <iostream>

int main() {
    // Ohm's Law
    double voltage, current, resistance;
    voltage = 5.0; // in volts
    current = 0.1; // in amperes

    // Calculate resistance
    resistance = voltage / current;

    std::cout << "Resistor Resistance: " << resistance << " Ohms" << std::endl;

    return 0;
}


