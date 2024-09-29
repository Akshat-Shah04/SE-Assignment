#include <stdio.h>
// Ques 27
float daysToMonths(float days){
	return days/30;
}
// Ques 28
float yearsToDays(float n){
	return n*365; // Ques 30
}
float yearsToMonths(float n){
	return n*12;
}
// Ques 29
float minToSec(float n){
	return n*60;
}

float minToHours(float n){
	return n/60;
}
// Ques 30
float daysToYears(float n){
	return n/365;
}
// Ques 31
float kiloToMeter(float n){
	return n*1000;
}

int main() {
   
	float days,years;
	float min, kilo;

	printf("Enter days : ");
	scanf("%f",&days);
	printf("Enter year : ");
	scanf("%f",&years);
	printf("Enter minutes : ");
	scanf("%f",&min);
	printf("Enter the weight in kilometer :");
	scanf("%f",&kilo);
	
	
	printf("\n%.2f Days = %.2f Months",days,daysToMonths(days));
	printf("\n%.2f Years = %.2f Months",years,yearsToMonths(years));
	printf("\n%.2f Days = %.2f Years",days,daysToYears(days));
	printf("\n%.2f Years = %.2f Days",years,yearsToDays(years));
	printf("\n%.2f Minutes = %.2f seconds",min,minToSec(min));
	printf("\n%.2f Minutes = %.2f Hours",min,minToHours(min));
	printf("\n%.3f Kilometer = %.1f meters",kilo,kiloToMeter(kilo));
    return 0;
}


