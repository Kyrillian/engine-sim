#ifndef ATG_ENGINE_SIM_UTILITIES_H
#define ATG_ENGINE_SIM_UTILITIES_H

double modularDistance(double a, double b, double mod = 1.0);
double positiveMod(double x, double mod);
double erfApproximation(double x);
double clamp(double x, double x0 = 0.0, double x1 = 1.0);

#endif /* ATG_ENGINE_SIM_UTILITIES_H */
