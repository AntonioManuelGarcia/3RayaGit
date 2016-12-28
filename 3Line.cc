#include <iostream>

using namespace std;

int main(){

	char Tablero[3][3];
	bool final = false;
	bool jugador = false;
	char jugada;
	int x,y,cont=0;
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				Tablero[i][j]='_';
			}
		}

	do{
		jugador=cont%2;
		cout << "jugador: " << (jugador+1) << endl;
		
		cout << endl << "indique la Coordenada x (1-3): ";
		cin >> x;
		while(x<1 || x>3){
			cout << endl << "COORDENADA INCORRECTA! LA COORDENADA DEBE SER UN NUMERO ENTRE 1 Y 3" << endl << "Por favor indique la Coordenada x: ";
			cin >> x;
		}
		cout << endl << "indique la Coordenada y (1-3): ";
		cin >> y;
		while(y<1 || y>3){
			cout << endl << "COORDENADA INCORRECTA! LA COORDENADA DEBE SER UN NUMERO ENTRE 1 Y 3" << endl << "Por favor indique la Coordenada y: ";
			cin >> y;
		}
		if(jugador==0){Tablero[(x-1)][(y-1)]='X';}
		else{Tablero[(x-1)][(y-1)]='O';}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				cout << Tablero[i][j];
			}
			cout << endl;
		}
		
		cout << "Desea acabar el juego? (s/n) ";
		cin >> jugada;
		if(jugada=='s'){ final=true;}else{cont++;}
	}while(final!=true);


}
