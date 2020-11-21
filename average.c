#include <stdio.h>

int main(void) {
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	double c = (a+b)/2.0;
	
	// double c = (double)(a+b)/2;
	// double c = (a + b)/ 2.0;
	
	printf("O mesos oros tou: %d kai tou %d einai to %f\n", a, b, c);
	return 0;
}
