/*
		Crear un menu: 
		1. Crear Tipo de cuenta
		2. Crear Persona
		3. Crear Cuenta
		4. Crear Productos
*/
#include<iostream>
using namespace std;
int main(){
	struct datosBasicos{
		int cedula=0;
		string nombre="NoData";
		string apellido="NoData";
		string sexo="NoData";
		int edad=0;
		string correo="NoData";
		string telefono="NoData";
	};
	
	/*
	struct direccion{
		string calle;
		string carrera;
		string numero;
		string diagonal;
		string trasversal;
		string referencia;
	};
	struct fechaNacimiento{
		int anio;
		int mes;
		int dia;
	};
	struct estado{
		int codigo;
		string nombre;
	};
	*/
	
	struct datosCuenta{
		int codigo;
		//No repeticion
		int numeroCuenta;
		//Inicial en 0
		float saldo;
		//Inicial en activo
		string estado;
	};
/*
		101 Ahorro
		102 Corriente
		103 CDT Certificado Deposito A Termino
		104 Nequi
		105 Credito
*/
	struct tipoCuenta{
		int cod;
		string nombre="noData";
	};
	struct producto{
		int cedula;
		int codigo;
	};
	int opcion;
	tipoCuenta tipoDeCuentas[5];
	datosBasicos personas[5];
	datosCuenta cuentas[1000];
	producto productos[1000];
	for(int i=0; i<1000;i++){
		cuentas[i].numeroCuenta=10000+i;
		cuentas[i].saldo=0;
		cuentas[i].estado="Activo";
	}
	int cantidadCuentasCreadas=0;
	do{
		cout<<"----------------MENU------------------\n\n";
		cout<<"	  1) Crear o ver tipos de cuentas\n";
		cout<<"	  2) Crear, editar o ver personas\n";
		cout<<"	  3) Crear o ver datos de cuentas\n";
		cout<<"	  4) Crear, editar o ver productos\n";
		cout<<"	  5) Transacciones de cuentas\n";
		cout<<"	  6) Salir\n\n";
		cout<<"	Ingrese su opcion: ";
		cin>>opcion;
		cout<<"\n----------------MENU------------------\n\n";
		switch(opcion){
			case 1:{
				
				int opcion1;
				
				
				do{
					cout<<"----------------TTIPOS DE CUENTA------------------\n\n";
					cout<<"	  1) Crear codigos de tipos de cuentas\n";
					cout<<"	  2) Ver lista de tipos de cuentas\n";
					cout<<"	  3) Salir\n\n";
					cout<<"	Ingrese su opcion: ";
					cin>>opcion1;
				tipoDeCuentas[0].nombre="Ahorro";
				tipoDeCuentas[1].nombre="Corriente";
				tipoDeCuentas[2].nombre="CDT";
				tipoDeCuentas[3].nombre="Nequi";
				tipoDeCuentas[4].nombre="Credito";
				
				
					switch(opcion1){
						case 1:{
							for(int i=0;i<5;i++){
								cout<<"Ingrese el codigo del tipo de cuenta con nombre: "<<tipoDeCuentas[i].nombre<<": ";
								cin>>tipoDeCuentas[i].cod;cout<<endl;
							}
							break;}
						case 2:{
							for(int i=0;i<5;i++){
								cout<<"Nombre del tipo de cuenta: ";
								cout<<tipoDeCuentas[i].nombre<<endl;
								cout<<"Codigo del tipo de cuenta: ";
								cout<<tipoDeCuentas[i].cod;cout<<endl<<endl;
							}
							break;}
					}
					cout<<"\n----------------TTIPOS DE CUENTA------------------\n\n";
					if(opcion1<1 or opcion1>3){
						cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
					}
				}while(opcion1!=3);
				
				
				break;
				}
				
			case 2:{
				int opcion2;
				do{
					
					cout<<"----------------MENU DE PERSONAS------------------\n\n";				
					cout<<"    Que desea hacer: \n";
					cout<<"	  1) Crear personas\n";
					cout<<"	  2) Editar personas\n";
					cout<<"	  3) Ver los datos de las personas\n";
					cout<<"	  4) Salir\n\n";										
					cout<<"	Ingrese su opcion: ";
					cin>>opcion2;				
					cout<<"\n----------------MENU DE PERSONAS------------------\n\n";
					
					switch(opcion2){
						
						case 1:{
							cout<<"----------------CREACION DE PERSONAS------------------\n\n";
							cout<<"Vamos a crear 5 personas: \n\n";
							for(int i=0; i<5; i++){
								cout<<"DATOS PERSONA "<<i+1<<": \n";
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
								cout<<endl;
							}
							cout<<"\n----------------CREACION DE PERSONAS------------------\n\n";
							break;}
							
						case 2:{
							int opcion2_2;
							cout<<"----------------EDICION DE PERSONAS------------------\n\n";
							do{
								cout<<"Si desea salir ingrese 6\n";
								cout<<"Sino, ingrese el numero de la persona que desea editar: ";
								cin>>opcion2_2;cout<<endl;
								if(opcion2_2==6){
									cout<<"----------------EDICION DE PERSONAS------------------\n\n";
									break;	
								}else if(opcion2_2<1 or opcion2_2>6){
									cout<<"Opcion no valida, ingrese un numero valido\n\n";
								}
								else{
									cout<<"DATOS PERSONA "<<opcion2_2<<": \n";
									cout<<"Ingrese la cedula: ";
										cin>>personas[opcion2_2-1].cedula;
									cout<<"Ingrese solo el nombre de la persona: ";
										cin>>personas[opcion2_2-1].nombre;
									cout<<"Ingrese solo el apellido de la persona: ";
										cin>>personas[opcion2_2-1].apellido;
									cout<<"Ingrese el sexo de la persona, femenino(F) masculino(M): ";
										cin>>personas[opcion2_2-1].sexo;
									cout<<"Ingrese la edad: ";
										cin>>personas[opcion2_2-1].edad;
									cout<<"Ingrese el correo electronico: ";
										cin>>personas[opcion2_2-1].correo;
									cout<<"Ingrese el telefono: ";
										cin>>personas[opcion2_2-1].telefono;cout<<endl;
									}
									cout<<"----------------EDICION DE PERSONAS------------------\n\n";
							}while(opcion2_2!=6);
							break;}						
						case 3:{
							cout<<"----------------DATOS DE PERSONAS------------------\n\n";
							cout<<"Datos de las 5 personas: \n\n";
							for(int i=0; i<5; i++){
								cout<<"DATOS PERSONA "<<i+1<<": \n";
								cout<<"Cedula: ";
								cout<<personas[i].cedula<<endl;
								cout<<"Nombre de la persona: ";
								cout<<personas[i].nombre<<endl;
								cout<<"Apellido de la persona: ";
								cout<<personas[i].apellido<<endl;
								cout<<"Sexo de la persona, femenino(F) masculino(M): ";
								cout<<personas[i].sexo<<endl;
								cout<<"Edad: ";
								cout<<personas[i].edad<<endl;
								cout<<"Correo electronico: ";
								cout<<personas[i].correo<<endl;
								cout<<"Telefono: ";
								cout<<personas[i].telefono<<endl;
								cout<<endl;
							}
							cout<<"\n----------------DATOS DE PERSONAS------------------\n\n";
							break;
						}
					}
					
					if(opcion2<1 or opcion2>4){
						cout<<"\n\n\nOpcion no valida, ingrese un numero valido\n\n\n";
					}
				}while(opcion2!=4);	
				break;
				}
				
			case 3:{
				
				int opcion3;
				do{
					
					cout<<"----------------MENU DE CUENTAS------------------\n\n";				
					cout<<"    Que desea hacer: \n";
					cout<<"	  1) Crear Cuentas\n";
					cout<<"	  2) Ver los datos de una cuenta\n";
					cout<<"	  3) Ver los datos todas las cuentas\n";
					cout<<"	  4) Salir\n\n";										
					cout<<"	Ingrese su opcion: ";
					cin>>opcion3;				
					cout<<"\n----------------MENU DE CUENTAS------------------\n\n";
					 
					switch(opcion3){
						
						case 1:{
							int opcion3_1;
							cout<<"----------------CREACION DE CUENTAS------------------\n\n";
							cout<<"Recuerde que el sistema tiene un limite de 1000 cuentas\n";
							cout<<"Los valores de numero de cuenta son asignados automaticamente: \n\n";
							
							do{
								cout<<"    Que desea hacer: \n";
								cout<<"	  1) Crear Cuenta\n";
								cout<<"	  2) Salir\n";
								cout<<"	  Ingrese su opcion: ";
								cin>>opcion3_1;
								cout<<endl<<endl;
								if(opcion3<1 or opcion3>2){
									cout<<"\n\n\nOpcion no valida, ingrese un numero valido\n\n\n";
								}else if(opcion3_1==1){
									cantidadCuentasCreadas++;
								cout<<"DATOS CUENTA N# "<<cuentas[cantidadCuentasCreadas-1].numeroCuenta<<": \n";
								cout<<"Numero de cuenta: ";
								cout<<cuentas[cantidadCuentasCreadas-1].numeroCuenta<<endl;
								cout<<"Saldo inicial: ";
								cout<<cuentas[cantidadCuentasCreadas-1].saldo<<endl;
								cout<<"Estado inicial de cuenta: ";
								cout<<cuentas[cantidadCuentasCreadas-1].estado<<endl;
								cout<<"Posibles tipos de cuentas que se le asignara a la cuenta con N# "<<cuentas[cantidadCuentasCreadas-1].numeroCuenta<<endl;
								cout<<"	  1) "<<tipoDeCuentas[0].nombre<<" con codigo: "<<tipoDeCuentas[0].cod<<endl;
								cout<<"	  2) "<<tipoDeCuentas[1].nombre<<" con codigo: "<<tipoDeCuentas[1].cod<<endl;
								cout<<"	  3) "<<tipoDeCuentas[2].nombre<<" con codigo: "<<tipoDeCuentas[2].cod<<endl;	
								cout<<"	  4) "<<tipoDeCuentas[3].nombre<<" con codigo: "<<tipoDeCuentas[3].cod<<endl;
								cout<<"	  5) "<<tipoDeCuentas[4].nombre<<" con codigo: "<<tipoDeCuentas[4].cod<<endl;	
								cout<<"   Tipo de cuenta: ";cin>>cuentas[cantidadCuentasCreadas-1].codigo;cout<<"\n\n";
								}
							}while(opcion3_1!=2);
							cout<<"\n----------------CREACION DE CUENTAS------------------\n\n";
							break;}
						
						case 2:{
							int opcion3_2;
							cout<<"----------------DATOS DE CUENTA ESPECIFICA------------------\n\n";
							cout<<"ingrese el numero de la cuenta que desea ver sus datos: ";
							cin>>opcion3_2;
							
							
							for(int i=0; i<cantidadCuentasCreadas; i++){
								if(opcion3_2==cuentas[i].numeroCuenta){
									cout<<"DATOS CUENTA N# "<<cuentas[i].numeroCuenta<<": \n";
									cout<<"Numero de cuenta: ";
									cout<<cuentas[i].numeroCuenta<<endl;
									cout<<"Saldo : ";
									cout<<cuentas[i].saldo<<endl;
									cout<<"Estado de cuenta: ";
									cout<<cuentas[i].estado<<endl;
									cout<<"Tipo de cuenta: ";
								for(int j=0;j<5;j++){
									if (cuentas[i].codigo==tipoDeCuentas[j].cod){
										cout<<tipoDeCuentas[j].nombre;
									}
								}
								cout<<"\n\n";
								}
							}
							cout<<"\n----------------DATOS DE CUENTA ESPECIFICA------------------\n\n";
							break;}
						case 3:{
							cout<<"----------------DATOS DE TODAS LAS CUENTAS------------------\n\n";
	
							for(int i=0; i<cantidadCuentasCreadas; i++){
									cout<<"DATOS CUENTA N# "<<cuentas[i].numeroCuenta<<": \n";
									cout<<"Numero de cuenta: ";
									cout<<cuentas[i].numeroCuenta<<endl;
									cout<<"Saldo : ";
									cout<<cuentas[i].saldo<<endl;
									cout<<"Estado de cuenta: ";
									cout<<cuentas[i].estado<<endl;
									cout<<"Tipo de cuenta: ";
								for(int j=0;j<5;j++){
									if (cuentas[i].codigo==tipoDeCuentas[j].cod){
										cout<<tipoDeCuentas[j].nombre;
									}
								}
								cout<<"\n\n\n";
								}
							}
							cout<<"\n----------------DATOS DE TODAS LAS CUENTAS------------------\n\n";
							break;
						}
					
					
					if(opcion3<1 or opcion3>4){
						cout<<"\n\n\nOpcion no valida, ingrese un numero valido\n\n\n";
					}
				}while(opcion3!=4);	
				
				break;
				}
		
			case 4:{
				int opcion4;		
				do{
					cout<<"----------------PRODUCTOS------------------\n\n";
					cout<<"	  1) Inscribir todas las cuentas como productos\n";
					cout<<"	  2) Inscribir una cuenta como producto\n";
					cout<<"	  3) Ver Productos\n";
					cout<<"	  4) Salir\n\n";
					cout<<"	Ingrese su opcion: ";
					cin>>opcion4;
					switch(opcion4){
						case 1:{
							cout<<"----------------INSCRIPCION GENERAL DE CUENTAS------------------\n\n";
							for(int i=0;i<cantidadCuentasCreadas;i++){
								productos[i].codigo=cuentas[i].numeroCuenta;
								cout<<"Ingrese la cedula del propietario de la cuenta con el numero de cuenta: "<<cuentas[i].numeroCuenta<<": ";
								cin>>productos[i].cedula;cout<<endl;
							}
							cout<<"\n----------------INSCRIPCION GENERAL DE CUENTAS------------------\n\n";
							break;}
						case 2:{ 
						int opcion4_2;
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
							break;}
						case 3:{
							cout<<"----------------DATOS DE TODOS LOS PRODUCTOS------------------\n\n";
	
							for(int i=0; i<cantidadCuentasCreadas; i++){
									cout<<"DATOS DEL PRODUCTO CON N# "<<cuentas[i].numeroCuenta<<": \n";
									cout<<"Numero de cuenta: ";
									cout<<productos[i].cedula<<endl;
									cout<<"Cedula de propietario: ";
									cout<<productos[i].codigo<<endl;
							}
							cout<<"\n----------------DATOS DE TODOS LOS PRODUCTOS------------------\n\n";
							break;}
							
					}
					cout<<"\n----------------PRODUCTOS------------------\n\n";
					if(opcion4<1 or opcion4>4){
						cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
					}
				}while(opcion4!=4);
				break;
				}
			
			case 5:{
				int opcion5, aux1, aux2, aux3, aux4=0;
				
				do{
				cout<<"----------------TRANSACCIONES------------------\n\n";
				cout<<"	  1) Consignar\n";
				cout<<"	  2) Retirar\n";
				cout<<"	  3) Salir\n";
				cout<<"	Ingrese su opcion: ";
				cin>>opcion5;
				switch(opcion5){
					case 1:{
						cout<<"Ingresa el numero de la cuenta de la transaccion: ";cin>>aux1;
						for(int i=0;i<cantidadCuentasCreadas;i++){
							if(aux1==cuentas[i].numeroCuenta){
								cout<<"Cuanto desea consignar: ";cin>>aux2;
								cuentas[i].saldo=cuentas[i].saldo+aux2;
								cout<<"Su nuevo saldo es: "<<cuentas[i].saldo;
							}							 
						}
						break;
					}
					case 2:{
						
						do{
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
						break;
					}
				}
				
				cout<<"\n----------------TRANSACCIONES------------------\n\n";
					if(opcion5<1 or opcion5>3){
						cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
					}
				}while(opcion5!=3);
				
				
				break;
			}

			if(opcion<1 or opcion>6){
				cout<<"\nOpcion no valida, ingrese un numero valido\n\n\n";
			}
	}
	}while(opcion!=6);
	

}
