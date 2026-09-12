//Test para raylib
#include <raylib.h>
#include <math.h>

struct planeta{
	float x; //Posicion en X
	float y; //Posicion en Y
	float vx; //Velocidad en X
	float vy; //Velocidad en Y
};

planeta tierra;
planeta sol;
int main(){
	//Las coordenadas de la primera bola (sol)
	sol.x = 400;
	sol.y = 400;
	
	//Valores
	float pi = 3.14;
	float tiempo = 10;
	float thetha = 0;
	
	InitWindow(800, 800, "Mi primer raylib"); //Los dos primeros son el tamaño, el tercero es el título
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
		thetha += ((2*pi)/tiempo)*GetFrameTime();
		tierra.x = sol.x + 200 * sin(thetha) ;
		tierra.y = sol.y + 200 * cos(thetha);
		
		//3. Drawing 
		BeginDrawing();
		
			ClearBackground(BLACK); //Si se mueve el objeto, hace un clear en cada iteracion
			DrawCircle(tierra.x, tierra.y, 10, BLUE); 
			DrawCircle(sol.x, sol.y, 40, ORANGE);/*
				Los dos primeros parametros son el punto en la pantalla 
				donde se dibujan, el tercer parámetro es el radio del circulo
				y el último es el color
			*/
		
		EndDrawing();
	}
	
	CloseWindow(); //Cierra la ventana antes de terminar la ejecución
	return 0;
}

