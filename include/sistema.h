#ifndef SISTEMA_H
#define SISTEMA_H
#include "planeta.h"

using namespace std;

extern Planeta mercurio;
extern Planeta venus;
extern Planeta tierra;
extern Planeta marte;

//Exterior
extern Planeta jupiter;
extern Planeta saturno;
extern Planeta urano;
extern Planeta neptuno;

void inicializarSistema();

void DibujarSistema();

void MoverSistema();


#endif