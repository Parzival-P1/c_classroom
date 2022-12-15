#include <stdio.h>
#include <string.h>

#define MAX 10
// OPERACIONES,  ESCRITURA, LECTURA , ACTUALIZAR, ELIMINAR

typedef struct {
 char email[40];
}Email;

typedef struct  
{
   char street[50];
   int zip;

}Address;

typedef struct  
{
    int phone;
    int salary;
    char name[50];
    Address addressList[3];
    Email emailList[3];
}EmpleadoDetalles;

typedef struct  {
    // Tipo primitivos
    int id;
    EmpleadoDetalles details;
} Empleado; 

Empleado capturaEmpleado(Empleado empleadoInput) 
{
    Empleado empleado;
    empleado.id = 100;
    strcpy(empleado.details.name, "Paco");
    return empleado;
}

Empleado scanEmpleado() 
{
    Empleado empleado;
	scanf("%d", &empleado.id);
    return empleado;
}
 // Entrada,Proceso, Salida
Empleado listaEmpleados [MAX]; 
int main()
{
    // Lista Tipos abstractos,  Collecciones de datos
    
     
    for (int index = 0; index < MAX; index++)
    {
        //Empleado empleado_ = capturaEmpleado(listaEmpleados[index]);
        Empleado empleado =  scanEmpleado();
    }

    // Imprime Empleados
    for (int index = 0; index < MAX; index++) 
    {
        Empleado empleado = listaEmpleados[index];
         printf("%s", empleado.details.name); 
         printf("%d", empleado.id); 
         printf("\n"); 
    }

    return 0;
}