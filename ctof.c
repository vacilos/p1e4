#include <stdio.h>

int main(void) {
	int c;
	double f;
	
	scanf("%d", &c);
	
	//c = (f - 32) * 5.0 / 9;
	f = c * (9.0 / 5) + 32;
	
	printf("Oi %d vathmoi C einai isoi me %f F\n", c, f);
	return 0;
}
