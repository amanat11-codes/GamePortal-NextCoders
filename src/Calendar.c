#include <stdio.h> 
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>


int startCalendar(){
	char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	   int daysInmonths[]={31,28,31,30,31,30,31,31,30,31,30,31};
		int i,j,totalDays,weekDays=0,space=0,year;
		printf("Enter your favourite year:");
		scanf("%d",&year);
		printf("\n\n********** Welcome to %d ************\n\n",year);

		//leapear check
		 if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        daysInmonths[1] = 29;
	}
		//get the first day of the year
	     weekDays=((year-1)*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;

		for(i=0;i<=11;i++){
			printf("\n---------------- %s ----------------\n",months[i]);
			printf("\n  sun  mon   tue  wed  thu  fri  sat\n\n");
		for(space=1;space<=weekDays;space++){
			printf("     ");
			
		}
		totalDays=daysInmonths[i];
			for(j=1;j<=totalDays;j++){
				printf("%5d",j);
				weekDays++;
				if(weekDays>6){
					weekDays=0;
					printf("\n");
				}
			}
			
		}
		
		
 return 0;
}
