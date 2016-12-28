#include <iostream>

using namespace std;

int main(){

	char Tablero[3][3];
	bool final = false;
	char jugada;
	int x,y;
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				Tablero[i][j]='_';
			}
		}

	do{
		cout << "indique su jugada: ";
		cin >> jugada;
		cout << endl << "indique la Coordenada x: ";
		cin >> x;
		cout << endl << "indique la Coordenada y: ";
		cin >> y;
		Tablero[x][y]=jugada;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				cout << Tablero[i][j];
			}
			cout << endl;
		}
		
		cout << "Desea acabar el juego? (s/n) ";
		cin >> jugada;
		if(jugada=='s'){ final=true;}
	}while(final!=true);


}
