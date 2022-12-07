#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int contador;


int main()
{
    contador = 0;
  char * str = getenv("PATH");

        printf("%s\n", str);
        printf("Aqui\n");
 
 
    /*int resetContador
    {
      contador = 1;
    } */
    // Returns first token

    
    char * token = strtok(str, ":");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
//char * const * command;
//command ="ls" ;
    //  execve(token, command, NULL);

        contador = contador + 1;
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
    printf("Aqui\n");

    printf("%d\n",contador);
    //resetContador;

 
    return 0;

}