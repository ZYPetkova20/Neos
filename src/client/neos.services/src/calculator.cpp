#include "../include/calculator.h"

// Constructor of the Calculator class
calculator::calculator()
{
}

// Calculates the molar mass based on the given parameters
float calculator::molarMass(float m, float n, float M)
{
    // Check which parameter is missing and calculate the missing one
    if (m >= -1 && n >= -1 && M >= -1) {
        if (m == -1)
            return M * n;
        else if (n == -1)
            return m / M;
        else if (M == -1)
            return m / n;
    }
    m = 0;
    n = 0;
    M = 0;
    return 0;
}

// Calculates the degree of dissociation based on the given parameters
float calculator::degreeOfDissocian(float a, float A, float alpha)
{
    // Check which parameter is missing and calculate the missing one
    if (a >= -1 && A >= -1 && alpha >= -1) {
        if (a == -1)
            return A * alpha;
        else if (A == -1)
            return a / alpha;
        else if (alpha == -1)
            return a / A;
    }
    a = 0;
    A = 0;
    alpha = 0;
    return 0;
}

// Calculates the mass density based on the given parameters
float calculator::massDensity(float m, float V, float p)
{
    // Check which parameter is missing and calculate the missing one
    if (m >= -1 && V >= -1 && p >= -1) {
        if (massSubstance == -1)
            return V * p;
        else if (V == -1)
            return massSubstance / p;
        else if (p == -1)
            return massSubstance / V;
    }
    m = 0;
    V = 0;
    p = 0;
    return 0;
}