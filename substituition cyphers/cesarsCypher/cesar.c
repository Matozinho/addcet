#include <stdio.h>
#include <string.h>

#define MAXSIZE 500
    
    int main (){
        char string[MAXSIZE];
        int i, size;

        //Entrada do array
        printf("Digite a sua palavra: ");
        scanf("%s", string);

        //Encontando o tamnho do array
        size = strlen(string);

        //Fazendo a troca
        for(i = 0; i < size; i++){
            if(string[i] >= 'a' && string[i] <= 'z'){
                string[i] = string[i] + 3;
                if(string[i] > 'z'){
                    string[i] -= 26;

                }
            }else if(string[i] >= 'A' && string[i] <= 'Z'){
                string[i] = string[i] + 3;
                if(string[i] > 'Z'){
                    string[i] -= 26;

                }
            }

        }

            //Saida
            printf("String Criptografada: %s\n", string);

        return 0;

    }