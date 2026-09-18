#include "planeta.h"

using namespace std;

//Implementación del módulo .h

//Valor de Pi para la velocidad angular
float pi = 3.14;

//Se mueve el planeta por iteración actualizando el ángulo y su movimiento Focal (elíptico)
void MoverPlaneta(Planeta &planet){
	float solx = 640;
	float soly = 400;
	planet.thetha += ((2*pi)/planet.tiempo)* GetFrameTime();
	planet.x = solx -(sqrt(pow(planet.disA, 2)-pow(planet.disB, 2)))+ planet.disA * cos(planet.thetha) ;
	planet.y = soly + planet.disB * sin(planet.thetha);
};

//Dibuja el planeta usando sus coordenadas, se dibuja por cada iteración del "juego"
void DibujarPlaneta(Planeta planet){
	DrawCircle(planet.x, planet.y, planet.diam, planet.color); 
};




