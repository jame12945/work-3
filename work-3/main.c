#include<stdio.h>
#include<math.h>
int i;
int x;
int sum;

int main() {

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &x);

		if (x < 0)
		{

			break;
		}

	}


	printf("%d\n", i);

	printf("End of the program");
	return 0;



}