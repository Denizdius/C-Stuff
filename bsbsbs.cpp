#include<stdio.h>

int main()
{
	int an_1;
	int an_2;
	int an;
	int n;
	int n_last;
	an_1 = 1;
	an_2 = 1;
	n = 2;

	n = 2;
	n_last = 5;
	
	do {
	an = an_1 + an_2;
	printf("\n a%d = %d", n, an);
	an_2 = an_1;
	an_1 = an;

	n = n + 1;




} while (n <= n_last);


}

