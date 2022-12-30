#include <stdio.h>

int main()
{
	int pin1, pin2;
	printf("Enter you pin1 (****):");
	scanf_s("%i", &pin1);
	printf("Enter you pin2 (****):");
	scanf_s("%i", &pin2);
	if ((pin1 == 1234) && (pin2 == 4321)) {
		printf("Access alowed");
	}
	else {
		printf("Access denied");
	}
	return 0;
}