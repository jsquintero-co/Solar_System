#include <math.h>

double calcularX(double a, double e, double E){
	double x;
	x = a*(cos(E)-e);
	return x;
}

double calcularY(double a, double e, double E){
	double y; 
	y = a * (sqrt(1-pow(e,2))) * sin(E);
	return y;
}

double calcularDis(double x, double y){
	double r = sqrt(pow(x, 2) + pow(y, 2));
	return r;
}|
