#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);
void swap(int *p, int *q);
int *find_largest(int a[], int n);
void split_date(int day_of_year, int year, int *month, int *day);
void find_two_largest(int a[], int n, int *largest, int *second_largest);
void split_time(long total_sec, int *hr, int *min, int *sec);


int main(void)
{
	int hr, min, sec, total_sec = 7812;
	split_time(total_sec, &hr, &min, &sec);
	printf("%d %d %d\n", hr, min, sec);

	int day_of_year = 423, year, month, day;
	split_date(day_of_year, year, &month, &day);
	printf("%d %d\n", month, day);

	int a[5] = {1, 2, 3, 4, 5};
	int n = 5;
	int largest, second_largest;
	find_two_largest(a, n, &largest, &second_largest);
	printf("%d %d\n", largest, second_largest);

	printf("%d", *find_largest(a, n));
}



void avg_sum(double a[], int n,  double *avg, double *sum)
{
        int i;

        *sum = 0.0;
        for (i = 0; i < n; i++)
                *sum += a[i];
        *avg = *sum / n;
}

void swap(int *p, int *q)
{
        int temp;
        temp = *p;
        *p = *q;
        *q = temp;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
        *hr = total_sec / 3600;
        total_sec = total_sec % 3600;
        *min = total_sec / 60;
        total_sec = total_sec % 60;
        *sec = total_sec;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
        *largest = a[0];
        *second_largest = a[0];
        for     (int i = 0; i < n; i++)
                if (a[i] > *largest)
                        *largest = a[i];
        for (int i = 0; i < n; i++)
                if (a[i] > *second_largest && *largest > a[i])
                        *second_largest = a[i];
}

void split_date(int day_of_year, int year, int *month, int *day)
{
        year =
        *month = day_of_year / 31;
        day_of_year = day_of_year % 31;
        *day = day_of_year;
}

int *find_largest(int a[], int n)
{
        int large = 0;
        int *p;
        for (int i = 0; i < n; i++)
                if (large < a[i])
                        p = &a[i];
        return p;
}


