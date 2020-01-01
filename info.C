#include <stdio.h>

struct cinema{
	int NumOfSalon;
	
	struct salon{
		int number_salon;
		
		struct sans{
		int empty_capacity;
		char start_time[5];
		char end_time[5];
		char date[10];
		
			struct film{
				int len_min;
				char name[30];
				char genre[20];
				char summary[1000];
				char cast[10][50];
	
			
			};
		};
	};
};
