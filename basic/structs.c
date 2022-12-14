#include <stdio.h>
#include <string.h>

#define MAX 10
// OPERACIONES,  ESCRITURA, LECTURA , ACTUALIZAR, ELIMINAR

struct Empleado {
    // Tipo primitivos
    int id;
    int salary;
    char name[50];
}; 

int main()
{
    // Tipos abstractos
    struct Empleado empleado;
    struct Empleado empleadosList [MAX]; // Collecciones de datos
    
    for (int index = 0; index < MAX; index++)
    {
        empleadosList[index].id = index;
        empleadosList[index].salary = 100;
        strcpy(empleadosList[index].name,    "Name ");
        printf("%s", empleadosList[index].name); 
        printf("%d", empleadosList[index].id); 
        printf("\n"); 
    }
    
    return 0;
}