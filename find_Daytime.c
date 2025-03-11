#include<stdio.h>
int main()
{
	int sunriseH, sunriseM, sunsetH, sunsetM, dayT, sunriseT, sunsetT, sunsetHour;

	printf("Sunrise Hour: ");
	scanf("%d", &sunriseH);
	printf("Sunrise Min: ");
	scanf("%d", &sunriseM);

	printf("Sunset Hour: ");
	scanf("%d", &sunsetH);
	printf("Sunset Min: ");
	scanf("%d", &sunsetM);

	sunriseT = (sunriseH*60) + sunriseM;

	sunsetHour = sunsetH + 12;
	sunsetT = (sunsetHour*60) + sunsetM;

	dayT = sunsetT - sunriseT;

	printf("Sunrise time is %d min \n", sunriseT);
	printf("Sunset time is %d min \n" , sunsetT);
	printf("Day time is %d min ", dayT);

	return 0;
}
