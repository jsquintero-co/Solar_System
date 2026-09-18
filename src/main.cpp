//Test para raylib
#include "planeta.h"
#include "sistema.h"

int main(){
	//Valores del sol
	float solX = 640;
	float solY = 400;
	
	//Inicializar los planetas
	inicializarSistema();
	
	InitWindow(1280, 800, "Mi primer raylib"); //Los dos primeros son el tamaño, el tercero es el título
	SetTargetFPS(60); //Dar los FPS de la pantalla 
	
	/*
		Las pantallas funcionan con coordenadas
		(x,y), al parecer El origen empieza en la 
		esquina superior izquierda, entonces a medida
		que X aumenta, más hacia la derecha, y a medida
		que Y aumenta, más hacia abajo está.
	*/
	
	//Game Loop
	while(WindowShouldClose() == false){ //No se cierra hasta que retorne verdadero
		/*Para que la bola se mueva a una velocidad no basada en pixeles, sino en tiempo,
		esto se crea usando la formula donde CambioX = velocidad * CambioTiempo
		Este cambio de tiempo se puede usar con GetFrameTime(), que captura la cantidad 
		de tiempo desde el cambio al frame anterior, esto independiza el programa de 
		la cantidad de FPS*/
		
	
		//1. Event Handing 
		
		//2. Updating Position
		/*
			Acá se usan dos fórmulas, la del ángulo thetha = thetha w*DeltaT, donde w es el
			periodo 2pi/T donde T es tiempo en segundos, eso significa que hace un giro
			cada T segundos. DeltaT es la tasa de cambio del tiempo, que está medida
			con GetFrameTime que es el tiempo que le tomó cambiar de un frame a otro al 
			PC.
			
			La otra formula es la posicion del planeta en X y Y, cómo es movimiento 
			Elíptico, se usa x = coordenada_de_centro - raiz(a^2 - b^2) + aCos(thetha)
			Donde a y b son distancias de la tierra al sol, y usa 
			y = coordenada_centro + bCos(theta)
			
		*/ 
		MoverSistema();
		
		//3. Drawing 
		BeginDrawing();
		
		ClearBackground(BLACK);
		DibujarSistema();
		DrawCircle(solX, solY, 20, ORANGE);
		
		EndDrawing();
	}
	
	CloseWindow(); //Cierra la ventana antes de terminar la ejecución
	return 0;
}

