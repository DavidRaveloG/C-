#include <cstdlib>
#include <iostream>
#include <time.h>
#include "Listas.h"

using namespace std;
struct tarjetas{int color, dia, mes, anio;
                string motivo;};
           
struct jugador{string nombre, posicion;
               int edad;
               Lista <tarjetas> t;};
            
struct equipo{string nombre,entrenador, region;
              Lista <jugador> j;};


int main(int argc, char *argv[])
{int dato1, dato2, i, j,k, longitud,longitud1;

 tarjetas auxT;
 jugador auxJ;
 equipo auxE;
 Lista <equipo>E;
 
 cout<<"nombre equipo"; cin>> auxE.nombre;
 cout<<"nombre entrenador"; cin>> auxE.entrenador;
 cout<<"nombre region"; cin>> auxE.region;
 cout<<"n?mero de jugadores"; cin>> dato1;
 for(j=1; j<=dato1; j++)
      {cout<<"nombre jugador"; cin>> auxJ.nombre;
       cout<<"nombre posicion"; cin>> auxJ.posicion;
       cout<<"edad"; cin>> auxJ.edad;
       cout<<"n?mero de tarjetas"; cin>> dato2;
       for(k=1; k<=dato2; k++)
            {cout<<"color tarjeta (0 roja, 1 amarilla"; cin>> auxT.color;
             cout<<"dia"; cin>> auxT.dia;
             cout<<"mes"; cin>> auxT.mes;
             cout<<"anio"; cin>> auxT.anio;
             cout<<"motivo"; cin>> auxT.motivo;
             auxJ.t.insertar_final(auxT);
          }
       auxE.j.insertar_final(auxJ);
      }
    E.insertar_final(auxE);
   }
