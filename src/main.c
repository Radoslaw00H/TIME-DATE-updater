// Time and date program

#include <stdint.h>	// Integers library
#include <stdio.h>	// Input/Output library

void DateTime(void) {
// A struct of dates
	struct Date {
	uint8 day;
	uint8 month;
	uint16 year;
	};
// A struct of time
	struct Time {
	uint8 hour;
	uint8 minute;
	uint8 second;
	uint8 milisecond;
	};
// Todays date
	struct Date today = {3, 3, 2026}
// Time now (i'll need to figure it out somehow
	struct Time now = {18, 49, 13, 2}
}

int main(void) {
	while(1) {
	// funkcje na potem
	}
return 0;
}