#include <stdio.h>
#include <ctype.h>
int main ()
{
char ch;
printf("Enter a Character%c" , ch);
scanf("%c", &ch) ;
if (isupper(ch))
{
printf("The letter is Uppercase");
}
else if ( islower(ch))
{
printf("The Letter is Lowercase");
}
return 0;
}