// Your code here...
#include <stdio.h>
#include <ctype.h>

int main(){
    char ad;
    scanf("%c",&ad);
    if (isdigit(ad)){
        printf("Digit");
    }
    else if(isalpha(ad)){
        ch=tolower(ad);
        if (ad =='a' || ad=='e' || ad=='i' || ad=='o' || ad=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    else{
        printf("Special character");
    }    
    return 0;
    }
}