#include<stdio.h>
int main()
{
    char c;
    int lower_vowel,upper_vowel;

    printf("Enter a letter: ");
    scanf("%c",&c);

    lower_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    upper_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');


if(lower_vowel || upper_vowel)
    printf("%c is vowel",c);
else
    printf("%c is consonant",c);
return 0;
}
