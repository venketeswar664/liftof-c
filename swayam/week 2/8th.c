#include <stdio.h>
#include <string.h>

int main(){

    char word[100];
    int vowel=0, cons=0;
    printf("Enter a string: \n");
    scanf("%s", word);

    for(int i=0; i<strlen(word); i++){
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='o'||word[i]=='U'){
            vowel+=1;
        }
        else{
            cons+=1;
        }    
    }
    printf("The number of vowels in the string is: %d\n", vowel);
    printf("The number of consonants in the string is: %d\n", cons);

    return 0;

}