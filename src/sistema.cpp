#include "sistema.h"

//Interior
Planeta mercurio;
Planeta venus;
Planeta tierra;
Planeta marte;

//Exterior
Planeta jupiter;
Planeta saturno;
Planeta urano;
Planeta neptuno;

void inicializarSistema(){
//Valores mercurio
	mercurio.disA = 30;
	mercurio.disB = 29;
	mercurio.diam = 1;
	mercurio.tiempo = 2.4;
	mercurio.thetha = 0;
	mercurio.color = LIGHTGRAY;

//Valores venus
	venus.disA = 45;
	venus.disB = 44;
	venus.diam = 3;
	venus.tiempo = 6.2;
	venus.thetha = 0;
	venus.color = YELLOW;
	
//Valores tierra
	tierra.disA = 60;
	tierra.disB = 59;
	tierra.diam = 5;
	tierra.tiempo = 10;
	tierra.thetha = 0;
	tierra.color = BLUE;
	
//Valores marte
	marte.disA = 80;
	marte.disB = 79;
	marte.diam = 6;
	marte.tiempo = 18.8;
	marte.thetha = 0;
	marte.color = RED;

//Valores jupiter
	jupiter.disA = 130;
	jupiter.disB = 128;
	jupiter.diam = 23;
	jupiter.tiempo = 118.6;
	jupiter.thetha = 0;
	jupiter.color = BEIGE;

//Valores saturno
	saturno.disA = 200;
	saturno.disB = 197;
	saturno.diam = 20;
	saturno.tiempo = 294.6;
	saturno.thetha = 0; 
	saturno.color = GRAY;

//Valores urano
	urano.disA = 300;
	urano.disB = 295;
	urano.diam = 15;
	urano.tiempo = 840.1;
	urano.thetha = 0;
	urano.color = SKYBLUE;
	
//Valores neptuno
	neptuno.disA = 410;
	neptuno.disB = 403;
	neptuno.diam = 16;
	neptuno.tiempo = 1647.9;
	neptuno.thetha = 0;
	neptuno.color = DARKBLUE;
	
}

void DibujarSistema(){
	DibujarPlaneta(mercurio);
	DibujarPlaneta(venus);
	DibujarPlaneta(tierra);
	DibujarPlaneta(marte);
	DibujarPlaneta(jupiter);
	DibujarPlaneta(saturno);
	DibujarPlaneta(urano);
	DibujarPlaneta(neptuno);
}

void MoverSistema(){
	MoverPlaneta(mercurio);
	MoverPlaneta(venus);
	MoverPlaneta(tierra);
	MoverPlaneta(marte);
	MoverPlaneta(jupiter);
	MoverPlaneta(saturno);
	MoverPlaneta(urano);
	MoverPlaneta(neptuno);
}
