#include <stdio.h>

int main(int argc, char* argv)
{
	char pass[4] = "2143";
	int pass_;
	double pass__;
	long pass___;
	
	// converting the pass to an integer
	pass_ = atoi(pass);
	// converting pass to a float -> double
	pass__ = atof(pass);
	// converting pass to a long
	pass___ = atol(pass);

	// logging all of them
	
	printf("Integer : %d \n", pass_);
	printf("Double Float : %f \n", pass__);
	printf("Long integer : %d \n", pass___);
	return 0;
}
