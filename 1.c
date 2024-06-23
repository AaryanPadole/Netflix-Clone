#include <stdio.h>
#include <math.h>
int count(int no)
{
    int count = 0;
    while (no > 0)
    {
        no = no / 10;
        count++;
    }
    return count;
}
void sum(int no)
{
    int sum = 0, rem;
    while (no > 0)
    {
        rem = no % 10;
        sum = sum + rem;
        no = no / 10;
    }
    printf("sum is %d", sum);
}
int factorial(int no)
{
    int fact = 1;
    while (no > 1)
    {
        fact = fact * no;
        no = no - 1;
    }
    return fact;
    // printf("factorial is %d", fact);
}
void Armstrong(int no)
{
    int n = count(no);
    int rem;
    int sum = 0;
    int copy = no;
    while (no > 0)
    {
        rem = no % 10;
        sum = sum + pow(rem, n);
        no = no / 10;
    }
    if (copy == sum)
    {
        printf(" %d is Armstrong number\n", copy);
    }
    // else
    // {
    //     printf("Not Armstrong number");
    // }
}
void fibo(int no)
{
    int a = 0, b = 1, c, i;
    printf("Fibonacci series is ");
    for (i = 0; i < no; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
void series1(int x, int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i) / i;
    }
    printf("sum = %d", sum);
}
void series2(int x, int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i) / factorial(i);
    }
    printf("sum = %d", sum);
}
void khuchbhi(int n)
{
    // int sum=0;
    // for (int i = 1; i <= n / 2; i++)
    // {

    //     printf("%d \t %d\n", i, (n - i));
    // }
    for (int i = 1, j = 10; i < j; i++, j--)
    {
        if (i == 3 && j == 8)
        {
            continue;
        }
        else{ printf("%d \t %d\n", i, j);}
    }
}
int main()
{
    int amt;
    int notes, non;
    int remain;
    khuchbhi(11);
    // printf("Enter the no.");
    // scanf("%d", &amt);

    // Armstrong(amt);
    // printf("\n");
    // count(amt);
    // sum(amt);
    // factorial(amt);

    // for(int i=0 ; i<pow(5,9); i++){
    //     Armstrong(i);
    // }
    
    // printf("enter the notes");
    // scanf("%d",&notes);
    // switch(notes){
    //     case 2000:
    //     non=amt/2000;
    //     printf("\nNumber of notes of 2000= %d\n",non);

    //      amt=amt%2000;
    //     case 500:
    //     non=amt/500;
    //     printf("Number of notes of 500= %d\n",non);
    //      amt=amt%500;

    //     case 100:
    //     non=amt/100;
    //     printf("Number of notes of 100= %d\n",non);
    //    amt=amt%100;
    //     case 50:
    //     non=amt/50;
    //     printf("Number of notes of 50= %d\n",non);
    //     amt=amt%50;
    //     case 20:
    //     non=amt/20;
    //     printf("Number of notes of 20= %d\n",non);
    //     amt=amt%20;
    //     case 10:
    //     non=amt/10;
    //     printf("Number of notes of 10= %d\n",non);
    //     amt=amt%10;
    // }

    return 0;
}