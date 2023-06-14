#include <stdio.h>
#include <math.h>

int main(){
	double number, hours, hours_2, min, min_2, sec;
	
	printf("Ingrese el numero ha convertir:\n");
	scanf("%lf", &number);
	
	hours = number / 3600;
	min = modf(hours, &hours_2);
	min = min * 60;
	sec = modf(min, &min_2);
	sec = sec * 60;
	printf("El numero equivale a:\n%.1f horas\n%.1f minutos\n%.1f segundos", hours_2, min_2, sec);
	
	return 0;
}

#include <stdio.h>

int main()
{
	int secs, mins, hours, sec, remaining;
	scanf("%d", &secs);
	
	hours = secs / 3600;
	remaining = secs % 3600;
	
	mins = remaining / 60; // 100 / 60 -> 1, 200 / 60 -> 3 ......
	sec = remaining % 60; // 100 % 60 -> 40, 200 % 60
	
	printf("hours %d, mins %d, secs %d", hours, mins, sec);

	return 0;
}
