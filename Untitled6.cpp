#include <stdio.h>

int main() {
  int puntos_totales = 0;

  printf("Entre 1 y 0 contesta las siguientes preguntas\n");

  printf("1. Te gusta ir a lugares tranquilos y relajados?");
  int respuesta1;
  scanf("%d", &respuesta1);
  puntos_totales += respuesta1;

  printf("2. Eres una persona aventurera que le gusta probar cosas nuevas?");
  int respuesta2;
  scanf("%d", &respuesta2);
  puntos_totales += respuesta2;

  printf("3. Disfrutas pasar tiempo en familia?");
  int respuesta3;
  scanf("%d", &respuesta3);
  puntos_totales += respuesta3;

  printf("4. Te consideras una persona que siempre dice la verdad?");
  int respuesta4;
  scanf("%d", &respuesta4);
  puntos_totales += respuesta4;

  printf("5. Te gusta salir de fiesta los fines de semana?");
  int respuesta5;
  scanf("%d", &respuesta5);
  puntos_totales += respuesta5;

  printf("6. Te gusta hacer ejercicio regularmente?");
  int respuesta6;
  scanf("%d", &respuesta6);
  puntos_totales += respuesta6;

  printf("7. Eres una persona que le gusta planificar y organizar todo con anticipacion?");
  int respuesta7;
  scanf("%d", &respuesta7);
  puntos_totales += respuesta7;

  printf("8. Disfrutas de la musica clasica?");
  int respuesta8;
  scanf("%d", &respuesta8);
  puntos_totales += respuesta8;

  printf("9. Eres una persona que valora la independencia y libertad en una relacion?");
  int respuesta9;
  scanf("%d", &respuesta9);
  puntos_totales += respuesta9;

  printf("10. Te consideras una persona romantica?");
  int respuesta10;
  scanf("%d", &respuesta10);
  puntos_totales += respuesta10;

  int total_puntos = 10;
  double porcentaje = ((double)puntos_totales / (double)total_puntos) * 100;

  if (porcentaje > 70) {
    printf("Buenas noticias!, encontraste a tu alma gemela!:)\n");
  } else {
    printf("Malas noticias, no eres compatible con esta persona):\n");
  }

  return 0;
}
