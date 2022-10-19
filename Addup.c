# include <stdio.h>
 main(){
   int a, b, c, sum;

   printf("Welcome to this simple addition calculator.\n");
   printf("Please enter all 3 numbers and press ENTER: ");
    scanf("%d%d%d", &a, &b,&c);
    sum = a + b + c;
    printf ("The answer is %d", sum);
    printf("\nThank you!");
 }
