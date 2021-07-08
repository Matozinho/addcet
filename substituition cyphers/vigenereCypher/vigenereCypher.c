/*
  Knowing the vigenere Cypher is a cesar Cypher with multiple keys
  basend in another AudioWorkletNode, we can use a functio with multiple
  calls for each key to make vigenereCypher work
*/

#include <stdio.h>
#include <string.h>

#define MaxSize 500

    char cesar (char string, int n){

        if(string >= 'a' && string <= 'z'){
            string = string + n;
            if(string > 'z'){
                string -= 26;

            }
        }else if(string >= 'A' && string <= 'Z'){
            string = string + n;
            if(string > 'Z'){
                string -= 26;

            }
        }

        return string;
    }

    int main(){

        char string[MaxSize], key[MaxSize], cypher[MaxSize];
        char caractere;
        int size, size1;
        int i, j=0;

        printf("Digite a sua palavra: ");
        fgets(string,MaxSize,stdin);
        printf("Digite a chave: ");
        scanf("%s", key);

        size  = strlen(string)-1;
        size1 = strlen(key);

        for(int i=0; i<size; i++){

            caractere = string[i];

            if(caractere != ' '){

                if(key[j%size1] >= 'a' && key[j%size1] <= 'z'){
                    cypher[i] = cesar(caractere, key[j%size1]-96);
                
                }else if(key[j%size1] >= 'A' && key[j%size1] <= 'Z'){
                    cypher[i] = cesar(caractere, key[j%size1]-64);
                }

                j++;
                
            }else{
                cypher[i] = ' ';
            }

        }
        cypher[size] = '\0';

        printf("Palavra Cifrada : %s\n", cypher);

        return 0;
    }