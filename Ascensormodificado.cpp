//LIBRERIA
#include <stdio.h>
//DEFINIMOS VARIABLES
 int pisoActual = 0; 
    int pisoLlamado; 
    int pisoSeleccionado; 
    int opcion;

void llamarascensor(){
   printf("Ingrese el piso desde donde llama al ascensor (0-9): ");
                scanf("%d", &pisoLlamado);
                if (pisoLlamado == pisoActual) {
                    printf("El ascensor ya está en el piso %d\n", pisoActual);
                } else {
                    printf("Ascensor en movimiento...\n");
                    if (pisoLlamado < pisoActual) {
                        for (int i = pisoActual; i > pisoLlamado; i--) {
                            printf("Ascensor en piso %d\n", i);
                        }
                    } else {
                        for (int i = pisoActual; i < pisoLlamado; i++) {
                            printf("Ascensor en piso %d\n", i);
                        }
                    }
                    pisoActual = pisoLlamado;
                    printf("Ascensor llegó al piso %d\n", pisoActual);
                } 
}

void irpiso(){
 printf("Ingrese el piso al que desea ir (0-9): ");
                scanf ("%d", &pisoSeleccionado);
                if (pisoSeleccionado == pisoActual) {
                    printf("Ya se encuentra en el piso %d\n", pisoActual);
                } else {
                    printf("Ascensor en movimiento...\n");
                    if (pisoSeleccionado < pisoActual) {
                        for (int i = pisoActual; i > pisoSeleccionado; i--) {
                            printf("Ascensor en piso %d\n", i);
                        }
                    } else {
                        for (int i = pisoActual; i < pisoSeleccionado; i++) {
                            printf("Ascensor en piso %d\n", i);
                        }
                    }
                    pisoActual = pisoSeleccionado;
                    printf("Ascensor llegó al piso %d\n", pisoActual);
                }

}

void pisoactual(){
    switch (pisoActual) {
                    case 0:
                        printf("Ascensor en la planta baja\n");
                        break;
                    case 1:
                        printf("Ascensor en el primer piso\n");
                        break;
                    case 2:
                        printf("Ascensor en el segundo piso\n");
                        break;
                    case 3:
                        printf("Ascensor en el tercer piso\n");
                        break;
                    default:
                        printf("Ascensor en el piso %d\n", pisoActual);
                        break;
                }
}

void menu() {

// MENU
    do {
        printf("Menú:\n");
        printf("a. Llamar ascensor\n");
        printf("b. Seleccionar piso\n");
        printf("c. Mostrar piso actual\n");
        printf("d. Salir\n");
        printf("Seleccione una opción: ");
        scanf(" %c", &opcion);
//OBCIONES DEL MENÙ
        switch (opcion) {
            case 'a':     
            llamarascensor();
            break;
            case 'b':
            irpiso();
            break;
            case 'c':
            pisoactual();
            break;    
            case 'd':
            printf("Saliendo del programa...\n");
            break;
            default:
            printf("Opción no válida, por favor seleccione una opción válida del menú.\n");
            break;
}
} while (opcion != 'd');
}

int main(){
    menu();
}