#include <stdio.h>
#include <string.h>

#define MaxSize 500

    int main(){

        char string[MaxSize], key[MaxSize], cypher[MaxSize];
        int size, size1;
        int i, j=0;

        printf("Digite a sua palavra: ");
        fgets(string,MaxSize,stdin);
        printf("Digite a chave: ");
        scanf("%s", key);

        size = strlen(string);
        size1 = strlen(key);

        for(i=0; i<size-1; i++){

            if(string[i] >= 'a' && string[i] <= 'z'){
                cypher[i] = (string[i] - 97 + key[j] - 97) % 26 + 97;

            }else if(string[i] >= 'A' && string[i] <= 'Z'){
                cypher[i] = (string[i] - 65 + key[j] - 65) % 26 + 65;
            }

            if(string[i] != ' '){
                if(j < size1-1){
                    j++;
                }else{
                    j = 0;
                }
            }

        }

        cypher[size] = '\0';

        printf("Palavra Cifrada : %s", cypher);

        return 0;
    }