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
	
	/*Convert both times to a 24-hour format:
	6:30 AM → 06:30
	6:45 PM → 18:45
	Now, subtract:
	18:45 - 06:30 = 12 hours 15 minutes*/

	sunriseT = (sunriseH*60) + sunriseM;

	//CONVERTS HOURS INTO 24 HOURS FORMAT
	sunsetHour = sunsetH + 12;
	sunsetT = (sunsetHour*60) + sunsetM;

	dayT = sunsetT - sunriseT;

	printf("Sunrise time is %d min \n", sunriseT);
	printf("Sunset time is %d min \n" , sunsetT);
	printf("Day time is %d min ", dayT);

	return 0;
}
