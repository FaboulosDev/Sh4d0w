#include <stdio.h>         /* we include the required libs */

unsigned int brt;          /* we declare btr */
unsigned int b;            /* like a 'son' of btr */
unsigned int ech;          /* ech is used to see the changes of varibles..it can be disabled
char a;                    /* a is used for i/o */

int main                   /* main function */
{
   printf("Write your code here: \n");
   char code = getchar();  /* we daclare a code segment wich gets 1 character as input for now */
   switch(code)            /* process the code(search for instructions in our code) for now only 1 character */
   {
       case '>':           /* our first instuction:incrase the value of brt by 1 */
           brt++;
           if (ech = 1)    /* So if the value of ech is 1(which is 1 by default) we will get the output of the data hold in the used storage */
           {
              printf("%s\n", brt);
           }
       case '<':           /* decrase the value of brt by 1 */
           brt--;
           if (ech = 1)
           {
              printf("%s\n", brt);
           }
       case '$':           /* our simple input function */
           a = getchar();
       case '#':           /* our simple output function */
           printf("%s\n", a);
       case '[':           /* working with b */
           b++;
           if (ech = 1)
           {
              printf("%s\n", b);
           }
       case ']':
           b--;
           if (ech = 1)
           {
              printf("%s\n", b);
           }
/* WARNING!More 'complex' functions ahead such as transfers,switches! */
       case '{':          /* transfer the value of brt to b */
           brt = b;
       case '}':          /* transfer the value of b to brt */
           b = brt;
       case '!':          /* set ech to 0 so the change of varibles is not printed out */
           ech = 0;
   }
   return 0;              /* stop the program */
}
