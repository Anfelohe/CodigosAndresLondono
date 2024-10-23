#include<iostream>

using namespace std;

int main(void){


	int numeros[4][4]={{10,7,8,9},{4,21,30,12},{75,60,29,1},{5,13,16,20}};
	int p=0;
	
	//PUNTO 1
	cout<<"Imprimir por filas: \n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\t";
	}
	cout<<"\n\n";
	
	//PUNTO 2
	cout<<"Imprimir por columnas: \n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\t";
	}
	cout<<"\n\n";
	
	//PUNTO 3
	cout<<"Imprimir por diagonales hacia arriba: \n\n";
	for(int k=0;k<7;k++){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i+j==k){
					cout<<numeros[j][i]<<" ";
				}
			}		
		}
		cout<<"\t";
	}
	cout<<"\n\n";
	
	//PUNTO 4
	cout<<"Imprimir por diagonales hacia abajo: \n\n";
	for(int k=0;k<7;k++){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i+j==k){
					cout<<numeros[i][j]<<" ";
				}
			}			
		}
		cout<<"\t";
	}
	cout<<"\n\n";	
	
	
	
	//PUNTO 5
	cout<<"Imprimir diagonal principal: \n\n";
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
            if (i==j){
			cout<<numeros[i][j]<<" ";
			}
		}
		cout<<"\t";
	}
	cout<<"\n\n";
	
	//PUNTO 6
	cout<<"Imprimir diagonal secundaria: \n\n";
	for (int i=0;i<4;i++){
		for (int j=0;j<4;j++){
            if (i+j==3){
			cout<<numeros[i][j]<<" ";
			}
		}
		cout<<"\t";
	}
	cout<<"\n\n";
	
	//PUNTO 7
	cout<<"Imprimir en culebra: \n\n";
	for(int i=0;i<4;i++){
		if(i%2==0){
			for(int j=0;j<4;j++){
				cout<<numeros[i][j]<<" ";
			}
		cout<<"\t";
		}
		else{
			for(int j=3;j>-1;j--){
				cout<<numeros[i][j]<<" ";
			}
		cout<<"\t";
		}
		
	}
	cout<<"\n\n";
	
	//PUNTO 8
	cout<<"Imprimir triangulo superior: \n\n";
	for(int k=0;k<7;k++){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(i+j==k and i+j<3){
					cout<<numeros[j][i]<<" ";
				}
			}			
		}
		cout<<"\t";
	}
	cout<<"\n\n";	
	
	//PUNTO 9
		cout<<"Imprimir triangulo inferior: \n\n";
	for(int k=0;k<7;k++){
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(i+j==k and i+j>3){
						cout<<numeros[j][i]<<" ";
					}
				}			
			}
			cout<<"\t";
		}
		cout<<"\n\n";	
		
	//PUNTO 10
		cout<<"Imprimir posiciones apres incluyendo (0,0): \n\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i%2==0 and j%2==0){
				cout<<numeros[i][j]<<" ";
			}
		}
		cout<<"\t";
	}
	cout<<"\n\n";
}
