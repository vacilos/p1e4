#include <stdio.h>

int main(void) {
	double a;
	int b;
	
	printf("Dwse moy enan dekadiko kai enan akeraio:\n");
	scanf("%lf %d", &a, &b);
	printf("Prosthesi: %f\n", a+b);
	printf("Afairesi: %f\n", a-b);
	printf("Pollaplasiasmos: %f\n", a*b);
	printf("Diairesi: %f\n", a/b);
	//1. den epitrepetai i praksi % giati o a einai dekadikos
	//2. printf("Ypoloipo Diairesis: %d", (int)a % b);
	//3. int c = a;
	//3. printf("Ypoloipo diairesis: %d", c%b);
	printf("Ypoloipo Diairesis: %d\n", (int)a % b);
	return 0;
}
