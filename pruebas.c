#include <stdio.h>
//Comentarios
// Comentarios de una sola linea

//Comentario de varias lineas
/*the code below 
will print de words 
hello world*/
int main()
{
/*
//Salida

    printf("Hello, i am arce\n");
    printf("I am learning C.\n");

//Variables

    int myNum = 15;
    int myNum2;
    myNum2 = 15;
    printf("%d\n", myNum2); 
    float myFloatNum = 5.99;
    printf("%f\n", myNum2);
    char myLetter = 'C'; 
    printf("%c\n", myLetter);
    printf("Mi numero favorito es: %d\n", myNum);
    printf("Mi numero es %d y mi letra es %c\n", myNum, myLetter);

    int myNum3 = 15;
    int myOtherNum = 23;
    myNum3 = myOtherNum;
    printf("%d\n", myNum3);
    int x = 5;
    int y = 6;
    int sum = x + y; 
    printf("%d\n", sum);
    int x2, y2, z2;
    x2 = y2 = z2 = 50;
    printf("%d\n", x2 + y2 +z2);
    int minutesPerhour = 60;
    int m = 60;
    int studentID = 15;
    int studentAge =23;
    float studentFee = 75.25;
    char studentgrade = 'B';
    printf("identificacion del estudiante: %d\n", studentID);
    printf("Numero de edad: %d\n",studentAge);
    printf("Numero de tarifa: %f\n",studentFee);
    printf("Grado: %c\n",studentgrade);
    int length = 4;
    int width = 6;
    int area = length * width;
    printf("La longitud es: %d\n", length);
    printf("El ancho es: %d\n", width);
    printf("Area de el rectangulo: %d\n", area);

    //Tipos de datos

    float myFloatNum2 = 3.5;
    double myDoubleNum = 19.99;
    printf("%f\n", myFloatNum); 
    printf("%lf", myDoubleNum);
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';
    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);
  
    int rrd = 5;
    int rre = 2;
    int sum2 = 5 / 2;
    printf("%d", sum2); 
    float myFloat = 9;
    printf("%f", myFloat);
    int mynum = 9.99;
    printf("%d", mynum);
    float SUM = 5 / 2;
    printf("%f", SUM);


    //Constantes


    const int minutesPerHour = 60;
    const float PI = 3.14;


    //Operadores


    int myNum = 100 + 50;
    int sum1 = 100 + 50;       
    int sum4 = sum1 + 250;      
    int sum3 = sum2 + sum2; 
    int x = 10;
    x += 5;
    int c = 5;
    int y = 3;
    printf("%d", x > y);
    int myInt;
    float myFloat2;
    double myDouble;
    char myChar;
    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));


    //booleanos


    #include <stdbool.h>
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("%d", isProgrammingFun);   
    printf("%d", isFishTasty);   
    printf("%d", 10 > 9); 
    printf("%d", 10 == 10); 
    printf("%d", 10 == 15); 
    printf("%d", 5 == 55); 
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d", isHamburgerTasty == isPizzaTasty);
    int myAge = 25;
    int votingAge = 18;
    printf("%d", myAge >= votingAge);
   int myAge2 = 25;
   int votingAge2 = 18;
if (myAge >= votingAge) 
{
  printf("Edad suficiente para votar");
} 
else 
{
  printf("Edad no suficiciente para votar");
}


//if and else


if (20 > 18) 
{
  printf("20 es mayor que 18");
}
int w = 20;
int r = 18;
if (x > y) {
  printf("w es mayor que r");
}
int time = 20;
if (time < 18) 
{
  printf("Buen dia");
}
else 
{
  printf("Buenas noches");
}


int time2 = 22;
if (time2 < 10)
{
  printf("Buenos dias");
}
 else if (time2 < 20) 
{
  printf("Buen dia");
} 
else 
{
  printf("buenas noches");
}


int doorCode = 1337;

if (doorCode == 1337) 
{
  printf("Codigo correcto\nla puerta esta abierta");
} 
else 
{
  printf("Codigo incorrecto \nla puerta no se abrio");
}


int myNUm = 10; 
if (myNUm > 0) {
  printf("El valor es un numero positivo");
} else if (myNUm < 0) {
  printf("The value is a negativo");
} else {
  printf("el valor es 0.");
}


//Switch


int day = 4;
switch (day) {
  case 1:
    printf("Lunes");
    break;
  case 2:
    printf("Martes");
    break;
  case 3:
    printf("Miercoles");
    break;
  case 4:
    printf("Jueves");
    break;
  case 5:
    printf("Viernes");
    break;
  case 6:
    printf("Sabado");
    break;
  case 7:
    printf("Domingo");
    break;
    default:
   printf("Esperando con hasta que llegue el fin de semana");
}


  //While bucle



   int i = 0;
   while (i < 5) {
   printf("%d\n", i);
   i++;
}
int countdown = 3;

while (countdown > 0) {
  printf("%d\n", countdown);
  countdown--;
}
printf("Feliz año nuevo!!\n");
int dice = 1;
while (dice <= 6) {
  if (dice < 6) {
    printf("No Yatzy\n");
  } else {
    printf("Yatzy!\n");
  }
  dice = dice + 1;
}


//For bucle


int i2;
for (i2 = 0; i2 < 5; i2++) 
{
  printf("%d\n", i);
}
for (i = 0; i <= 10; i = i + 2) 
{
  printf("%d\n", i);
}
int v, j;


for (v = 1; v <= 2; ++v) {
  printf("Outer: %d\n", v);  

  
  for (j = 1; j <= 3; ++j) {
    printf(" Inner: %d\n", j);  
  }
}
int number = 2;
int i3;
for (i3 = 1; i3 <= 10; i3++) {
  printf("%d x %d = %d\n", number, i, number * i);
}
return 0;

//Break y continue
int i4;

for (i4 = 0; i4 < 10; i4++) {
  if (i4 == 4) {
    break;
  }
  printf("%d\n", i4);
}
int i5;

for (i5 = 0; i5 < 10; i5++) {
  if (i5 == 4) {
    continue;
  }
  printf("%d\n", i5);
}
int i6 = 0;

while (i6 < 10) {
  if (i6 == 4) {
    break;
  }
  printf("%d\n", i6);
  i6++;
}
int i7 = 0;
while (i7 < 10) {
  if (i7 == 4) {
    i7++;
    continue;
  }
  printf("%d\n", i7);
  i7++;
}


//matrices


int myNumbers[] = {25, 50, 75, 100};
printf("%d", myNumbers[0]);
int myNumbers2[] = {25, 50, 75, 100};
myNumbers2[0] = 33;
printf("%d", myNumbers2[0]);
int myNumbers[] = {25, 50, 75, 100};
int i8;
for (i8 = 0; i8 < 4; i8++) {
  printf("%d\n", myNumbers[i8]);
}
int myNumbers3[4];
myNumbers3[0] = 25;
myNumbers3[1] = 50;
myNumbers3[2] = 75;
myNumbers3[3] = 100;
int myNumbers4[] = {10, 25, 50, 75, 100};
printf("%lu", sizeof(myNumbers4));
int myNumbers4[] = {25, 50, 75, 100};
int i8;
for (i8 = 0; i8 < 4; i8++) {
  printf("%d\n", myNumbers4[i8]);
}
int myNumbers[] = {25, 50, 75, 100};
int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
int i9;
for (i9 = 0; i9 < length; i9++) {
  printf("%d\n", myNumbers[i9]);
}
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

float avg, sum = 0;
int i10;
int length = sizeof(ages) / sizeof(ages[0]);
for (int i11 = 0; i11 < length; i11++) {
  sum += ages[i11];
}
avg = sum / length;
printf("El promedio es: %.2f", avg);


//Matrices bidimencionales


int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
printf("%d", matrix[0][2]);
int matrix2[2][3] = { {1, 4, 2}, {3, 6, 8} };
matrix[0][0] = 9;
printf("%d", matrix2[0][2]);
int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i12, j2;
for (i12 = 0; i12 < 2; i12++) {
  for (j2 = 0; j2 < 3; j2++) {
    printf("%d\n", matrix[i12][j2]);
  }
}


//String


char greetings[] = "Hello World!";
printf("%c", greetings[0]);
char greetings2[] = "Hello World!";
greetings2[0] = 'J';
printf("%s", greetings2);
char carName[] = "Volvo";
for (int i13 = 0; i13 < 5; ++i13) 
{
  printf("%c\n", carName[i13]);
}
char carName[] = "Volvo";
int length = sizeof(carName) / sizeof(carName[0]);
int i14;
for (i14 = 0; i14 < length; ++i14) {
  printf("%c\n", carName[i14]); 
}
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);
char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[] = "Hello World!";
printf("%lu\n", sizeof(greetings)); 
printf("%lu\n", sizeof(greetings2)); 
char message[] = "Feliz de conocerte,";
char fname[] = "John";
printf("%s %s!", message, fname);
char txt[] = "Somos los tan llamados \"Vikingos\" del norte.";
char txt[] = "Es\'ta bien";
char txt[] = "El caracter \\ se llama backslash.";
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));
char alphabet2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet2));   
printf("%d", sizeof(alphabet2));   
char alphabet3[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet3));   
printf("%d", sizeof(alphabet3));   
char str1[20] = "Hello ";
char str2[] = "World!";
strcat(str1, str2);
printf("%s", str1);
char str3[20] = "Hello World!";
char str4[20];
strcpy(str3, str4);
printf("%s", str4);
char str5[] = "Hello";
char str6[] = "Hello";
char str7[] = "Hi";
printf("%d\n", strcmp(str5, str6));
printf("%d\n", strcmp(str5, str7));


//Entrada de usuario


int myNum4;
printf("Type a number: \n");
scanf("%d", &myNum4);
printf("Tu nombre es: %d", myNum4);
int myNum5;
char myChar;
printf("Type a number AND a character and press enter: \n");
scanf("%d %c", &myNum5, &myChar);
printf("Tu numero es: %d\n", myNum5);
printf("Tu caracter es: %c\n", myChar);
char firstName[30];
printf("Pon tu primer nombre: \n");
scanf("%s", firstName);
printf("Hola %s", firstName);
char fullName[30];
printf("Type your full name: \n");
fgets(fullName, sizeof(fullName), stdin);
printf("Hola %s", fullName);
//Direccion de memoria
int myAge3 = 43;
printf("%p",myAge3);
//Punteros
int myAge4 = 43;
printf("%d", myAge4);
printf("%p",myAge4);
int myAge5 = 43;
int* ptr = &myAge5;
printf("%d",myAge5);
printf("%p\n", &myAge5);
printf("%p\n", ptr);
int myNumbers5[4] = {25, 50, 75, 100};
int i15;
for (i15 = 0; i15 < 4; i15++) {
  printf("%d\n", myNumbers5[i15]);
}
int myNumbers6[4] = {25, 50, 75, 100};
printf("%lu", sizeof(myNumbers6));
int myNumbers7[4] = {25, 50, 75, 100};
printf("%p\n", (myNumbers7));
printf("%p\n", &myNumbers7[0]);
printf("%d\n", *myNumbers7);
printf("%d\n", *(myNumbers7 + 1));
printf("%d\n", *(myNumbers7 + 2));
int *ptr2 = &myNumbers7;
int i16;
for(i16 = 0;i16 < 4; i16++)
{
  printf("%d\n", *(ptr + 1));
}

int myNumbers8[4] = {25, 50, 75, 100};
*myNumbers8 = 13;
*(myNumbers8 +1) = 17;
printf("%d\n", *myNumbers8);
printf("%d\n", *(myNumbers8 +1));

*/
//Funciones


}









