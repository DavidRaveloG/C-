#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "lib_lista.h"

using namespace std;
/*

Integrantes:

	- Julian Alejandro Sarmiento Linares 	- 20181020042
	- Juan Camilo Ramírez Rátiva 			- 20181020089
	- David Fernando Ravelo Garavito 		- 20191020061 

*/

struct tarjeta{
    int Tarjeta_dia, Tarjeta_mes, Tarjeta_a;
    string color_Tarjeta, motivo_Tarjeta;
};

struct jugador{
    string nombre_Jugador, posisicion_Jugador;
    int edad;
    lista<tarjeta> Tarjeta;
};

struct equipo {
    string nombre_Equipo, nombre_Entrenador, region;
    lista<jugador> Jugador;
};
string generar_Motivo(){
    string motivo;
    int N = rand()%(2+1);
    switch (N){
    	case 0: 
			motivo = "Violacion_de_leyes_del_juego";
			break;
		case 1:
			motivo = "Insultos";
			break;
		case 2:
			motivo = "No_respeta_distancia";
			break;
		default:
			return 0;
			break;	
	}
    return motivo;
}
string generar_Color(){
    string color;
    int N = rand()%(1+1);
      switch (N){
    	case 0: 
			color = "Amarilla";
			break;
		case 1:
			color = "Roja";
			break;	
	}
    return color;
}

string generar_Posicion_J(){
    string posicion;
    int N = rand()%(4+1);
      switch (N){
    	case 0: 
			posicion = "Portero";
			break;
		case 1:
			posicion = "MedioCampista";
			break;
		case 2:
			 posicion = "Defensa";
			 break;
		case 3:
			posicion = "Delantero";
			break;
		case 4: 
			posicion = "Suplente";
			break;	
	}
    return posicion;
}
int main() {
	int N_Jugadores,N_Tarjetas,x,x1,x2,i,j,k;
	string N,N1,N2;
    srand(time(NULL)); 
    lista<equipo> Equipo_L; 
    //creacion
    for(i=0; i<5; i++){
        equipo Dato_Equipo;
        N= ""+(i+1);
        Dato_Equipo.nombre_Equipo="Equipo nº"+N;
        Dato_Equipo.nombre_Entrenador="Entrenador nº"+N;
        Dato_Equipo.region="Region nº"+N;
        N_Jugadores = 11+ rand()%(14+1-11); 
        j=0;
        for(j=0; j<N_Jugadores; j++){
            jugador Dato_Jugador; 
            N1=""+(j+1);
            Dato_Jugador.nombre_Jugador="Jugador nº"+N1+" Equipo nº"+N;
            Dato_Jugador.posisicion_Jugador=generar_Posicion_J();
            Dato_Jugador.edad=18+rand()%(45+1-18);
            N_Tarjetas = 1+ rand()%(2+1-1); 
            for(k=0; k<N_Tarjetas; k++){
                tarjeta Dato_Tarjeta;
                Dato_Tarjeta.color_Tarjeta=generar_Color();
                Dato_Tarjeta.motivo_Tarjeta=generar_Motivo();
                Dato_Tarjeta.Tarjeta_dia=1+rand()%(31+1-1);
                Dato_Tarjeta.Tarjeta_mes=1+rand()%(12+1-1);
                Dato_Tarjeta.Tarjeta_a=1980+rand()%(2021+1-1980);
                Dato_Jugador.Tarjeta.insertar(Dato_Tarjeta);
            }
            Dato_Equipo.Jugador.insertar(Dato_Jugador);
        }
        Equipo_L.insertar(Dato_Equipo);
    }
    cout<<"H";
    //Imprimir
    for(i=0; i<Equipo_L.tamano_lista(); i++){
    	x=(i+1);
        equipo Dato_E = Equipo_L.obtenerDato(x);
        cout<<"--Nombre_del_equipo: "<<Dato_E.nombre_Equipo<<"--"<<endl;
        cout<<"-Entrenador_del_equipo: "<<Dato_E.nombre_Entrenador<<endl;
        cout<<"-Region_del_equipo: "<<Dato_E.region<<endl;
        for(j=0; j<Dato_E.Jugador.tamano_lista(); j++){
        	x1=(j+1);
            jugador Dato_J = Dato_E.Jugador.obtenerDato(x1);
            cout<<"Nombre_Jugador: "<<Dato_J.nombre_Jugador<<endl;
            cout<<"Pos_Jugador: "<<Dato_J.posisicion_Jugador<<endl;
            cout<<"Edad_Jugador: "<<Dato_J.edad<<endl;
            for(k=0; k<Dato_J.Tarjeta.tamano_lista(); k++){
            	x2=(k+1);
                tarjeta Dato_T = Dato_J.Tarjeta.obtenerDato(x2);
                cout<<"Tarjeta_Color: "<<Dato_T.color_Tarjeta<<endl;
                cout<<"Tarjeta_Dia: "<<Dato_T.Tarjeta_dia<<endl;
                cout<<"Tarjeta_Mes: "<<Dato_T.Tarjeta_mes<<endl;
                cout<<"Tarjeta_Anio: "<<Dato_T.Tarjeta_a<<endl;
                cout<<"Motivo_de_tarjeta: "<<Dato_T.motivo_Tarjeta<<endl;
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}
