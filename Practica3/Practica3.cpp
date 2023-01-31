//Librerias
#include <iostream>

//Espacio de nombres
using namespace std;

//Prototipos de funciones
void llenar(int notas[][5], int carrera[], int n);
void mostrar(int notas[][5], int carrera[], int n);
void ordenar(int notas[][5], int carrera[], int n);

//Funcion principal
int main()
{
    //Declaracion de variables
    int notas[5][5], carrera[5];
    int n=5;
    //Llamado de funciones
    llenar(notas, carrera, n);
    mostrar(notas, carrera, n);
    ordenar(notas, carrera, n);
    mostrar(notas, carrera, n);
    return 0;
}

//Funcion para llenar las notas y carreras de los estudiantes
void llenar(int notas[][5], int carrera[], int n)
{
    //Declaracion de variables
    int i, j;
    //Ciclo para llenar las notas y carreras de los estudiantes
    for(i=0; i<n; i++)
    {
        cout<<"Ingrese las notas del estudiante "<<i+1<<endl;
        for(j=0; j<5; j++)
        {
            cout<<"Ingrese la nota "<<j+1<<": ";
            cin>>notas[i][j];
        }
        cout<<"Ingrese la carrera del estudiante "<<i+1<<": ";
        cin>>carrera[i];
    }
}

//Funcion para mostrar las notas y carreras de los estudiantes
void mostrar(int notas[][5], int carrera[], int n)
{
    //Declaracion de variables
    int i, j;
    //Ciclo para mostrar las notas y carreras de los estudiantes
    for(i=0; i<n; i++)
    {
        cout<<"Las notas del estudiante "<<i+1<<" son: ";
        for(j=0; j<5; j++)
        {
            cout<<notas[i][j]<<" ";
        }
        cout<<"y su carrera es: "<<carrera[i]<<endl;
    }
}

//Funcion para ordenar las notas de los estudiantes
void ordenar(int notas[][5], int carrera[], int n)
{
    //Declaracion de variables
    int i, j, aux, aux2;
    //Ciclo para ordenar las notas de los estudiantes
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(notas[j][0]<notas[j+1][0])
            {
                aux=notas[j][0];
                notas[j][0]=notas[j+1][0];
                notas[j+1][0]=aux;
                aux2=carrera[j];
                carrera[j]=carrera[j+1];
                carrera[j+1]=aux2;
            }
        }
    }
}

//Explicacion de como funcionan las matrices
//Las matrices son una coleccion de datos que se encuentran en una sola variable
//Las matrices se pueden declarar de la siguiente manera:
//int matriz[5][5];
//En este caso la matriz tiene 5 filas y 5 columnas
//Para acceder a una posicion de la matriz se hace de la siguiente manera:
//matriz[0][0];
//En este caso se accede a la posicion 0,0 de la matriz
//Para llenar una matriz se hace de la siguiente manera:
//matriz[0][0]=1;
//En este caso se llena la posicion 0,0 de la matriz con el valor 1
//Para mostrar una matriz se hace de la siguiente manera:
//cout<<matriz[0][0];
//En este caso se muestra la posicion 0,0 de la matriz
//Para ordenar una matriz se hace de la siguiente manera:
//for(i=0; i<n; i++)
//{
//    for(j=0; j<n-1; j++)
//    {
//        if(matriz[j][0]<matriz[j+1][0])
//        {
//            aux=matriz[j][0];
//            matriz[j][0]=matriz[j+1][0];
//            matriz[j+1][0]=aux;
//        }
//    }
//}
//En este caso se ordena la matriz de mayor a menor
