#include <stdio.h>
#include <stdlib.h>

void reverse_word(char word[]){
    int len = 0;
    while(word[len] != '\0'){
        len++;
    }
    char temp;
    for (int i = 0; i < len / 2; i++){
        temp = word[i];
        word[i] = word[len - 1 - i];
        word[len - 1 - i] = temp;
    }
}

void reverse_order(char string[]){
    int len = 0;

    
    //We calculate the len manually
    while(string[len] != '\0'){
        len++;
    }
    
    //Reverse string
    char temp;
    for (int i = 0; i < len / 2; i++){
        temp = string[i];
        string[i] = string[len - 1 - i];
        string[len - i - 1] = temp;
    }

    //Reverse the words
    char word[20] = "";
    int j = 0, k;
    for (int i = 0; i < len; i++){
        k = i;
        while(string[k] != ' ' && string[k] != '\0'){
            word[j] = string[k];
            j++;
            k++;
        }
        word[j] = '\0';
        reverse_word(word);
        j = 0;
        while(string[i] != ' ' && string[i] != '\0'){
            string[i] = word[j];
            j++;
            i++;
        }
    }
    
}

int main(){
    char phrase[50] = "Hello World my name is Daniel";
    printf("%s\n", phrase);
    reverse_order(phrase);
    printf("%s\n", phrase);
    return 0;
}