# include <stdio.h>
 main(){
   int a, b, c, sum;

   printf("Welcome to this simple addition calculator.\n");
   printf("Please type the first number and press ENTER: ");
   scanf("%d", &a);
      printf("Please type the second number and press ENTER: ");
      scanf("%d", &b);
    printf("Please type the third number and press ENTER: ");
    scanf("%d", &c);

    sum = a + b + c;

    printf ("The answer is %d", sum);
    printf("\nThank you!");
 }
