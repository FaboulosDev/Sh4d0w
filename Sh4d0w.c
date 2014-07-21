#include <stdio.h>         /* we include the required libs */

unsigned int brt;          /* we declare btr */
unsigned unt b;             /* like a 'son' of btr */
char a;                     /* a is used for i/o */

int main                   /* main function */
{
   printf("Write your code here: \n");
   char code = getchar();  /* we daclare a code segment wich gets 1 character as input for now */
   switch(code)            /* process the code(search for instructions in our code) for now only 1 character */
   {
       case '>':           /* our first instuction:incrase the value of brt by 1 */
           brt++;
       case '<':           /* decrase the value of brt by 1 */
           brt--;
       case '$':           /* our simple input function */
           a = getchar();
       case '#':           /* our simple output function */
           printf("%s\n", a);
       case '[':           /* working with b */
           b++;
       case ']':
           b--;
/* WARNING!More 'complex' functions ahead such as transfers! */
       case '{':          /* transfer the value of brt to b
           brt = b;
       case '}':          /* transfer the value of b to brt
           b = brt;
   }
   return 0;              /* stop the program */
}
