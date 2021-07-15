#include <stdio.h>

int *even_odds(int *arr, unsigned count, int which);

int main(int argc, char* argv) 
{
	int my_nums[5] = {2, 3, 5, 6, 9};
	printf("Evens %d \n", *even_odds(my_nums, 5, 1));
	printf("Odds %d \n", *even_odds(my_nums, 5, -1));
	return 0;
}

int *even_odds(int *arr, unsigned count, int which)
{
	unsigned even_count = 0;
	unsigned odd_count = 0;
	static int evens[] = {};
	static int odds[] = {};

	for (int i = 0; i < count; i++)
	{
		if (arr[i] % 2 == 0) 
		{
			evens[even_count] = arr[i];
			even_count++;
		} else
		{
			odds[odd_count] = arr[i];
			odd_count++;
		}
	}

	// int filtered[][] = {evens, odds};
	if (which == 1) 
	{
		return evens;
	} else if (which == -1) 
	{
		return odds;
	}
}
