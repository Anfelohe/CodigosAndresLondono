

#include<iostream>
using namespace std;

//	Creacion de Structs para el codigo
		struct datosBasicos{
				int cedula;
				string nombre;
				string apellido;
				string sexo;
				int edad;
				string correo;
				int telefono;
			};
			struct datosCuenta{
				int codigo;
				int numeroCuenta;
				float saldo;
				string estado;
			};
			struct tipoCuenta{
			//	101 Ahorro		102 Corriente	103 CDT		104 Nequi	105 Credito 
				int codigo;
				string nombre;
			};
			struct producto{
				int cedula;
				int codigo;
			};

// Declaracion de funcion de limpieza
void funcionLimpiar();
void funcionLimpiar(){
	cout<<"\n\n\n\n";
	system("pause");
	system("cls");
}

//	Main
int main(){
	
	//Declaraciones de variables
	int opcion, opcion2, opcion3, opcion3_1, opcion4, opcion4_2, opcion5, opcion6, aux1, aux2, aux3, aux4=0, aux5, aux6=-1, aux7;
	int cantidadMaximaPersonas, cantidadActualPersonas=0, cantidadCuentasCreadas=0;
	
	//Informacion inicial para el banquero
	cout<<"----------------INFORMACION IMPORTANTE------------------\n\n";
	cout<<"Buenos dias banquero de la sucursal #79, en el dia de hoy\nle informamos que estaremos usando el nuevo servicio de\ncontrataciones londono, el sistema debera ser configurado";
	cout<<"\n\n----------------INFORMACION IMPORTANTE------------------\n\n";		
	funcionLimpiar();
	
	//Configuracion de tipos de cuentas:
	cout<<"----------------CONFIGURACION INICIAL DEL SISTEMA BANCARIO------------------\n\n";
	cout<<"La primera configuracion sera saber cuantas personas maximo abarcara el sistema\n";
	cout<<"Ingrese la cantidad maxima de personas en el sistema: ";cin>>cantidadMaximaPersonas;
	funcionLimpiar();
	
	//Creacion de vectores de cuentas
	datosBasicos personas[cantidadMaximaPersonas];
	datosCuenta cuentas[1000];
	producto productos[1000];
	tipoCuenta tipoDeCuentas[5];
	
	cout<<"----------------CONFIGURACION INICIAL DEL SISTEMA BANCARIO------------------\n\n";
	cout<<"La segunda configuracion sera crear codigos de los tipos de cuentas\n\n";
		tipoDeCuentas[0].nombre="Ahorro";
		tipoDeCuentas[1].nombre="Corriente";
		tipoDeCuentas[2].nombre="CDT";
		tipoDeCuentas[3].nombre="Nequi";
		tipoDeCuentas[4].nombre="Credito";
	for(int i=0;i<5;i++){
		cout<<"Ingrese el codigo del tipo de cuenta con nombre '"<<tipoDeCuentas[i].nombre<<"': ";
		cin>>tipoDeCuentas[i].codigo;cout<<endl;
	}
	cout<<"\nPerfecto, ahora continuemos con el menu de empleados\n";
	funcionLimpiar();
	
	//Menu
	do{
		cout<<"----------------MENU------------------\n\n";
		cout<<"	  1) Ver tipos de cuentas\n";
		cout<<"	  2) Crear persona\n";
		cout<<"	  3) Crear cuentas\n";
		cout<<"	  4) Crear productos\n";
		cout<<"	  5) Transacciones de cuentas\n";
		cout<<"	  6) Actualizar datos de una persona\n";
		cout<<"	  7) Salir\n";
		cout<<"	Ingrese su opcion: ";
		cin>>opcion;
		funcionLimpiar();
		
		switch(opcion){
			case 1:{
				cout<<"----------------TIPOS DE CUENTA------------------\n\n";
				for(int i=0;i<5;i++){
								cout<<"Nombre del tipo de cuenta: ";
								cout<<tipoDeCuentas[i].nombre;
								cout<<"\nCodigo del tipo de cuenta: ";
								cout<<tipoDeCuentas[i].codigo<<"\n\n";
							}
				funcionLimpiar();
				break;
			}
			case 2:{
				cout<<"----------------CREACION DE PERSONAS------------------\n\n";
				cout<<"Vamos a crear personas: \n\n";
				for(int i=cantidadActualPersonas; i<cantidadMaximaPersonas; i++){
				cout<<"DATOS PERSONA #"<<i+1<<": \n";
				cout<<"Ingrese la cedula: ";
				cin>>personas[i].cedula;
				cout<<"Ingrese solo el nombre de la persona: ";
				cin>>personas[i].nombre;
				cout<<"Ingrese solo el apellido de la persona: ";
				cin>>personas[i].apellido;
				cout<<"Ingrese el sexo de la persona, femenino(F) masculino(M): ";
				cin>>personas[i].sexo;
				cout<<"Ingrese la edad: ";
				cin>>personas[i].edad;
				cout<<"Ingrese el correo electronico: ";
				cin>>personas[i].correo;
				cout<<"Ingrese el telefono: ";
				cin>>personas[i].telefono;
				cantidadActualPersonas++;
				cout<<"\nDesea detener la creacion de personas? \n";
				cout<<"	  1) Si\n";
				cout<<"	  2) No\n";
				cout<<"	Ingrese su opcion: ";
				cin>>opcion2;
					if(opcion2==1){
						break;
					}
				cout<<"\n\n";
				}
				funcionLimpiar();
				break;
			}
			case 3:{
				cout<<"----------------CREACION DE CUENTAS------------------\n\n";
				cout<<"Recuerde que el sistema tiene un limite de 1000 cuentas\n";
				cout<<"Los valores de numero de cuenta son asignados automaticamente: \n\n";
				funcionLimpiar();
				
				do{
					cout<<"----------------CREACION DE CUENTAS------------------\n\n";
					cout<<"   Que desea hacer: \n";
					cout<<"	  1) Crear Cuenta\n";
					cout<<"	  2) Salir\n";
					cout<<"	  Ingrese su opcion: ";
					cin>>opcion3;
					funcionLimpiar();
					
					if(opcion3<1 or opcion3>2){
						cout<<"----------------CREACION DE CUENTAS------------------\n\n";
						cout<<"\n\n\nOpcion no valida, ingrese un numero valido\n\n\n";
						funcionLimpiar();
					}else if(opcion3==1){
						cantidadCuentasCreadas++;
						cuentas[cantidadCuentasCreadas-1].numeroCuenta=444480000+cantidadCuentasCreadas-1;
						cuentas[cantidadCuentasCreadas-1].saldo=0;
						cuentas[cantidadCuentasCreadas-1].estado="Activo";
						cout<<"----------------CREACION DE CUENTAS------------------\n\n";
						cout<<"DATOS CUENTA N# "<<cuentas[cantidadCuentasCreadas-1].numeroCuenta<<": \n";
						cout<<"Numero de cuenta: ";
						cout<<cuentas[cantidadCuentasCreadas-1].numeroCuenta<<endl;
						cout<<"Saldo inicial: ";
						cout<<cuentas[cantidadCuentasCreadas-1].saldo<<endl;
						cout<<"Estado inicial de cuenta: ";
						cout<<cuentas[cantidadCuentasCreadas-1].estado<<endl;
						cout<<"Posibles tipos de cuentas que se le asignara a la cuenta con N# "<<cuentas[cantidadCuentasCreadas-1].numeroCuenta<<endl;
						cout<<"	  1) "<<tipoDeCuentas[0].nombre<<" con codigo: "<<tipoDeCuentas[0].codigo<<endl;
						cout<<"	  2) "<<tipoDeCuentas[1].nombre<<" con codigo: "<<tipoDeCuentas[1].codigo<<endl;
						cout<<"	  3) "<<tipoDeCuentas[2].nombre<<" con codigo: "<<tipoDeCuentas[2].codigo<<endl;	
						cout<<"	  4) "<<tipoDeCuentas[3].nombre<<" con codigo: "<<tipoDeCuentas[3].codigo<<endl;
						cout<<"	  5) "<<tipoDeCuentas[4].nombre<<" con codigo: "<<tipoDeCuentas[4].codigo<<endl;	
						cout<<"   Tipo de cuenta: ";cin>>cuentas[cantidadCuentasCreadas-1].codigo;cout<<"\n\n";
						
						funcionLimpiar();
					}
				}while(opcion3!=2);
				
				
				break;
			}
			case 4:{
						
				do{
					cout<<"----------------PRODUCTOS------------------\n\n";
					cout<<"	  1) Inscribir todas las cuentas como productos\n";
					cout<<"	  2) Inscribir una cuenta como producto\n";
					cout<<"	  3) Salir\n\n";
					cout<<"	Ingrese su opcion: ";
					cin>>opcion4;
					funcionLimpiar();
					
					switch(opcion4){
						case 1:{
							cout<<"----------------INSCRIPCION GENERAL DE CUENTAS------------------\n\n";
							for(int i=0;i<cantidadCuentasCreadas;i++){
								productos[i].codigo=cuentas[i].numeroCuenta;
								cout<<"Ingrese la cedula del propietario de la cuenta con el numero de cuenta: "<<cuentas[i].numeroCuenta<<": ";
								cin>>productos[i].cedula;cout<<endl;
							}
							cout<<"\n----------------INSCRIPCION GENERAL DE CUENTAS------------------\n\n";
							funcionLimpiar();
							break;}
						case 2:{ 
						cout<<"----------------INSCRIPCION ESPECIFICA DE CUENTAS------------------\n\n";
							cout<<"\nIngrese el numero de la cuenta que se va a inscribir: ";
							cin>>opcion4_2;
							for(int i=0; i<cantidadCuentasCreadas; i++){
								if(opcion4_2==cuentas[i].numeroCuenta){
									productos[i].codigo=cuentas[i].numeroCuenta;
									cout<<"Ingrese la cedula del propietario de la cuenta con el numero de cuenta: "<<cuentas[i].numeroCuenta<<": ";
									cin>>productos[i].cedula;cout<<endl;
								}
							}
							cout<<"\n----------------INSCRIPCION ESPECIFICA DE CUENTAS------------------\n\n";
							funcionLimpiar();
							break;}
						case 3:{
							
							break;
						}
						default:{
							cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
							break;
						}			
					}
				
				}while(opcion4!=3);
				break;
			}
			case 5:{
				do{
				cout<<"----------------TRANSACCIONES------------------\n\n";
				cout<<"	  1) Consignar\n";
				cout<<"	  2) Transferir\n";
				cout<<"	  3) Retirar\n";
				cout<<"	  4) Salir\n";
				cout<<"	Ingrese su opcion: ";
				cin>>opcion5;
				funcionLimpiar();
				switch(opcion5){
					case 1:{
						cout<<"----------------TRANSACCIONES------------------\n\n";
						cout<<"Ingresa el numero de la cuenta de la transaccion: ";cin>>aux1;
						for(int i=0;i<cantidadCuentasCreadas;i++){
							if(aux1==cuentas[i].numeroCuenta){
								cout<<"Cuanto desea consignar: ";cin>>aux2;
								cuentas[i].saldo=cuentas[i].saldo+aux2;
								cout<<"Su nuevo saldo es: "<<cuentas[i].saldo;
							}							 
						}
						funcionLimpiar();
						break;
					}
					case 2:{
						
						do{
							cout<<"----------------TRANSACCIONES------------------\n\n";
							cout<<"Ingresa el numero de la cuenta de la transaccion: ";cin>>aux1;
							cout<<"Ingresa el numero su cedula: ";cin>>aux3;
							for(int i=0;i<cantidadCuentasCreadas;i++){
								if(aux1==cuentas[i].numeroCuenta){
									for(int j=0;j<cantidadCuentasCreadas;j++){
										if(cuentas[i].numeroCuenta==productos[j].codigo){
											if(aux3==productos[j].cedula){
												cout<<"Cuanto desea transferir: ";cin>>aux2;
												if(cuentas[i].saldo-aux2<0){
													cout<<"No tiene saldo suficiente\n";
												}else{
													cout<<"Numero de cuenta a la que se tranferira el dinero: ";cin>>aux1;
													for(int k=0;k<cantidadCuentasCreadas;k++){
														if(aux1==cuentas[k].numeroCuenta){
															cuentas[i].saldo=cuentas[i].saldo-aux2;
															cuentas[k].saldo=cuentas[k].saldo+aux2;
															cout<<"Su nuevo saldo es: "<<cuentas[i].saldo<<endl;
															cout<<"El saldo enviado fue de: "<<aux2<<endl;
														}
													}
												}	
											}else{
												cout<<"Su cedula no corresponde a la de ese producto\n";
											}
										}
									}
								}							 
							}
						}while(aux4==0);
						aux4=0;
						funcionLimpiar();
						break;
					}
					case 3:{
							do{
							cout<<"----------------TRANSACCIONES------------------\n\n";
							cout<<"Ingresa el numero de la cuenta de la transaccion: ";cin>>aux1;
							cout<<"Ingresa el numero su cedula: ";cin>>aux3;
							for(int i=0;i<cantidadCuentasCreadas;i++){
								if(aux1==cuentas[i].numeroCuenta){
									for(int j=0;j<cantidadCuentasCreadas;j++){
										if(cuentas[i].numeroCuenta==productos[j].codigo){
											if(aux3==productos[j].cedula){
												cout<<"Cuanto desea retirar: ";cin>>aux2;
												if(cuentas[i].saldo-aux2<0){
													cout<<"No tiene saldo suficiente\n";
												}else{
													cuentas[i].saldo=cuentas[i].saldo-aux2;
													cout<<"Su nuevo saldo es: "<<cuentas[i].saldo<<endl;
													aux4=1;
												}	
											}else{
												cout<<"Su cedula no corresponde a la de ese producto\n";
											}
										}
									}
								}							 
							}
						}while(aux4==0);
						aux4=0;
						funcionLimpiar();
						break;
					}
					case 4:{
						
						break;
					}
					default:{
						cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
						funcionLimpiar();
						break;
					}
				}
				
				}while(opcion5!=4);
		
				break;
			}
			case 6:{
				
				do{
					cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
					cout<<"Dentro de este menu usted puede escoger un dato\npara actualizar de un usuario y para empezar\ny para empezar debera entregar su cedula para confirmar que sea usted\n\n";
					
					cout<<"	Ingrese su cedula: ";cin>>aux5;
					for(int i=0;i<cantidadActualPersonas;i++){
						if(aux5==personas[i].cedula){
							
							cout<<"\nConfirme si su nombre es:  "<<personas[i].nombre<<" "<<personas[i].apellido<<"\n";
							cout<<"	  1) Si\n";
							cout<<"	  2) No\n";
							cout<<"	Ingrese su opcion: ";
							cin>>opcion6;
							
							if(opcion6==1){
								aux6=i;
							}
						}
					}
					if(aux6==-1){
						cout<<"	Su cedula no se ha encontrado";
						cout<<"	Desea buscar de vuelta? ";
						cout<<"	1) No";
						cout<<"	2) Si";
						cin>>opcion6;
						funcionLimpiar();
					}
					funcionLimpiar();
				}while(opcion6!=1);	
					
				do{
					cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
					cout<<"Ya sabemos su cedula, ahora vamos a escoger que dato desea cambiar\nIngrese la opcion que desee cambiar de este menu\nademas este menu se repetira hasta que seleccione la opcion de salir\n\n";
					int cedula;
					string nombre;
					string apellido;
					string sexo;
					string edad;
					string correo;
					string telefono;
					cout<<"	  1) Cedula\n";
					cout<<"	  2) Nombre\n";
					cout<<"	  3) Apellido\n";
					cout<<"	  4) Sexo\n";
					cout<<"	  5) Edad\n";
					cout<<"	  6) Correo\n";
					cout<<"	  7) Telefono\n";
					cout<<"	  8) Salir\n\n";
					cout<<"	Ingrese su opcion: ";
					cin>>opcion6;
					funcionLimpiar();
					
					switch(opcion6){
						case 1:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese la nueva cedula nueva: ";cin>>aux7;
							for(int i=0; i<cantidadCuentasCreadas;i++){
								if(aux7==productos[i].cedula){
									personas[aux6].cedula=aux7;
									productos[i].cedula=personas[aux6].cedula;
								}
							}
							break;
						}
						case 2:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese el nombre nuevo: ";cin>>personas[aux6].nombre;
							break;
						}
						case 3:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese el apellido nuevo: ";cin>>personas[aux6].apellido;
							break;
						}
						case 4:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese el sexo nuevo: ";cin>>personas[aux6].sexo;
							break;
						}
						case 5:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese la edad nueva: ";cin>>personas[aux6].edad;
							break;
						}
						case 6:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese el correo nuevo: ";cin>>personas[aux6].correo;
							break;
						}
						case 7:{
							cout<<"----------------ACTUALIZACION DE DATOS PERSONAS------------------\n\n";
							cout<<"Ingrese el telefono nuevo: ";cin>>personas[aux6].nombre;
							break;
						}
						case 8:{
							break;
						}
						default:{
							cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
							break;
						}			
					}
					funcionLimpiar();
				}while(opcion6!=8);
				
				break;
			}
			case 7:{
				
				break;
			}
			default:{
					cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
				break;
			}	
		}
	}while(opcion!=7);
}


