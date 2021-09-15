#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 3

char Converter(char subject);
char R_Converter(char subject);
char Message_processor_write();
char Message_processor_read();
char INTRO();
char Assign(char A[size]);
char Display(char A[size]);
char Choice(char A[size]);
char Encryptor();
char check_pass();
char change_pass();

void decoder()
{

	Encryptor();
}
char Converter(char subject)
{
	if(subject == 'a')
	{ return ('t'); }
	else if(subject == 'b')
	{ return ('h');}
	else if(subject == 'c')
	{ return ('e');}
	else if(subject == 'd')
	{ return ('q');}
	else if(subject == 'e')
	{ return ('u');}
	else if(subject == 'f')
	{ return ('i');}
	else if(subject == 'g')
	{ return ('c');}
	else if(subject == 'h')
	{ return ('k');}
	else if(subject == 'i')
	{ return ('b');}
	else if(subject == 'j')
	{ return ('r');}
	else if(subject == 'k')
	{ return ('o');}
	else if(subject == 'l')
	{ return ('w');}
	else if(subject == 'm')
	{ return ('n');}
	else if(subject == 'n')
	{ return ('f');}
	else if(subject == 'o')
	{ return ('x');}
	else if(subject == 'p')
	{ return ('j');}
	else if(subject == 'q')
	{ return ('m');}
	else if(subject == 'r')
	{ return ('p');}
	else if(subject == 's')
	{ return ('s');}
	else if(subject == 't')
	{ return ('v');}
	else if(subject == 'u')
	{ return ('l');}
	else if(subject == 'v')
	{ return ('z');}
	else if(subject == 'w')
	{ return ('y');}
	else if(subject == 'x')
	{ return ('a');}
	else if(subject == 'y')
	{ return ('d');}
	else if(subject == 'z')
	{ return ('g');}
	else
	return (subject);
}
char Message_processor_write()
{
	FILE *CF;
	char CodeFile[]="Coded File.txt";
	char Catalyst,D;
	char Message[600];
	int counter = 0;

	system("cls");
	CF = fopen(CodeFile,"w");
	if(CF==0)
	{
		printf("\n\n\n\t\tError Opening Coded File.txt\n\n");
		system("pause");
		system("cls");
	}
	else{
		printf("Please write down the message you want to Code.\nMessage: ");
		fflush(stdin);
		scanf("%[^\n]",Message);
		while (Message[counter])
		{
			Catalyst = Message[counter];
			Catalyst = tolower(Catalyst);
			D = Converter(Catalyst);
			fprintf(CF,"%c",D);
			counter++;
		}

		fclose(CF);
	}
}
char Message_processor_read()
{
	FILE *CRF;
	char CodeFile[]="Coded File.txt";
	char Catalyst,Message[600];
	int counter =0;
	char c ='T';

	system("cls");
	CRF = fopen(CodeFile,"r");
	if(CRF == 0)
	{
		printf("\n\n\n\t\tError Opening Coded File.txt\n\n");
		system("pause");
		system("cls");
	}
	else
	{
		fscanf(CRF,"%[^\n]",Message);
		while(Message[counter])
		{
			Catalyst = Message[counter];
			Catalyst = R_Converter(Catalyst);

			if(c == 'T')
			{
				printf("%c",toupper(Catalyst));
			}
			else if( c == 'F' )
			{
				printf("%c",tolower(Catalyst));
			}

			if(Catalyst == ' ')
			{ c = 'T';}
			else
			{ c = 'F';}
			counter++;
		}
		printf("\n\n");
		system("pause");
		fclose(CRF);
	}
}
char R_Converter(char subject)
{
	if(subject == 't')
	{ return ('a'); }
	else if(subject == 'h')
	{ return ('b');}
	else if(subject == 'e')
	{ return ('c');}
	else if(subject == 'q')
	{ return ('d');}
	else if(subject == 'u')
	{ return ('e');}
	else if(subject == 'i')
	{ return ('f');}
	else if(subject == 'c')
	{ return ('g');}
	else if(subject == 'k')
	{ return ('h');}
	else if(subject == 'b')
	{ return ('i');}
	else if(subject == 'r')
	{ return ('j');}
	else if(subject == 'o')
	{ return ('k');}
	else if(subject == 'w')
	{ return ('l');}
	else if(subject == 'n')
	{ return ('m');}
	else if(subject == 'f')
	{ return ('n');}
	else if(subject == 'x')
	{ return ('o');}
	else if(subject == 'j')
	{ return ('p');}
	else if(subject == 'm')
	{ return ('q');}
	else if(subject == 'p')
	{ return ('r');}
	else if(subject == 's')
	{ return ('s');}
	else if(subject == 'v')
	{ return ('t');}
	else if(subject == 'l')
	{ return ('u');}
	else if(subject == 'z')
	{ return ('v');}
	else if(subject == 'y')
	{ return ('w');}
	else if(subject == 'a')
	{ return ('x');}
	else if(subject == 'd')
	{ return ('y');}
	else if(subject == 'g')
	{ return ('z');}
	else
	return (subject);
}
char INTRO()
{
	char A[size];
	Assign(A);
	do
	{
		Display(A);
		Choice(A);

	}while(-1);
}
char Assign(char A[size])
{

	int i;

	for( i = 0; i < size; i++)
	{
		A[i] = 'A';
	}
	A[0] = 'B';
}
char Display(char A[size])
{
	system("cls");
	printf("\n\n\n");
	if(A[0] == 'B')
	{
		printf("\t\t%cCODE FILE READER\n",26);
		printf("\t\t Message Coder\n");
		printf("\t\t Change Password\n");
	}
	else if(A[1] == 'B')
	{
		printf("\t\t Code File Reader\n");
		printf("\t\t%cMESSAGE CODER\n",26);
		printf("\t\t Change Password\n");
	}
	else if(A[2] == 'B')
	{
		printf("\t\t Code File Reader\n");
		printf("\t\t Message Coder\n");
		printf("\t\t%cCHANGE PASSWORD\n",26);
	}
}
char Choice(char A[size])
{
	char ans;
	int i;
	printf("\n\n");
	printf("Please choose which program you want to use.\n\nW\t To Move the Selection Up\nS \t To Move the Selection Down");
	printf("\n\nChoice : ");
	fflush(stdin);
	scanf("%c",&ans);
	ans = toupper(ans);

	for(i=0;i< size ;i++)
	{
		if(A[i] == 'B')
		{break;}
	}
	if(ans == 'W')
	{
		if(i > 0)
		{
			A[i] = 'A';
			i--;
			A[i] = 'B'	 ;
		}

	}
	else if (ans == 'S')
	{
		if(i < 2)
		{
			A[i] = 'A';
			i++;
			A[i] = 'B';
		}
	}
	else if (ans == 'E')
	{
		if(i == 0)
		{
			Message_processor_read();
		}
		else if(i == 1)
		{
			Message_processor_write();
		}
		else if(i == 2)
		{
			change_pass();
		}
	}
	else if (ans == 'Q')
	{
		exit(-1);
	}
}
char Encryptor()
{
	char pass[100],sysPass[100];
	int i=0;
	check_pass(sysPass);
	printf("PLEASE ENTER SYSTEM PASSWORD\nPASSWORD: ");
	fflush(stdin);
	scanf("%s",pass);
	while(pass[i])
	{
		pass[i] = tolower(pass[i]);
		i++;
	}
	if(strcmp(pass,sysPass)==0)
	{
		system("cls");
		printf("\n\n\n\t\tSystem Access Granted!\n\n\n\n");
		system("pause");
		system("cls");
		INTRO();
	}
	else
	{
		system("cls");
		printf("\n\n\n\t\tBetter luck next time Noob Cake!\n\n\n\n");
		system("pause");
		system("cls");
	}
}
char check_pass(char tempS[100])
{
	FILE *PF;
	char PassFile[]="Coder File Records.txt";
	char Defpass[]="naanu073055";
	char pass[100],temp;
	int i = 0;

	PF = fopen(PassFile,"r");

	if(PF == 0)
	{
		printf("\t\tPassword set to default\n");
		while(Defpass[i])
		{
			tempS[i] = Defpass[i];
			i++;
		}

	}
	else
	{
		fscanf(PF,"%s",pass);
		while(pass[i])
		{
			temp = pass[i];
			pass[i] = R_Converter(temp);
			i++;
		}
		strcpy(tempS,pass);

	}
}
char change_pass()
{
	FILE *PF;
	char PassFile[]="Coder File Records.txt";
	char pass[100],temp;
	int i =0;

	PF = fopen(PassFile,"w");
	if(PF == 0)
	{
		system("cls");
		printf("\n\n\n\t\tError: Cannnot Open Coder File Records.txt\n\n");
		system("pause");
	}
	else
	{
		system("cls");
		printf("\tPLEASE ENTER NEW PASSWORD\n\t(WARNING:This application does not make passwords case sensitive)\n\tNEW PASSWORD: ");
		fflush(stdin);
		scanf("%[^\n]",pass);
		while(pass[i])
		{
			temp =pass[i];
			temp = Converter(tolower(temp));
			fprintf(PF,"%c",temp);
			i++;
		}
		system("cls");
		printf("\n\n\t\tPASSWORD SUCCESSFULLY CHANGED!\n\n\n");
		system("pause");
		fclose(PF);
	}

}
