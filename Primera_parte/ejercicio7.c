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
