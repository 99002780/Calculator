void addition();
void subtraction();
void multiplication();
void division();
int factorial();
void operations();

int main()
{
    char operator;

	int start;
	operations();
    printf("\n");
    printf("\n Please Enter an Operator : ");
    scanf("%c", &operator);
    switch(operator)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;
			case '!': factorial();
                      break;
            case '^': power();
                      break;
            case 'q': exit(0);
                      break;
        }
	return 0;
}
