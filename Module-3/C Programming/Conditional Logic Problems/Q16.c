#include<stdio.h>
int main() {
	float cel;
	printf("Enter the temperature (in Celsius) : ");
	scanf("%f",&cel);
	
	if(cel<0) {
		printf("Its Freezing weather");
	}
	else if(cel>=0 && cel<10) {
		printf("Its very cold weather");
	}
	else if(cel>=10 && cel<20) {
		printf("Its cold weather");
	}
	else if(cel>=20 && cel<30) {
		printf("Its normal weather");
	}
	else if(cel>=30 && cel<40) {
		printf("Its hot weather");
	}
	else{
		printf("Its very hot weather");
	}
	
	return 0;
}



// Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
// Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
