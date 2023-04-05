#pragma once

// The Calculator class contains several member functions that perform calculations related to chemistry
class calculator {
    // Member variables used as parameters for the calculations
    float m, n, M; // m, n, and M are variables used to calculate the molar mass
    float a, A, alpha; // a, A, and alpha are variables used to calculate the degree of dissociation
    float massSubstance, V, p; // m, V, and p are variables used to calculate the mass density

public:
    // Constructor of the Calculator class
    calculator();
    // Member functions to perform the calculations
    float molarMass(float m, float n, float M); // calculates the molar mass
    float degreeOfDissocian(float a, float A, float alpha); // calculates the degree of dissociation
    float massDensity(float massSubstance, float V, float p); // calculates the mass density
};