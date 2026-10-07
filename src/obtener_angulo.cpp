#include <math.h>
#include <iostream>
#define PI 3.14

//Función para pasar de grados a radianes

double radianes(double a){
	a *= (PI/180);
	return a;
}	


/*M es un ángulo que permite calcular dónde está 
el planeta en su órbita en un instante 
*/
double calcularM(double L, double w){
		double M;
		M = L - w;
		if(M < 0){
			M += 360;
		}
		return M;
}

/*
	E es un ángulo que permite saber qué tan Elíptica es la 
	órbita, esto se llama excentricidad
*/
double calcularE(double M, double e){
	M = radianes(M);
	double E;
	
	E = M;
	
	for(int i = 0; i < 10; i++){
		E = M + e*sin(E);
	}
	
	return E;
}

