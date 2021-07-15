#include <stdio.h>

int add_by(int a);

int main(int argc, char* argv)
{
	int a = 4;
	for (int c = 0; c < 4; c++) 
	{
		printf("New value = %d \n", add_by(4));
	}
	return 0;
}

int add_by(int a)
{
	static int v = 2;
	// a += v;
	// v += 2;
	printf("Static 0x%x input 0x%x \n", &v, &a);
	// we could also print the address of the variable using a pointer so
	int *pv = &v;
	int *pa = &a;
	*pa += *pv;
	*pv += 2;
	printf("Static 0x%x input 0x%x \n", pv, pa);
	printf("Pointer pv points to %d and pointer pa points to %d \n", *pv, *pa);
	return a;
}
