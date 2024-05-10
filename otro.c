/*
int main()
{
    myFunction();
    for(int i17 = 0; i17 >= 3; i17++)
    {
       myFunction();
    }
    myFunction2("Liam");
    myFunction2("Jenny");
    myFunction2("Anja");

    myFunction3("Liam", 3);
    myFunction3("Jenny", 14);
    myFunction3("Anja", 30);

    int myNumbers[5] = {10, 20, 30, 40, 50};
    myFunction4(myNumbers);
    return 0;

    printf("Result is: %d", myFunction5(5, 3));
    return 0;

    int result = myFunction6(5, 3);
    printf("Result is = %d", result);

    int result2 = myFunction7(5, 3);
    printf("Result is = %d", result2);

    int result3 = sum(10);
    printf("%d", result3);
    return 0;


void myFunction()
{
    printf("ujajaja");
}
void myFunction2(char name[])
{
  printf("Hello %s\n", name);
}
void myFunction3(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}
void myFunction4(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
}
int myNumbers[5] = {10, 20, 30, 40, 50};
myFunction5(myNumbers);
int myFunction6(int x, int y) {
return x + y;
}

int myFunction7(int x, int y) {
  return x + y;
}


int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main2()
{
  
  #include <math.h>
  printf("%f", sqrt(16));
  printf("%f", ceil(1.4));
  printf("%f", floor(1.4));
  printf("%f", pow(4, 3));
}
*/
//Enumeraciones

enum Level
{
   LOW = 25,
   MEDIUM = 50,
   HIGH = 75
};
enum Level2
{
   LOW = 1,
   MEDIUM,
   HIGH
};
int main3() {
  enum Level myVar = MEDIUM;
  printf("%d", myVar);
  return 0;
  switch (myVar)
  {
  case 1:
  printf("Low level");
  break;
  case 2:
  printf("Medium level");
  break;
  case 3:
  printf("High level");
  break;
  }
}







