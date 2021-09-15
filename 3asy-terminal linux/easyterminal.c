#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

void read();
void write();
void append();
void clear();
void help();
void dt();
void exits();
void startscreen();
void removes();
void renames();
void edit();
void cdir();
void copy();
void cknow();
void lknow();
void ccount();
void gcd();
void lcm();
void tconv();
void passwordcheck();
void cube3d();
void cal();
void pyramid();
void grade();
void evalue();
void fiber();
void fibonacci();
void age();
void sroot();

int main(){

    char a[100];

    printf("*************************************\n\n");
    printf("*********** Easy Terminal ***********\n\n");

    printf("Today Is ");
dt();

    printf("*************************************\n\n");


    printf("Welcome To Easy Terminal, \n\n");

    printf("Type \"help\" for more things!\n\n");

    while(1){

    printf("\n3a5y-@localhost--$ ");
    fflush(stdin);
    scanf("%s", a);

    if(strcmp(a, "read") == 0){

        read();

    }else if(strcmp(a, "write") == 0){

        write();

    }else if(strcmp(a, "pyramid") == 0){

        pyramid();


    }else if(strcmp(a, "append") == 0){

        append();
     }else if(strcmp(a, "fiber") == 0){

        fiber();
}else if(strcmp(a, "sroot") == 0){

        sroot();


    }else if(strcmp(a, "cube3D") == 0){

        cube3d();
    }else if(strcmp(a, "grade") == 0){

        grade();

    }else if(strcmp(a, "clr") == 0){

        clear();

     }else if(strcmp(a, "fib") == 0){

        fibonacci();

    }else if(strcmp(a, "help") == 0){

        help();

    }else if(strcmp(a, "dt") == 0){

        dt();

    }else if(strcmp(a, "passwordcheck") == 0){

        passwordcheck();


    }else if(strcmp(a, "stscr") == 0){

        startscreen();

      }else if(strcmp(a, "evalue") == 0){

        evalue();

    }else if(strcmp(a, "remove") == 0){

        removes();

    }else if(strcmp(a, "rename") == 0){

        renames();

    }else if(strcmp(a, "edit") == 0){

        edit();

    }else if(strcmp(a, "cdir") == 0){

        cdir();

    }else if(strcmp(a, "copy") == 0){

        copy();

    }else if(strcmp(a, "cknow") == 0){

        cknow();

    }else if(strcmp(a, "lknow") == 0){

        lknow();

    }else if(strcmp(a, "calc") == 0){

        cal();
    }else if(strcmp(a, "ccount") == 0){

        ccount();

    }else if(strcmp(a, "gcd") == 0){

        gcd();

    }else if(strcmp(a, "lcm") == 0){

        lcm();

    }else if(strcmp(a, "age") == 0){

        age();

    }else if(strcmp(a, "tconv") == 0){

        tconv();

    }else if(strcmp(a, "exit") == 0){

        exits();

    }else{
        printf("Enter only stated things in help\n");
    }


    }

    return 0;

}

void read(){

    char a[100];

    printf("Use .txt or any other extension to read\nEx: hello.txt\n\n");

    system("COLOR 57");

    FILE *p;

    printf("Enter File Name To Read: ");
    scanf("%s", a);

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    char c;

    p = fopen(a, "r");

    if(p == NULL){
        printf("\nError\n");
    }

    printf("\n");

    c = fgetc(p);

    while(c != EOF){
        printf("%c", c);
        c = fgetc(p);
    }

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    fclose(p);

    printf("\n\n Successfully Read\n");

}

void cube3d(){
   int n,i,j;

   printf("Enter Height and Width (not more then 14 )\n");
    scanf("%d",&n);
    if(n>14){
    n=14;
    printf ("    By default input : %d\n\n",n);
    }
    else
    printf ("    Input : %d\n\n",n);

    printf ("Height : %d , Width : %d , Length : %d\n\n\n",n,n,n/2);
    for(i=0;i<3*(n/2);i++){
    for(j=0;j<3*(n/2);j++){
    if((((i==0)||(i==n-1))&&(j<n))||(((i==n/2-1)||(i==3*(n/2)-((n%2==0)?2:1)))&&((j>=n/2)&&(j<3*(n/2)-1)))||(((j==0)||(j==n-1))&&(i<n))||(((j==n/2-1)||(j==3*(n/2)-((n%2==0)?2:1)))&&((i>=n/2)&&(i<3*(n/2)-1)))||(((j==n+i-1)&&(j<3*(n/2)-((n%2==0)?1:0)))||((i==n+j-1)&&(i<3*(n/2)-((n%2==0)?1:0)))||((i==j)&&((i<n/2)||((i>=n)&&(i<3*(n/2)-((n%2==0)?1:0)))))))

    printf ("# ");
    else
    printf ("  ");
    }
    printf ("\n");

    }


}


void write(){

    char a[100];

    printf("Use .txt or any other extension to write\nEx: hello.txt\n\n");

    system("COLOR 37");

        FILE *p;

        printf("Enter File Name To Write: ");
        scanf("%s", a);

        p = fopen(a, "w");

        fflush(stdin);

        printf("Enter ~ to exit from writing\n");
        printf("Start writing: \n");

        int ch=NULL;

        while(ch != '~'){
            ch = getchar();

            if(ch != '~'){

            fputc(ch, p);

        }

    }



        fclose(p);

        printf("\n\nSuccessfully Written\n");
}


void append(){

    char a[100];

    printf("Use .txt or any other extension to append\nEx: hello.txt\n\n");

system("COLOR 87");

        FILE *p;

        printf("Enter File Name To Append: ");
        scanf("%s", a);

        if(p == NULL){
        printf("Error");
        }

        p = fopen(a, "a");

        printf("Enter ~ to exit from writing\n");
        printf("Start writing: \n");

        int ch=NULL;

        while(ch != '~'){
            ch = getchar();

            if(ch != '~'){

            fputc(ch, p);

        }

    }


        fclose(p);

        printf("\n\nSuccessfully Appended\n");

}
void clear(){
    system("cls");
    system("COLOR 07");
}

void dt(){
    time_t tt = time(NULL);
    printf("%s", ctime(&tt));
}

void startscreen(){
    system("cls");
    char a[100];

    printf("*************************************\n\n");
    printf("*********** Easy Terminal ***********\n\n");

    printf("Today Is ");
dt();

    printf("*************************************\n\n");


    printf("Welcome To 3a5y Terminal, A C Language Based Terminal \n\n");

    printf("Type \"help\" for All Commands !\n\n");
}

void removes(){
    char a[100];
    int m;

    printf("Enter a file name to remove: ");
    scanf("%s", a);

    m = remove(a);

    if(m == 0){
        printf("Successfully removed a file\n");
    }else{
        printf("Error in removing please check if the file exists in directory\n");
    }

}

void renames(){

    char a[100], b[100];
    int m;

    printf("Enter a file name to rename: ");
    scanf("%s", a);

    printf("\nEnter new name: ");
    scanf("%s", b);

    m = rename(a, b);

    if(m == 0){
        printf("Successfully renamed a file\n");
    }else{
        printf("Error in removing please check if the file exists in directory\n");
    }

}

void edit(){
    char a[100];
    printf("Warning: Close the editor to use Easy Terminal\n");
    printf("Use .txt or any other extension to edit\nEx: hello.txt\n\n");
    printf("Enter file name to edit: ");
    scanf("%s", a);

    system(a);

    printf("Successfully opened editing software\n");
}

void cdir(){
    char a[100];

    printf("Your Directory:\n");
    system("dir");
}

void copy(){

    char a[100], b[100];
    int c;
    FILE *p, *q;

    printf("Use .txt or any other extension to copy\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);
    printf("\nEnter copy destination file name: ");
    scanf("%s", b);

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    p = fopen(a, "r");
    q = fopen(b, "a");

    c = fgetc(p);
    while(c != EOF){
        fputc(c, q);
        c = fgetc(p);
    }

    fclose(p);
    fclose(q);

    printf("\nSuccessfully copied\n");
    }

}

void pyramid(){

int num;
    printf("Enter Row numbers: \n\n");
    scanf("%d", &num);

    int i, any, j = 0;
    for (i = 1; i <= num; ++i, j = 0) {
      for (any = 1; any <= num - i; ++any) {
         printf("  ");
      }
      while (j != 2 * i - 1) {
         printf("* ");
         ++j;
      }
      printf("\n");
   }


}

void cal(){

char op;
     float num1,num2;

     printf("-Enter 2 numbers like 1+2\n");
     printf("-you can only use these arithmetic operations( + - * / )\n");

     printf ("\n Enter your operation here: ");
     scanf("%f%c%f",&num1,&op,&num2);

     switch (op)
     {
         case '+':
         printf ("\tResult: %.2f",num1+num2);
         break;
         case '-':
         printf ("\tResult: %.2f",num1-num2);
         break;
         case '*':
         printf ("\tReslt: %.2f",num1*num2);
         break;
         case '/':
         printf ("\tResult: %.2f",num1/num2);
         break;
         default:
         printf("\n invalid inputs");
     }


}

void cknow(){

    char a[100], cha;
    int c, count=0;
    FILE *p;

    printf("Use .txt or any other extension to cknow\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);

    fflush(stdin);
    printf("\nEnter the character to search: ");
    scanf("%c", &cha);

    p = fopen(a, "r");

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    c = fgetc(p);
    while(c != EOF){
        if(c == cha){
            count++;
        }
        c = fgetc(p);
    }

    fclose(p);

    printf("No. of times %c repeated is = %d\n",  cha, count);
    }
}

void passwordcheck(){
    printf("Enter Your Password \n");
    char s[10];
int sy=0,cap=0,num=0,i;
scanf("%s",s);
printf("Password is %s\n",s);
if(strlen(s)>5 && strlen(s)<10)
{
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>65 && s[i]<91)
          cap++;
        else if(s[i]>48 && s[i]<57)
          sy++;
        else if(s[i]<97 || s[i]>123)
          num++;
    }
    if(sy==0 || cap==0 || num==0){
        printf("Weak Password \n");
    printf("A strong password must be between 5-10 charcters and must contain atleast 1 or more symbols,capital letters,numbers\n");}
    else
      printf("Password is valid");
}
else
printf("Password is not between 5-10 characters");


}

void grade(){
 int marks;
   char grade;
   printf("enter the marks: ");
   scanf("%d",&marks);
   if(marks>79) grade='A';
   else if(marks>59) grade = 'B';
   else if(marks>49) grade = 'C';
   else if(marks>39) grade = 'D';
   else grade = 'F';

   printf("Your Grade is %c",grade);


}

void lknow(){

    char a[100], cha;
    int c, count=0;
    FILE *p;

    printf("Use .txt or any other extension to cknow\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);

    p = fopen(a, "r");

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    c = fgetc(p);
    while(c != EOF){
        if(c == '\n'){
            count++;
        }
        c = fgetc(p);
    }

    fclose(p);

    printf("No. of lines = %d\n", count);
    }

}

void ccount(){

    char a[100], cha;
    int c, count=0;
    FILE *p;

    printf("Use .txt or any other extension to ccount\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);

    p = fopen(a, "r");

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    c = fgetc(p);
    while(c != EOF){
        if(c != ' ' && c != '\n'){
            count++;
        }
        c = fgetc(p);
    }

    fclose(p);

    printf("No. of characters in file is = %d\n", count);
    }
}

void gcd(){
    int i, gcd, a, b;

    printf("Enter two numbers (by pressing enter):\n");
    scanf("%d %d", &a, &b);

    for(i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i == 0){
            gcd = i;
        }
    }

    printf("GCD = %d\n", gcd);
}

void lcm(){
    int i, gcd, lcm, a, b;

    printf("Enter two numbers (by pressing enter):\n");
    scanf("%d %d", &a, &b);

    for(i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }

    lcm = (a*b)/gcd;

    printf("LCM = %d\n", lcm);
}

void tconv(){

    int temp, cases;
    float op;

    printf("Temperature Conversion Program\n");

    printf("\nPress 1 =  Celsius    -  Kelvin\n");
    printf("Press 2 =  Celsius    -  Fahrenheit\n");
    printf("Press 3 =  Kelvin     -  Fahrenheit\n");
    printf("Press 4 =  Kelvin     -  Celsius\n");
    printf("Press 5 =  Fahrenheit -  Celsius\n");
    printf("Press 6 =  Fahrenheit -  Kelvin\n");

    printf("\nType: ");
    scanf(" %d", &cases);

    printf("\nType temperature: ");
    scanf(" %d", &temp);

    printf("\nConversion: \n");

    switch(cases){
    case 1:
        op = temp + 273.15;
        printf("C - K = %f\n", op);
        break;

    case 2:
        op = (temp * 9/5) + 32;
        printf("C - F = %f\n", op);
        break;

    case 3:
        op = (temp - 273.15) * 9/5 + 32;
        printf("K - F = %f\n", op);
        break;

    case 4:
        op = temp - 273.15;
        printf("K - C = %g\n", op);
        break;

    case 5:
        op = (temp - 32) * 5/9;
        printf("F - C = %f\n", op);
        break;

    case 6:
        op = (temp - 32) * 5/9 + 273.15;
        printf("F - K = %f\n", op);
        break;

    default:
        printf("Type Only The Numbers Shown On The Screen\n");

    }
}

void evalue(){
float e = 0;
int n,i;
    for(n=0; n<10; n++) {

        int f = 1;

        for(i=2; i<=n; i++) f *= i;

        e += 1.0/f;
    }

    printf("e = %f", e);


}

void fiber(){

int c,d ;
    printf("enter two Row Number( should be same )\n \n");
    scanf("%d",&c);
    scanf("%d",&d);

int i,j;
for(i=0;i<=c;i++){
    for(j=0;j<=c*c*2;j++){
    if(j%(c*2)==d||j%(c*2)==c+i)
    printf (" ");
    else printf ("$");
    }
    --d;
    printf ("\n");
}

}

void fibonacci(){
unsigned long int i, j,n,a=1,b=0,p;
printf("enter how many Line You want to print ");
  scanf("%lu",&p);
  for (i = 1; i <=p; i++) {
    for (j = 1; j <=p; j++)
    {
      if (j<=i){
      n=a+b;
      a=b;
      b=n;
        printf("%lu  ",n);
      } else {
        printf("  ");
      }
    }
    printf("\n");

}
}

void age(){

int month, day, year, monthT, dayT, yearT;
	printf("enter month date year (example: 07 14 1999 )");
	scanf("%2d%2d%4d", &month, &day, &year);
	time_t seconds = time(NULL);
	struct tm *now = localtime(&seconds);
	monthT = now->tm_mon + 1;
	dayT = now->tm_mday;
	yearT = now->tm_year + 1900;
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(yearT % 4 == 0){
	days[1] = 29;
	}

	int day_month = days[now->tm_mon];
	int month_before = days[month - 2];
	if(month == 0){
		month_before = days[12];
	}
	 printf("The current date is %02d-%02d-%d\n", monthT, dayT, yearT);
	if(month < monthT)
		if(day > dayT)
		printf("\nYou are %d years, %d months, and %d days old.", yearT - 1 - year, 12 - month + now->tm_mon - 1, dayT + month_before - day);
		else
		printf("\nYou are %d years, %d months, and %d days old.", yearT - 1 - year, 12 - month + now->tm_mon, dayT - day);

	else if(month > monthT)
		if(day > dayT)
		printf("\nYou are %d years, %d months, and %d days old.", yearT - 1 - year, 12 - month + now->tm_mon - 1, dayT + month_before - day);
		else
		printf("\nYou are %d years, %d months, and %d days old.", yearT - 1 - year, 12 - month + now->tm_mon, dayT - day);

	else
		if(day > dayT)
		printf("\nYou are %d years, %d months, and %d days old.", yearT - 1 - year, 11, day_month - (day - dayT));
		else
		printf("\nYou are %d years, %d months, and %d days old.", yearT - year, 0, dayT - day);



}

void sroot(){


float sqrot, temp, n;
printf("enter base number\n");
scanf("%f", &n);
temp=0;
sqrot=n/2;
while(temp!=sqrot){
    temp= sqrot;
    sqrot= ((n/temp)+temp)/2;
}
printf ("square root: √(%f)= %f", n, sqrot );

}




void help(){

     int cases;
    float op;

    printf("Welcome to All Commands  Section \n");

    printf("\nPress 1 =  Easy Terminal Basic \n");
    printf("Press 2 =  Easy Office \n");
    printf("Press 3 =  Easy math solver \n");
    printf("Press 4 =  Easy cyber \n");
    printf("Press 5 =  Easy Graphics \n");

printf("\nPress Number : ");
    scanf(" %d", &cases);

    switch(cases){
    case 1:
      {
         printf("\n");
    printf("Easy Terminal Basic commands :\n\n");
   printf("clr    >>> To clear the screen\n");
    printf("dt     >>> To show date and time\n");
    printf("stscr  >>> To show start screen\n");
    printf("cdir   >>> To see the directory(location) and files\n");
}
      break;

    case 2:
        {
        printf("\n");
    printf("You can enter the following commands for Easy Office:\n\n");
    printf("write  >>> To write to a file\n");
    printf("read   >>> To read from a file\n");
    printf("append >>> To append a file\n");
    printf("remove >>> To remove a file\n");
    printf("rename >>> To rename a file\n");
     printf("edit   >>> To edit a file\n");
      printf("copy   >>> To copy one file to new file or append to a existing file\n");
    printf("cknow  >>> To know how many time(s) a character repeated in file\n");
    printf("lknow  >>> To know how line(s) are there in a file\n");

}

        break;

    case 3:
       printf("\n");
    printf("You can enter the following commands for math solver:\n\n");
    printf("calc   >>> To Run A Simple Calculator ");
    printf("gcd    >>> To perform GCD of numbers\n");
    printf("lcm    >>> To perform LCM of numbers\n");
    printf("tconv  >>> To convert temperatures\n");
     printf("grade  >>> To find your pass grade \n");
  printf("evalue >>> To compute e(log) value \n");
  printf("fib >>> To print Fibonacci series Pattern \n");
   printf("age >>> To calculate age Perfectly  \n");
       printf("sroot >>> To calculate square root  Perfectly  \n");

        break;

    case 4:
        printf("\n");
    printf("You can enter the following commands for Easy cyber:\n\n");

  printf("passwordcheck  >>> Check Your password  \n");
        break;

    

    case 5:
         printf("\n");
    printf("You can enter the following commands for Easy Graphics:\n\n");
    printf("pyramid >>> Make a Pyramid Design on terminal");
   printf("cube3D  >>> Make Beautiful 3D cube On terminal  \n");
   printf("fiber  >>> Make Beautiful optical Fiver signal (single mode) On terminal  \n");
        break;

    default:
        printf("Type Only The Numbers Shown On The Screen\n");

    }


}

void exits(){
    exit(1);
}

