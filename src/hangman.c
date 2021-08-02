
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void showHangman(int);

void hangman()
{
    char word[100],temp[100],output[100],userletter;
    int wrong=6 , match = 0, count=0,pos=0,winner,length,i;

    system("cls");
    printf("At first one friend Enter a word then he gives chance to other friend to Guessing real Word otherwise Hang!!!\n ");

    printf("\n\n ENTER ANY WORD IN LOWER CASE AND PRESS ENTER");
    printf("\n\n\t ENTER HERE >>  ");
    scanf("%s",word);
    printf("\n\n GIVE THE COMPUTER TO YOUR FRIEND AND LET THEM TRY IT OUT....");
    printf("\n\n\tPRESS ENTER");
    getchar();
    length = strlen(word);

    system("cls");

    printf("\n\n#####################WELCOME TO THE HANGMAN GAME#####################\n\n\n");
    printf("\n\n YOU WILL GET 5 CHANCES TO GET THE RIGHT ANSWER");
    printf("\n\n\tPRESS ENTER TO START THE GAME....");
    getchar();

    system("cls");

        printf("\n\t|_______ ");
	      printf("\n\t|   | ");
        printf("\n\t|      ");
        printf("\n\t|      ");
        printf("\n\t|      ");
        printf("\n\t|      ");

    printf("\n\n     THE WORD HAS %d LETTERS \n\n",length);
    for( i = 0; i < length ; i++)
    {
        output[i] = '_';
        output[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",output[i]);

    }
    while(wrong != 0)
    {
        match = 0;
        printf("\n\n   ENTER ANY ALPHABET FROM A-Z (USE LOWER CASE)");
        printf("\n\n\t Enter HERE >> ");

        fflush(stdin);
        scanf("%c",&userletter);
          if(userletter < 'a' || userletter > 'z')
          {
            system("cls");
            printf("\n\n\t WRONG INPUT. TRY AGAIN ");
            match = 2;
          }
          if (match != 2)
          {
            for(count=0; count<length; count++)
	          {
		            if(userletter == word[count])
		            {
		                match = 1;
                }
            }

	        if(match == 0)
	        {
            printf("\n\t SORRY, YOU HAVE %d TRIES LEFT ",--wrong);
            showHangman(wrong);
	        }

	        else
	        {
	            for(count=0; count < length; count++)
              {
     	            match = 0;
                    if(userletter == word[count])
	                  {
     		               pos = count ;
     		               match = 1;
	                  }
    	              if(match == 1)
	                  {
                        for(i = 0 ; i < length ; i++)
                        {
                            if( i == pos)
                  	        {
                              output[i] = userletter;
                            }
                            else if(output[i] >= 'a' && output[i] <= 'z')
                            {
                              continue;
                  	        }
                            else
                            {
                              output[i] = '_';
                            }
                        }
                temp[pos] = userletter;
                temp[length] = '\0';
                winner = strcmp(temp,word);

                if(winner == 0) //IF YOUR FRIEND GOT THE WORD RIGHT//
                {
                    printf("\n\n\t \t GREAT JOB YOU GUESSED THE WORD");
                    printf("\n\n\t THE WORD WAS %s ",word);
                    getchar();
                    return 0;
                }
	                }
	                }
                  }
                  }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",output[i]);
      }
      getchar();
}

      if(wrong <= 0)
      {
          printf("\n\n\t THE WORD WAS %s ",word);
	        printf("\n\n\t YOU GOT IT WRONG ");

      }
      getchar();
return 0;
}



void showHangman(int choice)           // THIS IS FOR THE HANGMAN GRAPHIC //
 {

     switch(choice)
     {

     case 0:
         system("cls");
	printf("\n\t|_______");
	printf("\n\t|    | ");
	printf("\n\t|   %cO/",'\\');
	printf("\n\t|    | ");
	printf("\n\t|   / %c",'\\');
	printf("\n\t|      ");
	break;
     case 1:
         system("cls");
	printf("\n\t|_______ ");
	printf("\n\t|    | ");
	printf("\n\t|   %cO/",'\\');
	printf("\n\t|    | ");
	printf("\n\t|     %c",'\\');
	printf("\n\t|      ");
	break;
     case 2:
         system("cls");
	printf("\n\t|_______ ");
	printf("\n\t|    | ");
	printf("\n\t|   %cO/",'\\');
	printf("\n\t|    | ");
	printf("\n\t|      ");
	printf("\n\t|      ");
	break;
     case 3:
         system("cls");
	printf("\n\t|_______");
	printf("\n\t|    | ");
	printf("\n\t|   %cO/",'\\');
	printf("\n\t|      ");
	printf("\n\t|      ");
	printf("\n\t|      ");
	break;
     case 4:
         system("cls");
	printf("\n\t|_______ ");
	printf("\n\t|    | ");
	printf("\n\t|   %cO ",'\\');
	printf("\n\t|      ");
	printf("\n\t|      ");
	printf("\n\t|      ");
	break;
     case 5:
         system("cls");
	printf("\n\t|_______ ");
	printf("\n\t|    | ");
	printf("\n\t|    O ");
	printf("\n\t|      ");
	printf("\n\t|      ");
	printf("\n\t|      ");
	break;
      }
      return;
 }
