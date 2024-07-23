#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *arg[]) {
  int day;
  printf("enter day : ");
  scanf("%d", &day);
  int month;
  printf("enter month : ");
  scanf("%d", &month);
  if ((day >= 20 && month == 1) || (day <= 18 && month == 2))
    printf("Aquraius = a new relation is on horizon.");
  else if ((day >= 19 && month == 2) || (day <= 20 && month == 3))
    printf("Pisces = you don't have to gamble to face fonancial risks.");
  else if ((day >= 21 && month == 3) || (day <= 19 && month == 4))
    printf("Aries = having too many choices can be overwhelming.");
  else if ((day >= 20 && month == 4) || (day <= 18 && month == 5))
    printf("Taurus = sometimes things don't go as planned.");
  else if ((day >= 20 && month == 5) || (day <= 18 && month == 6))
    printf("Gemini = today, you must decide which path to take.");
  else if ((day >= 20 && month == 6) || (day <= 18 && month == 7))
    printf("cancer = enjoy the moment without worrying anything.");
  else if ((day >= 20 && month == 7) || (day <= 18 && month == 8))
    printf("Leo = don't hold back when you're meant to move forward.");
  else if ((day >= 20 && month == 8) || (day <= 18 && month == 9))
    printf("Vigro = be present and careful with those you care about.");
  else if ((day >= 20 && month == 9) || (day <= 18 && month == 10))
    printf("Libra = being kind is never a waste.");
  else if ((day >= 20 && month == 10) || (day <= 18 && month == 11))
    printf("scorpio = life can be very competitive.");
  else if ((day >= 20 && month == 11) || (day <= 18 && month == 12))
    printf("Sagittarius = creativity can come and go.");
  else if ((day >= 20 && month == 12) || (day <= 18 && month == 1))
    printf("Capricorn = use the valuable insights they offer.");
  return EXIT_SUCCESS;
}
