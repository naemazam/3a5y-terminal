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

    printf("3a5y-@localhost--$ ");
    fflush(stdin);
    scanf("%s", a);

    if(strcmp(a, "read") == 0){

        read();

    }else if(strcmp(a, "write") == 0){

        write();

    }else if(strcmp(a, "append") == 0){

        append();

    }else if(strcmp(a, "clr") == 0){

        clear();

    }else if(strcmp(a, "help") == 0){

        help();

    }else if(strcmp(a, "dt") == 0){

        dt();

    }else if(strcmp(a, "stscr") == 0){

        startscreen();

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

    }else if(strcmp(a, "ccount") == 0){

        ccount();

    }else if(strcmp(a, "gcd") == 0){

        gcd();

    }else if(strcmp(a, "lcm") == 0){

        lcm();

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
    printf("Nikhil Tech Terminal\n\n");

    dt();
    printf("Welcome To Nikhil Terminal\n");
    printf("Type \"help\" for more things!\n\n");
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


void help(){
    printf("\n");
    printf("You can enter the following commands:\n\n");
    printf("write  >>> To write to a file\n");
    printf("read   >>> To read from a file\n");
    printf("append >>> To append a file\n");
    printf("remove >>> To remove a file\n");
    printf("rename >>> To rename a file\n");
    printf("clr    >>> To clear the screen\n");
    printf("dt     >>> To show date and time\n");
    printf("stscr  >>> To show start screen\n");
    printf("edit   >>> To edit a file\n");
    printf("cdir   >>> To see the directory(location) and files\n");
    printf("copy   >>> To copy one file to new file or append to a existing file\n");
    printf("cknow  >>> To know how many time(s) a character repeated in file\n");
    printf("lknow  >>> To know how line(s) are there in a file\n");
    printf("gcd    >>> To perform GCD of numbers\n");
    printf("lcm    >>> To perform LCM of numbers\n");
    printf("tconv  >>> To convert temperatures\n");


    printf("exit   >>> To exit\n");
    printf("\n");
}

void exits(){
    exit(1);
}