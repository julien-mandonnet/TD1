#include <stdio.h>

int dbl(int);
void stl();

#define MESSAGE "Hello World !\n"





int main() {  
    int tab[3];

    stl();
    printf(MESSAGE);

    stl();
    printf("résultat: %i\n", dbl(4));

    stl();
    tab[0] = 1;
    tab[1] = 2;
    for(int i=0; i<4; i++){
      printf("%i: %i\n", i, tab[i]);
    }
    
}  





int dbl(int nombre){
  return nombre*2;

}

void stl() {
  printf("\n");
  printf("*******");
  printf("\n");

}