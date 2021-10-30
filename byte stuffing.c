#include<stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
  char string [100], string2[100], flag, esc ;
  int i,j =0;
  printf("Enter the data string : ");
  gets(string);
  printf("Enter the flag :");
  scanf("%c", &flag);
  printf("Enter the stuffing Char :");
  fflush(stdin);
  scanf("%c",&esc);

  string2 [j] = flag;
  j++;

  for(i = 0; i<=strlen(string); i++ )
  {
     if (string[i] == flag)
          {
          string2[j] = esc;
        }

    else if (string[i] == esc)
    {
        string[i];
    }
    string2[j]=string[i];
    j++;
  }
    string2 [strlen(string2)]= flag;
    string2[j] ='\0';

    printf("\nStuffed data string : %s", string2);

    return 0;
}
