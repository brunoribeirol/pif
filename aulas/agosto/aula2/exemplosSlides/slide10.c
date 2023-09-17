#include <stdio.h>

int main(void) {
  int temp, press; //temperatura em Celsius e pressa em ATM

  temp = -15;
  press = 3;

  if (temp > 90 || press > 20) {
    printf("Alerta! Desligue a maquina\n");
  }
  else if (temp < -10 && press < 5) {
    printf("Alerta! Acionar motor extra\n");
  }
  else{
    printf("Sistema em estado normal\n");
  }
  
	return 0;
}