#include <stdio.h>
#include <stdbool.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
	int hour, minute, minute_expressed = 0;
	int departure_time, arrival_time;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	minute_expressed = hour * 60 + minute;
	find_closest_flight(minute_expressed, &departure_time, &arrival_time);
	printf("Closest departure time is %2.2d:%2.2d, arriving at %2.2d:%2.2d.",
	departure_time / 60, departure_time % 60,
	arrival_time / 60, arrival_time % 60);

	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
	int departure[10] = {0, 480, 583, 679, 767, 840, 945, 1140, 1305, 10000};
	int arrival[10] = {0, 616, 712, 811, 900, 968, 1075, 1280, 1438, 10000};

	for (int i = 0; i < 8 ;i++){
		if((departure[i] + departure[i + 1]) / 2 < desired_time &&
		   desired_time < (departure[i + 1] + departure[i + 2]) / 2){
			*departure_time = departure[i + 1];
			*arrival_time = arrival[i + 1];
		}
	}


}

