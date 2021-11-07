#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include "header.h"
#define size 30
#define _CRT_SECURE_NO_WARNINGS 

int main()
{
	char Player_1[size];
	char Player_2[size];
	char* winner;
	// Welcome box
	printf("------------------------------------\n");
	printf("Welcome to Rock, Paper and Scissor ! \n");
	printf("------------------------------------\n\n");
	printf("Player 1 : Choose your shape\n");
	scanf_s("%s", Player_1, 30);
	printf("------------------------------------\n\n");
	printf("Player 2 : Choose your shape\n");
	scanf_s("%s", Player_2, 30);
	printf("------------------------------------\n\n");
	winner = game(Player_1, Player_2);
	printf("Here's your Result\n");
	printf("%s\n", winner);
	printf("------------------------------------\n\n");
	return 0;
}

char* game(char plyr1[], char plyr2[])
{

	char* winner;
	winner = (char*)malloc(30 * sizeof(char));
	// Condition 1 - Paper and Scissor
	if (strcmp(plyr1, "Paper") == 0 && strcmp(plyr2, "Scissor") == 0)
	{
		strcpy_s(winner, 30, "Player_2");
	}
	// Condition 2 - Paper and Rock
	else if (strcmp(plyr1, "Paper") == 0 && strcmp(plyr2, "Rock") == 0)
	{
		strcpy_s(winner, 30, "Player_1"); // Here, there was a mistake.
	}
	// Condition 3 - Paper and Paper
	else if (strcmp(plyr1, "Paper") == 0 && strcmp(plyr2, "Paper") == 0)
	{
		strcpy_s(winner, 30, "Draw");
	}
	// Condition 4 - Scissor and Rock
	else if (strcmp(plyr1, "Scissor") == 0 && strcmp(plyr2, "Rock") == 0)
	{
		strcpy_s(winner, 30, "Player_2");
	}
	// Condition 5 - Scissor and Paper
	else if (strcmp(plyr1, "Scissor") == 0 && strcmp(plyr2, "Paper") == 0)
	{
		strcpy_s(winner, 30, "Player_1");
	}
	// Condition 6 - Scissor and Scissor
	else if (strcmp(plyr1, "Scissor") == 0 && strcmp(plyr2, "Scissor") == 0)
	{
		strcpy_s(winner, 30, "Draw");
	}
	// Condition 7 - Rock and Paper
	else if (strcmp(plyr1, "Rock") == 0 && strcmp(plyr2, "Paper") == 0)
	{
		strcpy_s(winner, 30, "Player_2"); // Here, there was also a mistake.
	}
	// Condition 8 - Rock and Scissor
	else if (strcmp(plyr1, "Rock") == 0 && strcmp(plyr2, "Scissor") == 0)
	{
		strcpy_s(winner, 30, "Player_1");
	}
	// Condition 9 - Rock and Rock
	else if (strcmp(plyr1, "Rock") == 0 && strcmp(plyr2, "Rock") == 0)
	{
		strcpy_s(winner, 30, "Draw");
	}
	// Invalid case
	else
	{
		strcpy_s(winner, 30, "Invalid");
	}
	return (char*)winner;

}

