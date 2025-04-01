#include <stdio.h> 		//standard
#include <stdlib.h>		//standard utilites
#include <string.h>		//string manipulation
#include <time.h>		//timing utilites
#include <windows.h>		//Sleep funktion

#define MAX_LENGTH 500 				 // Define max length of a line
#define MAX_TESTLENTH 500

unsigned int seed;

unsigned int gen_seed()					// Random number seed generation
{
	clock_t start, end;
	int multip1;
	int result1;
	time_t current_time, current_time2;
	double rand;
	int a, b = 0;
	
		current_time = time(NULL);
		start = clock();
		multip1 = 2;

			while (multip1 < 420000109) {				//using a number that would take more than a second
				result1 = (420000109 % multip1);		
				multip1++;
			}
		end = clock(); 
		current_time2 = time(NULL);	
	
		
		int last_digit = current_time % 10;
		int last_digit2 = current_time2 % 10;
		
		rand = (last_digit + last_digit2) * ((double)(end - start));
		rand = rand / 305;

		int rando_number = rand;
		rando_number = (rando_number % 10);
		seed = (1664525 * seed + 1013904223) % (1U << 31);			  // 32-bit LCG
		return seed;
}
	
int rand_number(int min, int max) 				// Getting a random value between two values
{
	return min + (gen_seed() % (max - min + 1));
}

void clear_input_buffer() {						//clearing buffered inputs
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}


int main() 
{
	char current_line [MAX_LENGTH];
	char saved_lines [MAX_TESTLENTH][MAX_LENGTH];
	int test_seed [MAX_TESTLENTH];
	int line_count = 0;
	int options = 0;
	int question_amount = 0;
	int exam_timer = 0;
	
	while(1) {
		printf("\n1 -- import topics\n2 -- print ALL\n3 -- generate test\n9 -- Exit\n");
		scanf("%d", &options);
		if (options == 1) {
			printf("name of your file (with.txt):\t");
			scanf("%99s", current_line);
			FILE *file = fopen(current_line, "r"); 								 // Opening your files from class buddy
			if (file == NULL) {
				perror("Error opening file");
			}
			while (fgets(saved_lines[line_count], MAX_LENGTH, file) && line_count < MAX_TESTLENTH) {		//Saves the open txt file to saved_lines
				saved_lines[line_count][strcspn(saved_lines[line_count], "\n")] = '\0'; 			 // Remove newline
				line_count++;
			}
			fclose(file);	
		}
		if (options == 2) {
			options = line_count;									//holds the line_count
				while (line_count >= 0) {
					printf("%s\n", saved_lines[line_count]);				//print all inputs
					--line_count;
				}
			line_count = options;									//gives back the line_count
		}	
		if (options == 3) {
			printf("How many questions would you like?\n\n");
			scanf("%d", &question_amount);
			printf("Examination time(min):  ");							//Sets an exam timer
			scanf("%d", &exam_timer);
			printf("\nGenerating Test...\n");							//test generations
			for (int i = 0; i < question_amount; i++) {
				test_seed[i] = rand_number(1, line_count);					//+1 given positions 0 is blank
			}	
			printf("Test Generated... R u rdy?\npress and key\n");
			clear_input_buffer();  									//clears any buffered inputs
			getchar();
			for (int i = 0; i < question_amount; i++) {
			printf("\n%s\n", saved_lines[test_seed[i]]);
			Sleep(500);  
			}
			printf("\n");
			while (exam_timer > 0) {
				printf("\rMins Remaining: %d", exam_timer);
				fflush(stdout);
				Sleep(60000);
				exam_timer--;
			}
			printf("\rTimes upppp!!!               \n\n");
			printf("Would you like to save these exam questions\n1 -- Yes\n");
			scanf("%d", &options);
				if (options == 1) {									// Prints generated exam to .txt file
					FILE *file = fopen("EXAM#### - REMANE ME.txt", "w");  
					if (file == NULL) {
						perror("Error opening file");
					return 1;
						}
					for (int i = 0; i < question_amount; i++) {				
						fprintf(file, "%s\n", saved_lines[test_seed[i]]);
					}
					fclose(file);
					printf("\nWoohoo!! Keep it up, you got this... \nExamed Saved, rename before saved a new test\n\n<3\n");
				}
		}
		if (options == 9) {
			return 0;
		}
	}
    return 0;
}


