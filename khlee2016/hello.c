#include <stdio.h>

int main() {
	/* i, sum is variable */
	int i;
	int sum = 0;
	/* sum = 1 + 2 + 3; */
	/* printf("Hello~ World %d\n", sum); */
	for ( i=1 ; i<=100 ; i++ )	{
		sum = sum + i;
	}
	printf("Hello~ World %d\n", sum);
}

