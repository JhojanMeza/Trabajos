//JHOJAN MEZA
#include <stdio.h>
#include <string.h>

// Función para realizar el login
int login() {
    char usuarios[3][20] = {"JHOJAN", "SEBASTIAN", "ALEJO"};
    char contrasenas[3][20] = {"1234", "5678", "4321"};
    char usuario[20];
    char contrasena[20];
    int intentos = 0;

    while (intentos < 3) {
        printf("Ingrese su usuario: ");
        scanf("%s", usuario);
        printf("Ingrese su contraseña: ");
        scanf("%s", contrasena);

        int i;
        for (i = 0; i < 3; i++) {
            if (strcmp(usuario, usuarios[i]) == 0 && strcmp(contrasena, contrasenas[i]) == 0) {
                return 1;  // Credenciales correctas
            }
        }

        intentos++;
        printf("Usuario o contraseña fallidos intento #%d\n", intentos);
    }

    printf("Imposible ingresar\n");
    return 0;  // Credenciales incorrectas después de 3 intentos
}

// Función para calcular el precio por kilómetro según el tipo de ruta
float calcularPrecioRuta(char tipoRuta) {
    float precio;

    switch (tipoRuta) {
        case 'U':
            precio = 0.10;
            break;
        case 'I':
            precio = 0.15;
            break;
        case 'L':
            precio = 0.20;
            break;
        default:
            printf("Tipo de ruta inválido.\n");
            precio = 0.0;
            break;
    }

    return precio;
}

// Función para calcular el descuento según el rango de distancia
float calcularDescuento(float precio) {
    float descuento = 0.0;

    if (precio < 50.0) {
        descuento = 0.0;
    } else if (precio >= 50.0 && precio < 100.0) {
        descuento = precio * 0.05;
    } else if (precio >= 100.0 && precio < 500.0) {
        descuento = precio * 0.1;
    } else if (precio >= 500.0) {
        descuento = precio * 0.2;
    }
    return descuento;
}

// Función para realizar la operación de transporte
void operacionTransporte() {
    int i;
    char tipoRuta;
    float distancia, subtotal, descuento, precioTotal;

    for (i = 0; i < 5; i++) {
        printf("Cliente %d\n", i + 1);
        printf("Ingrese el tipo de ruta (Urbana [U], Interurbana [I], Internacional [L]): ");
        scanf(" %c", &tipoRuta);
        printf("Ingrese la distancia en kilómetros: ");
        scanf("%f", &distancia);

        float precioPorKilometro = calcularPrecioRuta(tipoRuta);
        subtotal = distancia * precioPorKilometro;
        descuento = calcularDescuento(subtotal);
        precioTotal = subtotal - descuento;

        printf("Subtotal: %.2f\n", subtotal);
        printf("Descuento: %.2f\n", descuento);
        printf("Precio Total: %.2f\n", precioTotal);
}
}

// Función para interactuar en la red social
void redSocial() {
int i;
char mensaje[100];
char categoria;
int noticias = 0, eventos = 0, preguntas = 0;
for (i = 0; i < 5; i++) {
    printf("Mensaje %d\n", i + 1);
    printf("Ingrese el contenido del mensaje: ");
    scanf(" %[^\n]", mensaje);
    printf("Ingrese la categoría del mensaje (Noticias [N], Eventos [E], Preguntas [P]): ");
    scanf(" %c", &categoria);

    switch (categoria) {
        case 'N':
            noticias++;
            break;
        case 'E':
            eventos++;
            break;
        case 'P':
            preguntas++;
            break;
        default:
            printf("Categoría inválida.\n");
            break;
    }
}

printf("Publicaciones:\n");
printf("Noticias: %d\n", noticias);
printf("Eventos: %d\n", eventos);
printf("Preguntas: %d\n", preguntas);
}

// Función para mostrar el menú y procesar la opción seleccionada
void menu() {
int opcion;
do {
    printf("\n--- MENÚ ---\n");
    printf("1. Operación de transporte\n");
    printf("2. Interactuar en la red social\n");
    printf("3. Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            operacionTransporte();
            break;
        case 2:
            redSocial();
            break;
        case 3:
            printf("Saliendo...\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }
} while (opcion != 3);
}

int main() {
printf("--- Sistema de Transporte Público ---\n");
if (login()) {
    menu();
} else {
    printf("Ingreso incorrecto. Fin del programa.\n");
}

return 0;
}