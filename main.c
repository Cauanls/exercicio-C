#include <stdio.h>
#define tam 5
int validarSexo(const char* sexo) {
    if (strcmp(sexo, "feminino") == 0 ||
        strcmp(sexo, "masculino") == 0 ||
        strcmp(sexo, "indiferente") == 0) {
        return 1;  // A string é válida
    } else {
        return 0;  // A string é inválida
    }
}
double validarAltura(double altura){

  if(altura < 1.00 || altura > 2.00){
    printf("Altura invalida, escreva entre 1 e 2 metros");
    printf("\nDigite sua altura em metros: ");
    return 1;
  }else{
    return 0;
  }
}
int validarVacina(int vacina){
  
  if(vacina != 1 && vacina != 2){
    printf("Resposta invalida, digite 1 para vacinado ou 2 para nao vacinado");
      printf("\nVoce esta vacinado? (Escreva 1 para sim e 2 para nao): ");
    return 1;
  }else{
    return 0;
  }
}

char validarEmail(const char *email) {
    int temArroba = 0;
    int tamanho = strlen(email);
    
    for (int i = 0; i < tamanho; i++) {
        if (email[i] == '@') {
            temArroba = 1;
            break;
        }
    }
    
    if (temArroba) {
      return 1;
    } else {
      return 0;
    }
}

typedef struct usuario{
  const char nome[50];
  const char endereco[60];
  const char sexo[20];
  int id0, vacina;
  double altura;
  const char email[40];
}usuario;

int main(void) {
  struct usuario usuarios[tam];
  int i, *id[tam], id0[tam];
  char opcoes, buscarEmail[40];
  
  usuarios[i].altura = 0.0;
  
  for(i = 0; i < tam; i++){
    printf("\nUSUARIO %d\n", i + 1);
    id[i] = &id0[i];

    printf("O id do usuario e %d\n", id[i]);
    
    printf("\nEscreva seu nome completo: ");
    scanf("%50[^\n]s", &usuarios[i].nome);
    __fpurge(stdin);
  
    printf("\nVoce esta vacinado? (Escreva 1 para sim e 2 para nao): ");
    scanf("%d", &usuarios[i].vacina);
    if(validarVacina(usuarios[i].vacina)){
      scanf("%d", &usuarios[i].vacina);
      __fpurge(stdin);
    }else{
      printf("Vacina valida!\n");
    }
    __fpurge(stdin);
    
    printf("\nEscreva seu endereco: ");
    scanf("%60[^\n]s", &usuarios[i].endereco);
    __fpurge(stdin);

    printf("\nQual seu sexo (masculino, feminino ou indiferente): ");
    scanf("%s", &usuarios[i].sexo);
    if(validarSexo(usuarios[i].sexo)){
    }else{
      printf("Resposta invalida");
      printf("\nQual seu sexo (masculino, feminino ou indiferente): ");
      scanf("%s", &usuarios[i].sexo);
      __fpurge(stdin);
    }
    __fpurge(stdin);

    printf("\nDigite sua altura em metros: ");
    scanf("%lf", &usuarios[i].altura);
    if(validarAltura(usuarios[i].altura)){
      scanf("%lf", &usuarios[i].altura);
      __fpurge(stdin);
    }else{ 
      printf("Altura valida!\n");  
    }
      __fpurge(stdin);
    printf("\nEscreva seu e-mail: ");
    scanf("%40[^\n]s", &usuarios[i].email);
    if(validarEmail(usuarios[i].email)){
      printf("E-mail Valido!");
    }else{
      __fpurge(stdin);
      printf("E-mail invalido!");
      printf("\nReescreva seu e-mail: ");
      scanf("%40[^\n]s", &usuarios[i].email);
      __fpurge(stdin);
    }
    __fpurge(stdin);

    printf("\n\n------------------------\nUSUARIO %d", i + 1);
    
    printf("\nid do usuario: %d\nNome completo do usuario: %s\nEsta vacinado (1 = sim e 2 = nao): %d\nEndereco do usuario: %s\nSexo do usuario: %s\nAltura do usuario: %.2lf metros\nE-mail do usuario %s\n", id[i], usuarios[i].nome, usuarios[i].vacina, usuarios[i].endereco, usuarios[i].sexo, usuarios[i].altura, usuarios[i].email);
    __fpurge(stdin);

    printf("------------------------\n\n");
  
  }
  
  printf("Escreva a letra correspondente a opcao desejada\ne - edite um usuário\nx - exclua um usuário\nb - busque um usuário pelo email\ni - imprima todos os usuários cadastrados\ns - Sair\nOpcao desejada: ");
  scanf("%s", &opcoes);
  __fpurge(stdin);


  switch(opcoes){
    case 'e':
      printf("\nQual usuario deseja editar? (Digite o numero do usuario)");
      scanf("%d", &i);
      __fpurge(stdin);

      printf("\nEscreva seu nome completo: ");
    scanf("%50[^\n]s", &usuarios[i].nome);
    __fpurge(stdin);
  
    printf("\nVoce esta vacinado? (Escreva 1 para sim e 2 para nao): ");
    scanf("%d", &usuarios[i].vacina);
    if(validarVacina(usuarios[i].vacina)){
      scanf("%d", &usuarios[i].vacina);
      __fpurge(stdin);
    }else{
      printf("Vacina valida!\n");
    }
    __fpurge(stdin);
    
    printf("\nEscreva seu endereco: ");
    scanf("%60[^\n]s", &usuarios[i].endereco);
    __fpurge(stdin);

    printf("\nQual seu sexo (masculino, feminino ou indiferente): ");
    scanf("%s", &usuarios[i].sexo);
    if(validarSexo(usuarios[i].sexo)){
    }else{
      printf("Resposta invalida");
      printf("\nQual seu sexo (masculino, feminino ou indiferente): ");
      scanf("%s", &usuarios[i].sexo);
      __fpurge(stdin);
    }
    __fpurge(stdin);

    printf("\nDigite sua altura em metros: ");
    scanf("%lf", &usuarios[i].altura);
    if(validarAltura(usuarios[i].altura)){
      scanf("%lf", &usuarios[i].altura);
      __fpurge(stdin);
    }else{ 
      printf("Altura valida!\n");  
    }
      __fpurge(stdin);
    printf("\nEscreva seu e-mail: ");
    scanf("%40[^\n]s", &usuarios[i].email);
    if(validarEmail(usuarios[i].email)){
      printf("E-mail Valido!");
    }else{
      __fpurge(stdin);
      printf("E-mail invalido!");
      printf("\nReescreva seu e-mail: ");
      scanf("%40[^\n]s", &usuarios[i].email);
      __fpurge(stdin);
    }
    __fpurge(stdin);
      
      printf("\n\n------------------------\nUSUARIO %d editado", i);
      
      printf("\nid do usuario: %d\nNome completo do usuario: %s\nEsta vacinado (1 = sim e 2 = nao): %d\nEndereco do usuario: %s\nSexo do usuario: %s\nAltura do usuario: %.2lf metros\nE-mail do usuario %s\n", id[i], usuarios[i].nome, usuarios[i].vacina, usuarios[i].endereco, usuarios[i].sexo, usuarios[i].altura, usuarios[i].email);
      
      break;
    
    case 'x':
      printf("Qual usuario deseja excluir? (Digite o numero do usuario)");
      scanf("%d", &i);
      printf("\n\n------------------------\nUSUARIO %d excluido", i);
      usuarios[i].nome == 'e';
      usuarios[i].vacina = 0;
      usuarios[i].endereco == 'e';
      usuarios[i].sexo == 'e';
      usuarios[i].altura = 0;
      usuarios[i].email == 'e';

      printf("\nid do usuario: %d\nNome completo do usuario: %s\nEsta vacinado (1 = sim e 2 = nao): %d\nEndereco do usuario: %s\nSexo do usuario: %s\nAltura do usuario: %.2lf metros\nE-mail do usuario %s\n", id[i], usuarios[i].nome, usuarios[i].vacina, usuarios[i].endereco, usuarios[i].sexo, usuarios[i].altura, usuarios[i].email);
      
      break;
    
    case 'b':
      printf("Qual o email: ");
      scanf("%40[^\n]s", &buscarEmail);  

    
      int found = 0;
      for (i = 0; i < tam; i++) {
        if (strcmp(usuarios[i].email, buscarEmail) == 0) {
            printf("Usuário %d\n", i);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("id do usuario: %d\n", id[i]);
            found = 1;
            break;
          }
      }
      
        if (!found) {
          printf("Usuário não encontrado com o e-mail fornecido.\n");
        }
      
      break;
    
    case 'i':

      for (i = 0; i < tam; i++) {
        printf("\n\n------------------------\nUSUARIO %d", i + 1);
    
        printf("\nid do usuario: %d\nNome completo do usuario: %s\nEsta vacinado (1 = sim e 2 = nao): %d\nEndereco do usuario: %s\nSexo do usuario: %s\nAltura do usuario: %.2lf metros\nE-mail do usuario %s\n", id[i], usuarios[i].nome, usuarios[i].vacina, usuarios[i].endereco, usuarios[i].sexo, usuarios[i].altura, usuarios[i].email);
        __fpurge(stdin);

        printf("------------------------\n\n");
      }
      
      break;   
    case 's':
      printf("Encerrando o programa.\n");
    break;
    
    default:
      printf("Opcao invalida");
      break;
  }
  
   
  return 0;
}
