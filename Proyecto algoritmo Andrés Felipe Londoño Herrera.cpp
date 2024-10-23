// 
// Andres Felipe Londoño Herrera 
// Codigo: 0222220003
//
/*	Manejar muestra de datos enteros de un rango dado
	Ejemplo calificar desempeño de un presidente de 1 a 10 o numeros de tarjeta de identidad de niños entre 1999 y 2001
	Hacer un trabajo donde hagas un programa para manejar muestras aleatoria 
	Limite inferior 1
	Con limite superior y tamaño definidos por el usuario
	Una muestra con X elementos que pueda ir desde el 1 hasta el Y
	EJEMPLO: muestra de 200 con rango 1 a 10 o muestra de 400 del 1 al 1000
	Luego se debe crear 3 distintos tipos de ordenadores de muestra: insercion, selección y intercambio(burbuja)
	Dejar que el usuario decida cual usar para ordenar
	Calcular el numero de valores dentro de un rango de la muestra
	EJEMPLO: en una muestra de 200 elementos con rango 1 a 10 buscar cuantos tienen un valor de 5 a 7
	Calcular el numero de veces que aparece un valor dado en una muestra ordenada
	EJEMPLO: en una muestra de 200 elementos con rango 1 a 10 contar cuantas veces se repite un numero X como puede ser 7
	Calcular el numero de valores distintos en la muestra 
	EJEMPLO: en una muestra de 200 elementos con rango 1 a 10 contrar CUANTOS elementos del 1 al 10 salen
	Calcular el valor que mas se repite
	Valor mayor, Valor menor y Promedio, mas estedistica */

//Librerias:
#include<iostream>
//Librerias para funciones aleatorias rand(), srand() y time()
#include<cstdlib>
#include<ctime>
using namespace std;
int main(void){
	
	// Variables de rango y numero de muestras
	int R, M;
	
	// Pedir variables rango y numero de muestras
	cout<<"Porfavor entregue el rango maximo de las muestras, recordando que el minimo es (1): ";cin>>R;
	cout<<"Porfavor entregue numero de muestras a generar: ";cin>>M;
	
	// Lista de int de longitud de todas las muestras dentro del rango 
	int muestraNumero[M];
	// Una lista secundaria para anotar los valores distintos encontrados 
	int distintos[M];
	
	// Contadores 
	int cantidadDelRangoMuestra=0, cantValorRepetido=0, cantValoresDistintos=0;
	
	// Asociados a los contadores
	int rangoSuperior=0, rangoInferior=0, valorRepetido=0;
	
	// Acumuladores
		float sumatoria=0, promedio=0;
	
	// Almacenadores de valores 
		int valorMenor=R, valorMayor=1;
	
	// Pedir el los valores superior e inferior de el rango especifico a contar la cantidad de valores encontrados
		cout<<"Porfavor ingrese los valores del rango especifico a contar valores encontrados: \n";
		cout<<"Numero superior del rango: ";
		cin>>rangoSuperior;
		cout<<"Numero inferior del rango: ";
		cin>>rangoInferior;
		cout<<"Su rango es: [ "<<rangoInferior<<" , "<<rangoSuperior<<" ]\n";
		
	// Pedir el valor especifico a contar las veces que se repite
		cout<<"Ingrese el valor que se contara las veces que se repitio: ";
		cin>>valorRepetido;
	
	//Declarar una semilla distinta para los valores aleatorios usando la funcion srand(n) y la funcion time(NULL) para los valores de n 
		srand(time(NULL));
	// Ciclo para llenar la lista anterior
		for(int i=0; i<M;i++){
		
			//Usar un randomizador que tenga el rango (1,R), osea desde el numero 1 y el numero R
				muestraNumero[i]= 1+rand()%R;
			
			//Revisar si es el (valorMayor) o el (valorMenor) con un par de if 
				if(muestraNumero[i]>valorMayor)
				{
					valorMayor=muestraNumero[i];
				}
				if(muestraNumero[i]<valorMenor)
				{
					valorMenor=muestraNumero[i];
				}
			
			//Revisar si es el valor (ValorRepetido) y contarlo si lo es
				if(muestraNumero[i]==valorRepetido)
				{
					cantValorRepetido=cantValorRepetido+1;
				}
			
			//Revisar si esta en el rango con un if que tiene dos condiciones usando un "and" y si ambos son verdaderos contar 
			// 1) <= que el (rangoSuperior) 
			// 2) >= que el (rangoInferior)
				if(muestraNumero[i]<=rangoSuperior and muestraNumero[i]>=rangoInferior)
				{
					cantidadDelRangoMuestra=cantidadDelRangoMuestra+1;
				}
				
			//Sumatoria de numeros
				sumatoria=sumatoria+muestraNumero[i];
		}

	//Revisar si el numero conseguido ya se obtuvo antes y si no es asi contarlo en (cantValoresDistintos)
	
		//Un for donde revise cada valor de el array original, asi que llega hasta que sea menor que M que es el numero de elementos de nuestro array
		for(int i=0; i<M; i++){
		    //Declarar j fuera del ciclo para usarlo en un if mas tarde
			int j=0;
		    // Buscar muestraNumero[i] dentro de la lista de valores unicos encontrados, con un ciclo que se limita hasta el valor de (cantValoresDistintos)
			    for(j=0; j<cantValoresDistintos; j++) {
			        // Sale del ciclo si el numero en la posicion (i) de el array principal coincide con alguno de los valores del segundo array
					if (muestraNumero[i] == distintos[j]) 
					{	
			            break;
			        }
			        // Si nunca encuentra uno igual (j) va a terminar llegando hasta tener el valor de (cantValoresDistintos)
			    }	
			    
				//Si no se encontro el valor (j) sera igual que  asi que se agregara a el segundo arreglo y aumentar la cantidad de valores distintos 
			    if (j==cantValoresDistintos)
				{
			        distintos[cantValoresDistintos++]=muestraNumero[i];                                
			    }
		}

	//Dar valor al promedio de los numeros
		promedio=sumatoria/M;
	
	
	// Pedir tipo de ordenador a usar
		int organizador;
		cout<<"Que organizador quieres usar: "<<endl;
		cout<<"1) Insercion"<<endl;
		cout<<"2) Seleccion"<<endl;
		cout<<"3) Intercambio"<<endl;
		cout<<"4) Desorden"<<endl;
		cin>>organizador;
	
	//switch case para que agarre alguno
	
		switch(organizador){
			case 1:
				// Codigo insercion, aca haces que el codigo tome un valor revise todos antes que el y lo ubique en la posicion que va, es algo confuso pero va llevando valores del final del array
				// hacia el inicio del mismo hasta que esten ordenados
			
				//Variable para guardar el valor auxiliar 
    			int auxiliarA;
			    for(int i=1; i<M; i++){
			    	//se da como igual a el numero de la muestra con la posicion i
			        auxiliarA=muestraNumero[i];
			        
			        //Luego se crea un ciclo para ordenar dicha muestra hacia la izquierda (i=0) que juzgue si j es mayor a 0 y si los valores anteriores a el auxiliar son menores y realiza los cambios
			        int j;
			        
					for(j=i;j>0 and muestraNumero[j-1]>auxiliarA;j--){
			            muestraNumero[j]=muestraNumero[j-1];
			        }
			        muestraNumero[j]=auxiliarA;
			    }
			break;
			
			case 2:
				// Codigo Seleccion, este busca el elemento menor del array y se intercambia con el que está en la primera posición. 
				// Luego, se busca el segundo elemento más pequeño y se intercambia con el que está en la segunda posición. Y así continuamente.
				
				// Variables para ir organizando 
				int min, auxiliarB;
				
				for(int i=0;i<M;i++){
			        min=i;
			        
			        // Revisar si los valores siguientes son mas pequeños que el mas pequeño actual
			        for(int j=i+1;j<=M;j++){
			            if(muestraNumero[j]<muestraNumero[min])
			                min = j;
			        }
		
			        //intercambio de posiciones limitado hasta antes de que pase de M-1
			        if(i!=M-1)
					{
						auxiliarB=muestraNumero[min];
			        	muestraNumero[min]=muestraNumero[i];
			        	muestraNumero[i]=auxiliarB;
					}
					
			    }
			break;
			
			case 3:
				// Codigo Intercambio(burbuja), basicamente revisas todo el array de a duplas de numeros y los que sean mayores se colocan a la derecha y los pequeños a la izquierda
				
				// auxiliar es un elemento creado para poder apoyarnos para el intercambio 
				int auxiliarC;
				for(int i=0;i<M-1;i++){
					for(int j=1;j<M;j++){
						//Si el elemento anterior es mayor, se hace el cambio
						if(muestraNumero[j]<muestraNumero[j-1])
						{
							auxiliarC=muestraNumero[j];
							muestraNumero[j]=muestraNumero[j-1];
							muestraNumero[j-1]=auxiliarC;
						}
					}
				}
			break;
			
			default:
			break;
		}
	
	// VALOR MAS REPETIDO:
	
	//Variables a usar
		int valorMasRepetido=0, cantRepeticionesActuales=0, cantRepeticionesMayor=0;
	
	// Ciclo de cada valor de el rango con otro ciclo dentro
	// Ciclo que recorra todo el arreglo (muestraNumero[M]) con un if para ver si el valor del primer ciclo es igual a el valor de la (muestraNumero[M]) y contar 1 en (cantRepeticionesActuales) 
	// Si la cantidad de veces que se repitio el valor dentro del arreglo (cantRepeticionesActuales) 
	// es mayor a la cantidad de veces que se repitio el valor mas repetido (cantRepeticionesMayor) 
	// entonces se debe guardar el valor del rango que se repitio esa cantidad de veces en (valorMasRepetido)
	
		for(int i=0;i<R;i++){
			cantRepeticionesActuales=0;
			for(int j=0;j<M;j++){
				if(muestraNumero[j]==i)
				{
					cantRepeticionesActuales++;
				}
			}
			if(cantRepeticionesActuales>cantRepeticionesMayor)
			{
				cantRepeticionesMayor=cantRepeticionesActuales;
				valorMasRepetido=i;
			}
		}
	
	// Por ultimo se vana imprimir los valores requeridos:
		
	//Aca se imprime todo el array de 10 en 10
		int contador=0;
		for(int i;i<M;i++){
			if(contador%10==0)
			{
				cout<<endl;	
			}
			cout<<" /"<<muestraNumero[i]<<"/ ";
			contador++;
		}
		cout<<endl<<endl;
		
	//Valores dentro de el rango especifico
		cout<<"Cantidad de valores dentro del rango ("<<rangoInferior<<" , "<<rangoSuperior<<"): "<<cantidadDelRangoMuestra<<endl;
		
	//Cuantas veces aparece el valor especifico
		cout<<"Cantidad veces que sale el valor especifico ("<<valorRepetido<<"): "<<cantValorRepetido<<endl;
		
	//Numero de valores distintos de la muestra ordenada
		cout<<"Cantidad de valores distintos de la muestra: "<<cantValoresDistintos<<endl;
		
	//Valor que mas veces aparece en la muestra ordenada
		cout<<"Valor que mas veces aparece en la muestra ordenada: "<<valorMasRepetido<<". Este se repitio un total de: "<<cantRepeticionesMayor<<" veces."<<endl;
		
	//Valor mayor, Valor menor y Promedio
		cout<<"Valor mayor: "<<valorMayor<<endl;
		cout<<"Valor menor: "<<valorMenor<<endl;
		cout<<"Sumatoria de los valores de la lista: "<<sumatoria<<endl;
		cout<<"Promedio de los valores de la lista: "<<promedio<<endl;
}
