#include <stdio.h>

int main(void) {
	int f;
	double c;
	
	scanf("%d", &f);
	
	c = (f - 32) * 5.0 / 9;
	
	printf("Oi %d vathmoi F einai isoi me %f C\n", f, c);
	return 0;
}
