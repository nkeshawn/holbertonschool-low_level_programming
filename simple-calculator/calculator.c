#include <stdio.h>

/**
 * main - prints a welcome line
 *
 * Return: always 0 (success).
 */

int main(void)
{
	int choice;
	int valid;
	int a;
	int b;

	do {
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		scanf("%d", &choice);
		printf("Choice: %d\n", choice);

		valid = (choice >= 0 && choice <= 4);

		if (!valid)
			printf("Invalid choice\n");

	} while (!valid);

	if (choice == 0)
		printf("Bye!\n");

	if (valid)
	{
		printf("A: ");
		scanf("%d", &a);
		printf("B: ");
		scanf("%d", &b);
		switch (choice){
			case 1:
				printf("Result: %d\n", (a + b));
				break;
			case 2:
				printf("Result: %d\n", (a - b));
				break;
			case 3:
                                printf("Result: %d\n", (a * b));
				break;
                        case 4:
                                printf("Result: %d\n", (a / b));
				break;
		}
	}

	return (0);
}
