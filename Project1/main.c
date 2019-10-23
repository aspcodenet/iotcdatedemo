#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void main()
{
	time_t justNu = time(NULL);
	struct tm* datum = localtime(&justNu);
	printf("År:%d",datum->tm_year+1900);
	if (datum->tm_mon +1 == 10)
	{
		printf("Stackars oss...");
	}
	if (datum->tm_wday == 3)
	{
		printf("Halfway there");
	}
	else if (datum->tm_wday == 5)
	{
		printf("Finally");
	}

	struct tm stefansBirthday;
	stefansBirthday.tm_year =  72;
	stefansBirthday.tm_mon = 7;
	stefansBirthday.tm_mday = 3;
	stefansBirthday.tm_hour = 0;
	stefansBirthday.tm_min = 0;
	stefansBirthday.tm_sec = 0;



	time_t stefansTime = mktime(&stefansBirthday);

	stefansBirthday.tm_mon += 8;
	mktime(&stefansBirthday);


	stefansBirthday.tm_mday = stefansBirthday.tm_mday - 8;
	mktime(&stefansBirthday);


	printf("År:%d", stefansBirthday.tm_year + 1900);
	printf("Mån:%d", stefansBirthday.tm_mon + 1);
	printf("Dag:%d", stefansBirthday.tm_mday);


	getch();


}
