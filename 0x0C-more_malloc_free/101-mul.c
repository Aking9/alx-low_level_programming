#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_int(char *str)
{
    /* Check if the given string represents a positive integer. */
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    if (atoi(str) <= 0) {
        return 0;
    }
    return 1;
}

int multiply(char *str1, char *str2) {
    /* Multiply two positive integers. */
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    return num1 * num2;
}

int main(int argc, char *argv[]) 
{
		if (argc != 3) {
        	printf("Error\n");
        	return 98;
	}

	if (!is_positive_int(argv[1]) || !is_positive_int(argv[2])) 
	{
		printf("Error\n");
		return 98;
	}

	int result = multiply(argv[1], argv[2]);
	printf("%d\n", result);

	return 0;
}
