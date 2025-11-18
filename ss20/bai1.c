#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
struct student{
	int age;
	char Name[50];
	char phoneNumber[50];
};
int main (){
	struct student student1={18,"Hoang","012345667889"
	};
	printf("($_$)\ntuoi %d\nten %s\nsdt %s", student1.age, student1.Name,student1.phoneNumber);
}
