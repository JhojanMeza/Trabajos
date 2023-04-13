#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int vida, arma, daño, hacha, espada, arco, des1, des1_1, situ2, situ3, situ4, situ5, situ6, bestia, num, num2, num3;
  char nombre[20];
  vida = 250;
  bestia = 150;
  printf("Ingrese el nombre de su personaje\n");
  scanf("%s", &nombre);
  printf("Su salud inicial es de %i pero puede disminuir dependiendo de sus acciones\n", vida);
  printf("Escoge tu arma\n1.Hacha\n2.Espada\n3.Arco\n");
  scanf("%i", &arma);
  switch (arma) {
    case 1:
      printf("Has seleccionado un hacha, tiene un daño de 100 pero su velocidad no es tan alta\n");
      hacha = 100;
      break;
    case 2:
      printf("Has seleccionado una espada, tiene un daño de 70 y su velocidad es alta\n");
      espada = 70;
      break;
    case 3:
      printf("Has seleccionado un arco, tiene un daño de 80 y te permite atacar a distancia\n");
      arco = 80;
      break;
  }
  printf("%s, has vivido en un pueblo toda tu vida, pero te has aburrido de la vida allí, así que un día decides irte\nElige entre 1. irte o 2. quedarte\n", nombre);
  scanf("%i", &des1);
  switch (des1) {
    case 1:
      printf("Has regresado al pueblo\n");
      break;
    case 2:
      printf("Decides salir de todas formas\n");
      printf("Decides caminar un rato y comienzas a escuchar un ruido que constantemente va incrementando, parece ser el monstruo descrito\nEra una especie de troll monstruoso y te toca pelear, sacas tu arma\n");
      break;
  }
  printf("Luchas contra la bestia y le das un golpe\n");
  if (arma == 1) {
    daño = bestia - hacha;
    printf("Has hecho %i de daño y le quedan %i de vida al monstruo\n", hacha, daño);
  }
  if (arma == 2) {
    daño = bestia - espada;
    printf("Has hecho %i de daño y le quedan %i de vida al monstruo\n", espada, daño);
  }
  if (arma == 3) {
    daño = bestia - arco;
    printf("Has hecho %i de daño y le quedan %i de vida al monstruo\n", arco, daño);
  }
  printf("La bestia contraataca y tú intentas huir\n");
  srand(time(0));
  num = rand() % 3 + 1;
  if (num == 1) {
    vida = vida - 100;
    printf("Recibes daño y te queda %i de vida\n", vida);
  } else {
    if (num == 2) {
      printf("Evitas el ataque y mantienes tu vida en %i\n", vida);
    } else {
      vida = vida - 175;
      printf("Recibes un ataque devastador y te queda %i de vida\n", vida);
}
}
printf("Decides contraatacar para intentar derrotar a la bestia\n");
printf("Elige entre 1. atacar con tu arma o 2. intentar huir\n");
scanf("%i", &des1_1);
switch (des1_1) {
case 1:
printf("Decides atacar con tu arma\n");
printf("La bestia contraataca y te golpea, recibes daño\n");
if (arma == 1) {
vida = vida - 50;
printf("Te queda %i de vida\n", vida);
}
if (arma == 2) {
vida = vida - 30;
printf("Te queda %i de vida\n", vida);
}
if (arma == 3) {
vida = vida - 40;
printf("Te queda %i de vida\n", vida);
}
printf("Continúas atacando a la bestia\n");
if (arma == 1) {
daño = daño - hacha;
printf("Has hecho %i de daño y le quedan %i de vida al monstruo\n", hacha, daño);
}
if (arma == 2) {
daño = daño - espada;
printf("Has hecho %i de daño y le quedan %i de vida al monstruo\n", espada, daño);
}
if (arma == 3) {
daño = daño - arco;
printf("Has hecho %i de daño y le quedan %i de vida al monstruo\n", arco, daño);
}
if (daño <= 0) {
printf("Has derrotado a la bestia y sobrevivido\n");
} else {
printf("La bestia contraataca nuevamente y te golpea, recibes daño\n");
if (arma == 1) {
vida = vida - 70;
printf("Te queda %i de vida\n", vida);
}
if (arma == 2) {
vida = vida - 50;
printf("Te queda %i de vida\n", vida);
}
if (arma == 3) {
vida = vida - 60;
printf("Te queda %i de vida\n", vida);
}
printf("Decides huir para intentar salvar tu vida\n");
printf("Elige entre 1. correr hacia el pueblo o 2. esconderte en el bosque\n");
scanf("%i", &situ2);
switch (situ2) {
case 1:
printf("Corres hacia el pueblo y llegas a salvo, pero herido\n");
printf("Has sobrevivido, pero tu aventura ha terminado\n");
break;
case 2:
printf("Te escondes en el bosque, pero la bestia te sigue persiguiendo\n");
printf("Encuentras un río y decides cruzarlo para intentar escapar\n");
printf("Elige entre 1. cruzar el río a nado o 2. buscar un puente\n");
scanf("%i", &situ3);
switch (situ3) {
case 1:
printf("Decides cruzar el río a nado, pero la corriente es fuerte y te arrastra\n");
printf("Luchas desesperadamente contra la corriente, pero finalmente eres arrastrado y te ahogas\n");
printf("Has perdido la vida, tu aventura ha llegado a su fin\n");
break;
case 2:
printf("Decides buscar un puente para cruzar el río\n");
printf("Encuentras un puente cercano y lo cruzas exitosamente\n");
printf("Logras escapar de la bestia y llegas a salvo al otro lado del río\n");
printf("Has sobrevivido a la bestia y tu aventura continúa\n");
break;
default:
printf("Opción inválida, tu aventura ha llegado a su fin\n");
break;
}
break;
default:
printf("Opción inválida, tu aventura ha llegado a su fin\n");
break;
}
}
break;
case 2:
printf("Decides intentar huir\n");
printf("La bestia te persigue implacablemente\n");
printf("Encuentras un camino estrecho que lleva a una cueva\n");
printf("Elige entre 1. entrar a la cueva o 2. seguir corriendo por el camino\n");
scanf("%i", &situ4);
switch (situ4) {
case 1:
printf("Decides entrar a la cueva\n");
printf("Exploras la cueva y encuentras una salida secreta en la parte trasera\n");
printf("Sales de la cueva y logras escapar de la bestia\n");
printf("Has sobrevivido y tu aventura continúa\n");
break;
case 2:
printf("Decides seguir corriendo por el camino\n");
printf("La bestia te alcanza y te golpea, recibes daño\n");
if (arma == 1) {
vida = vida - 70;
printf("Te queda %i de vida\n", vida);
}
if (arma == 2) {
vida = vida - 50;
printf("Te queda %i de vida\n", vida);
}
if (arma == 3) {
vida = vida - 60;
printf("Te queda %i de vida\n", vida);
}
printf("Decides trepar a un árbol para intentar escapar\n");
printf("Elige entre 1. trepar al árbol más cercano o 2. buscar otro árbol más alto\n");
scanf("%i", &situ5);
switch (situ5) {
case 1:
printf("Decides trepar al árbol más cercano\n");
printf("Logras trepar al árbol, pero la bestia te sigue persiguiendo\n");
printf("La bestia intenta trepar el árbol, pero falla y cae al suelo\n");
printf("Aprovechas la oportunidad para escapar y llegas a salvo a un claro del bosque\n");
printf("Has sobrevivido a la bestia y tu aventura continúa\n");
break;
case 2:
printf("Decides buscar otro árbol más alto\n");
printf("Encuentras un árbol más alto y comienzas a treparlo\n");
printf("Sin embargo, la bestia es demasiado rápida y te alcanza antes de que puedas llegar a la cima del árbol\n");
printf("La bestia te ataca y recibes un fuerte golpe, tu vida disminuye\n");
if (arma == 1) {
vida = vida - 70;
printf("Te queda %i de vida\n", vida);
}
if (arma == 2) {
vida = vida - 50;
printf("Te queda %i de vida\n", vida);
}
if (arma == 3) {
vida = vida - 60;
printf("Te queda %i de vida\n", vida);
}
printf("Decides luchar contra la bestia con todas tus fuerzas\n");
printf("Elige entre 1. usar tu arma 2. intentar esquivar sus ataques\n");
scanf("%i", &situ6);
switch (situ6) {
case 1:
printf("Decides usar tu arma para enfrentarte a la bestia\n");
printf("Luchas valientemente contra la bestia, pero tus ataques apenas le hacen daño\n");
printf("La bestia te ataca de nuevo y recibes un golpe mortal\n");
printf("Has perdido la vida, tu aventura ha llegado a su fin\n");
break;
case 2:
printf("Decides intentar esquivar los ataques de la bestia\n");
printf("Te mueves rápidamente, esquivando algunos de los ataques de la bestia\n");
printf("Sin embargo, la bestia es implacable y te alcanza con un poderoso golpe\n");
printf("Recibes un golpe mortal y pierdes la vida\n");
printf("Tu aventura ha llegado a su fin\n");
break;
default:
printf("Opción inválida, tu aventura ha llegado a su fin\n");
break;
}
break;
default:
printf("Opción inválida, tu aventura ha llegado a su fin\n");
break;
}
break;
default:
printf("Opción inválida, tu aventura ha llegado a su fin\n");
break;
}
break;
default:
printf("Opción inválida, tu aventura ha llegado a su fin\n");
break;
}
printf("Gracias por jugar. ¡Hasta la próxima aventura!\n");

return 0;
}