#ifndef PLANETA_H
#define PLANETA_H
#include <raylib.h>
#include <math.h>


using namespace std;

struct Planeta{
	float x;
	float y;
	float tiempo;
	float disA;
	float disB;
	float diam;
	float thetha;
	Color color;
};


void MoverPlaneta(Planeta &planet);

void DibujarPlaneta(Planeta planet);


#endif
 