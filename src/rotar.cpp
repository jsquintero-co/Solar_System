#include <math.h>
#include "obtener_angulo"


void rotarPunto(double x, double y, double angulo, double &xNuevo, double &yNuevo){
	radianes(angulo);
	xNuevo = x*cos(angulo)-y*sin(angulo);
	yNuevo = x*sin(angulo)+y*cos(angulo);
}