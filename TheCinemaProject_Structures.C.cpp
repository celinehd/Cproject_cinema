#define _CRT_SECURE_NO_WARNINGS

//Celine Houbod
//Welcome to the MilkyWayCinema's managing program.
// This program assists with reserving tickets or adding showtimes to the each auditorium.
// Instructions will assist you through using this program.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct MV
{
	char TitleOfTheMovie[30];
	int DurationInMinutes;
	char Genre[20];
	char SummaryOftheMovie[1000];
	char Cast[100];
};

struct ST
{
	MV Movie;
	int NumberOfAvailableSeats;
	char StartTime[5];
	char EndTime[5];
	char Date[10];
};

struct Auditorium
{
	int NumberOftheAuditorium;
	ST ShowTimes[10];
};