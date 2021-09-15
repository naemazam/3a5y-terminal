
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int art()
{
  int i,len;
  char name[30];
  printf("enter word\n");
  scanf("%c",&name);

  fgets(name,30,stdin);
  len=strlen(name);
  for(i=0;i<len;i++)
  {
    name[i]=toupper(name[i]);
  }
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='C'|| name[i]=='E'|| name[i]=='F' || name[i]=='G'|| name[i]=='I'|| name[i]=='J' || name[i]=='O'|| name[i]=='P'|| name[i]=='Q' || name[i]=='R'|| name[i]=='S'|| name[i]=='T'|| name[i]=='Z')
    {
      printf("   *****");
    }
    else if(name[i]=='H' || name[i]=='K'|| name[i]=='M' || name[i]=='N' || name[i]=='U'|| name[i]=='V'|| name[i]=='W'|| name[i]=='X'|| name[i]=='Y')
    {
      printf("   *   *");
    }
    else if(name[i]=='D')
    {
      printf("       *");
    }
    else if(name[i]=='L')
    {
      printf("   *    ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='G'|| name[i]=='H'|| name[i]=='O' || name[i]=='P'|| name[i]=='Q'|| name[i]=='R' || name[i]=='U'|| name[i]=='V'|| name[i]=='W')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E' || name[i]=='F'|| name[i]=='L'|| name[i]=='S')
    {
      printf("   *    ");
    }
    if(name[i]=='M')
    {
      printf("   ** **");
    }
    else if(name[i]=='Y')
    {
      printf("    * * ");
    }
    else if(name[i]=='K')
    {
      printf("   *  * ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T')
    {
      printf("     *  ");
    }
    else if(name[i]=='D')
    {
      printf("       *");
    }
    else if(name[i]=='N')
    {
      printf("   **  *");
    }
    else if(name[i]=='Z')
    {
      printf("      * ");
    }
    else if(name[i]=='X')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B' || name[i]=='G'|| name[i]=='H'||name[i]=='N'|| name[i]=='O' || name[i]=='P'|| name[i]=='Q'|| name[i]=='R' || name[i]=='U'|| name[i]=='V'|| name[i]=='W')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E' || name[i]=='F'|| name[i]=='L'|| name[i]=='S')
    {
      printf("   *    ");
    }
    if(name[i]=='M')
    {
      printf("   * * *");
    }
    else if(name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='K')
    {
      printf("   * *  ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T')
    {
      printf("     *  ");
    }
    else if(name[i]=='D')
    {
      printf("       *");
    }
    else if(name[i]=='X')
    {
      printf("    * * ");
    }
    else if(name[i]=='Z')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='D'|| name[i]=='E' || name[i]=='F'|| name[i]=='G'|| name[i]=='H'|| name[i]=='P'|| name[i]=='Q'|| name[i]=='R'|| name[i]=='S' )
    {
      printf("   *****");
    }
    else if(name[i]=='C')
    {
      printf("   *    ");
    }
    if(name[i]=='M'|| name[i]=='O'|| name[i]=='V'|| name[i]=='W'|| name[i]=='U')
    {
      printf("   *   *");
    }
    else if(name[i]=='Z')
    {
      printf("     *  ");
    }
    else if(name[i]=='K')
    {
      printf("   **   ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='L')
    {
      printf("   *    ");
    }
    else if(name[i]=='N')
    {
      printf("   * * *");
    }
    else if(name[i]=='X')
    {
      printf("     *  ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='D'|| name[i]=='H' || name[i]=='M'|| name[i]=='N'|| name[i]=='O'||name[i]=='U'|| name[i]=='V')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E'|| name[i]=='F'|| name[i]=='L'|| name[i]=='P')
    {
      printf("   *    ");
    }
    if(name[i]=='G'|| name[i]=='Q'|| name[i]=='S')
    {
      printf("       *");
    }
    else if(name[i]=='K')
    {
      printf("   * *  ");
    }
    else if(name[i]=='I'||name[i]=='J'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='R')
    {
      printf("   * *  ");
    }
    else if(name[i]=='W')
    {
      printf("   * * *");
    }
    else if(name[i]=='X')
    {
      printf("    * * ");
    }
    else if(name[i]=='Z')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='A'|| name[i]=='B'|| name[i]=='D'|| name[i]=='H' || name[i]=='M'|| name[i]=='O'||name[i]=='U'|| name[i]=='V')
    {
      printf("   *   *");
    }
    else if(name[i]=='C'|| name[i]=='E'|| name[i]=='F'|| name[i]=='L'|| name[i]=='P')
    {
      printf("   *    ");
    }
    if(name[i]=='G'|| name[i]=='Q'|| name[i]=='S')
    {
      printf("       *");
    }
    else if(name[i]=='K')
    {
      printf("   *  * ");
    }
    else if(name[i]=='I'||name[i]=='T'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='R')
    {
      printf("   *  * ");
    }
    else if(name[i]=='W')
    {
      printf("   ** **");
    }
    else if(name[i]=='J')
    {
      printf("   * *  ");
    }
    else if(name[i]=='N')
    {
      printf("   *  **");
    }
    else if(name[i]=='Z')
    {
      printf("    *    ");
    }
    else if(name[i]=='X')
    {
      printf("        ");
    }
  }
  printf("\n");
  for(i=0;i<len;i++)
  {
    if(name[i]=='B'|| name[i]=='C'|| name[i]=='D'|| name[i]=='E' || name[i]=='G'|| name[i]=='I'|| name[i]=='O'||name[i]=='L'|| name[i]=='S'|| name[i]=='U'|| name[i]=='Z')
    {
      printf("   *****");
    }
    else if(name[i]=='A'|| name[i]=='H'|| name[i]=='M'|| name[i]=='N')
    {
      printf("   *   *");
    }
    if(name[i]=='F'|| name[i]=='P')
    {
      printf("   *    ");
    }
    else if(name[i]=='J')
    {
      printf("   ***  ");
    }
    else if(name[i]=='K'||name[i]=='R')
    {
      printf("   *   *");
    }
    else if(name[i]=='Q')
    {
      printf("       *");
    }
    else if(name[i]=='T'|| name[i]=='V'|| name[i]=='Y')
    {
      printf("     *  ");
    }
    else if(name[i]=='W'||name[i]=='X')
    {
      printf("   *   *");
    }
  }
  return 0;
}
