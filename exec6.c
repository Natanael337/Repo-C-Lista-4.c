#include <stdio.h>

int main() {

int senha, c;
printf("Digite a Senha: \n");
scanf("%d", &senha);
while (senha != 1234){
 printf("Informe a Senha Novamente: \n");
 scanf("%d", &senha);
}
    printf("Login Completo!");

return 0;
}
