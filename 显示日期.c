#include <stdio.h>

int main(void)
{
	int week, month, day, year;
	
	printf("Enter date (ww/mm/dd/yy): ");
	scanf("%d /%d /%d /%d", &week, &month, &day, &year);
	
	printf("Dated this ", week);
	switch (week) {
		case 1: printf("����һ"); break;
		case 2: printf("���ڶ�"); break;
		case 3: printf("������"); break;
		case 4: printf("������"); break;
		case 5: printf("������"); break;
		case 6: printf("������"); break;
		case 7: printf("������"); break;
			}
	printf("%d", day);
	switch (day) {
		case 1: case 21: case 31:
			printf("st"); break;
		case 2: case 22:
			printf("nd"); break;
		case 3: case 23:
			printf("rd"); break;
		default: printf("th"); break;
    }
    printf(" day of ");
    
    switch (month) {
    	case 1: printf("January"); break;
    	case 2: printf("February"); break;
    	case 3: printf("March"); break;
    	case 4: printf("March"); break;
    	case 5: printf("May"); break;
    	case 6: printf("June"); break;
    	case 7: printf("July"); break;
    	case 8: printf("August"); break;
    	case 9: printf("September"); break;
    	case 10: printf("October"); break;
    	case 11: printf("November"); break;
    	case 12: printf("December"); break;
    } 
	
	printf(", 20%.2d.\n",year);
	return 0;
	} 
