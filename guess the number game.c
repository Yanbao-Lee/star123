#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
	//initialization
	srand(time(0));
	int number =rand()%100+1;
	int n =0;
	int a =0;
	//do the guess
	printf("the random number has benn created, please take a guess.\n");
	scanf("%d", &a);
	while (a != number){
		n =n+1;
		if (a > number){
			printf("your guess is too big.\n");
		}
		else {
			printf("your guess is too small.\n");
		}
		printf("do another guess.\n");
		scanf("%d",&a);
		  
	}
	printf("your guess is right! you made %d guesses.", n);
	return 0;
	
	
 } 
