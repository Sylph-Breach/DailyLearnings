#include <iostream>
#include <cmath>

int main() {
    // Inductive Reactance
    double inductiveReactance, frequency, inductance;

    frequency = 1e3; // in hertz
    inductance = 0.1; // in henrys

    // Calculate inductive reactance
    inductiveReactance = 2 * M_PI * frequency * inductance;

    std::cout << "Inductive Reactance: " << inductiveReactance << " Ohms" << std::endl;

    return 0;
}

