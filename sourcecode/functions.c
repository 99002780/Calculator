void operations()
{
	printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ! symbol for Factorial \n");
    printf("Enter ^ symbol for power \n");
    printf("Enter q for exit \n\n");

}
void addition()
{
    float num1,num2,result=0;
    printf("Enter the num1 and num2");
    scanf("%f%f", &num1, &num2);
	result=num1+num2;
	printf("\n The result %.2f", result);

}

void subtraction()
{
	float num1,num2,result=0;
    printf("Enter the num1 and num2");
    scanf("%f%f", &num1, &num2);
	result=num1 - num2;
    printf("\n The result %.2f", result);
}
void multiplication()
{
	float num1,num2,result=0;
    printf("Enter the num1 and num2");
    scanf("%f%f", &num1, &num2);
	result=num1 * num2;
	printf("\n The result %.2f", result);
}
void division()
{
	float num1,num2,result=0;
    printf("Enter the num1 and num2");
    scanf("%f%f", &num1, &num2);
	result=num1 / num2;
	printf("\n The result %.2f", result);
}
int factorial()
{
	int fact=1,num,i=0;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nFactorial can't be found for negative");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}

int power()
{
double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}

