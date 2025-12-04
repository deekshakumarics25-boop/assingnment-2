#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int playerchoice, computerchoice;
	srand(time(NULL));   // SEED THE RANDOM NUMBER
	
	printf("Welcome to Rock,Paper,Scissors!\n");
	printf("choose your move:\n");
	printf("1.Rock\n");
	printf("2.Paper\n");
	printf("3.Scissors\n");
	
	printf("Enter your choice (1/2/3): ");
	scanf("%d", &playerchoice);
	
	if(playerchoice<1 || playerchoice>3){
		printf("Invalid choice.Please choose 1,2, or 3.\n");
		return 1;
	}
	
	computerchoice=rand()%3+1; //generate a choice for the computer
	
	printf("computer's choice: ");
	switch(computerchoice){
		case 1:
			printf("Rock\n");
			break;
		case 2:
			printf("Paper\n");
			break;
		case 3:
			printf("Scissors\n");
			break;
	}
	
	printf("Your choice: ");
	switch(playerchoice){
		case 1:
			printf("Rock\n");
		    break;
		case 2:
			printf("Paper\n");
			break;
		case 3:
			printf("Scissors\n");
			break;
	}
	
	if(playerchoice == computerchoice){
		printf("It's a tie!\n");
	}
	else if((playerchoice == 1 && computerchoice == 3)|| //Rock beats scissors
             (playerchoice ==2 && computerchoice == 1)||  //paper beats rock
             (playerchoice == 3 && computerchoice == 2))  //scissors beats paper
	    {
        printf("You win!\n");
     	}
    else{
    	printf("Computer wins!\n");
	}
	return 0;
}
