/*HOJA DE TRABAJO #5
EJERCICIO # 1
En una librer�a se venden 4 modelos diferentes de cuadernos, con los siguientes precios:
? Modelo#1 � Q10.00
? Modelo#2 � Q15.00
? Modelo#3 � Q18.50
? Modelo#4 � Q25.00
Por otra parte, se tiene informaci�n sobre las ventas realizadas durante los �ltimos 30 d�as, estos
movimientos se deben de guardar en un archivo de la siguiente forma:
DIA1,MOD,CANT
DIA2,MOD,CANT
.
.
.
DIA30,MODELO,CANTIDAD
DIAi = Variable que representa el d�a que se efectu� la venta i (1 - 30)
MOD= Variable que representa c�digo de Modelo que se vendi�. (1 � 4)
CANT= Variable que representa la cantidad de unidades vendidas.
El programa debe ser capaz de:
? Modificar el n�mero de unidades vendidas, solicitando al usuario el d�a y c�digo de articulo
(modificaci�n del archivo)
? Eliminaci�n de un d�a especifico de venta (modificaci�n del archivo)
? Calcular el total recaudado por modelo en los 30 d�as.
? Calcular cu�l fue el modelo que se vendi� mas en los 30 d�as 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
struct libreria
{
	int num ; //clave de ordenamiento
	string name ;
	int cantidad;
	string tipomod ;
	string bs ;
};

void bubbleSort(libreria list[], int tam);

int main( )
{
	ifstream fp;
    string Tmp;
	fp.open("libreria.txt");
	libreria libreria_array[5];

	if (fp)
	{	
   		for (int counter = 0; counter < 4; counter++)
    	{
        	fp >> libreria_array[counter].num;
        	fp >> libreria_array[counter].name;
        	fp >> libreria_array[counter].tipomod;
        	fp >> libreria_array[counter].cantidad;
        	fp >> libreria_array[counter].bs;
    	}
	}
	else
    	puts("error"); //

	bubbleSort(emp_array, 30);
                
	for (int counter = 1 ; counter < 30; counter++)
	{
   	 	cout << emp_array[counter].num << "\t";
   	 	cout << emp_array[counter].name << "\t";
   	 	cout << emp_array[counter].age << "\t";
  	  	cout << emp_array[counter].bs << endl;
	}
}

void bubbleSort(emp list[], int tam)
{
    emp temp;
    int i;
    int index;
    for (i = 1; i < tam; i++)
    {
     	cout<<"i: posicion actual antes"<<list[i].num<<endl;
	    for (index = 0; index < tam - i; index++)
            if (list[index].num > list[index + 1].num)
            {
            	cout<<"Posicion de intercambio:  "<<endl;
                temp = list[index];
                cout<<"var temp"<<temp.num<<endl;
                list[index] =  list[index + 1];
                cout<<" list[index+1]  " << list[index+1].num<<endl;
                list[index + 1] =  temp;
            }
        cout<<"i: posicion actual despues"<<list[i].num<<endl;
    }
}
//a num  nombre edad bs
/*
0 1  
1 4   
2 6
3 9
4 12
*/
