#include <stdio.h>

int main()
{
	char name;
	int age;
	float height;
printf("Enter your name\n");
scanf("%s",&name);
printf("Enter your age:""\n");
scanf("%d", &age);
printf("Enter your height:");
scanf("%f",&height);
printf("Justine you are %d years old and %.1fm tall", age,height);
return 0;
}