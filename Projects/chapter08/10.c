#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int hour, minute, minute_expressed;
	int departure[10] = {0, 480, 583, 679, 767, 840, 945, 1140, 1305, 10000};
	int arrival[10] = {0, 616, 712, 811, 900, 968, 1075, 1280, 1438, 10000};

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	minute_expressed = hour * 60 + minute;
	for (int i = 0; i < 8 ;i++){
		if((departure[i] + departure[i + 1]) / 2 < minute_expressed &&
		   minute_expressed < (departure[i + 1] + departure[i + 2]) / 2){
			printf("Closest departure time is %2.2d:%2.2d, arriving at %2.2d:%2.2d.", 
				(departure[i + 1] / 60), (departure[i + 1] % 60),
				(arrival[i + 1] / 60), (arrival[i + 1] % 60));
		}
	}

	return 0;
}
