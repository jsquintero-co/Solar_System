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
	sol.x = 450;
	sol.y = 450;
	
	//Valores
	float pi = 3.14;
	float tiempo = 10;
	float thetha = 0;
	
	InitWindow(900, 900, "Mi primer raylib"); //Los dos primeros son el tamaño, el tercero es el título
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
		thetha += ((2*pi)/tiempo)*GetFrameTime();
		tierra.x = sol.x -(sqrt(pow(300, 2)-pow(299, 2)))+ 300 * cos(thetha) ;
		tierra.y = sol.y + 99 * sin(thetha);
		
		//3. Drawing 
		BeginDrawing();
		
			ClearBackground(BLACK); //Si se mueve el objeto, hace un clear en cada iteracion
			DrawCircle(tierra.x, tierra.y, 5, BLUE); 
			DrawCircle(sol.x, sol.y, 20, ORANGE);/*
				Los dos primeros parametros son el punto en la pantalla 
				donde se dibujan, el tercer parámetro es el radio del circulo
				y el último es el color
			*/
		
		EndDrawing();
	}
	
	CloseWindow(); //Cierra la ventana antes de terminar la ejecución
	return 0;
}

