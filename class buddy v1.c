#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 500  	// Max length of each Array


void copy(char saved_lines[], char current_line [])  				//copy the current_line to the next x-array 
{
	int i;
	
	i = 0;
	while ((saved_lines[i] = current_line[i]) != '\0')
		++i;
}

int main()
{
	int options;
	int line_count;
	char current_line [MAX_LENGTH];
	char saved_lines [100][MAX_LENGTH];
		
	options = 0;
	line_count = 0;
	
	while (1) {	
		printf("\n1 -- input new info\n2 -- print infos\n3 -- exit programm\n");			
		scanf("%d", &options);
		if (options == 1) {								//registering the input and saving each line to a new y-coordinand in array
			printf("input mode -- don't start with nummber :( *feature coming soon\n-2 to exit\n\n");
			while (fgets(current_line, sizeof(current_line), stdin) != NULL) {
			copy(saved_lines[line_count], current_line);
			scanf("%d",  &options);
			++line_count;
				if (options == -2){
					break;
				}
			}
		}
		if (options == 2) {
			options = line_count;								//holds the line_count
				while (line_count >= 0) {
				printf("%s\n", saved_lines[line_count]);				//print allinputs
				--line_count;
				}
				line_count = options;							//gives back the line_count
		}		
		if (options == 3) {												
			printf("\nSave?\n1 -- Yes\n2 -- No\n\n");
			scanf("%d", &options);
				if (options == 1) {	
				FILE *file = fopen("Study Buddy - REMANE ME.txt", "w");  // Opens Text file
					if (file == NULL) {
						perror("Error opening file");
						return 1;
					}
					for (int y = 0; y < line_count; y++) {				//Prints output to the file
						fprintf(file, "%s", saved_lines[y]);
					}
					fclose(file);
					printf("\nWoohoo!! Keep it up, you got this... \n\n<3\n");
					return 0;
				}
			if (options == 2) {								//close program
				printf("\nOPS...hopefully it wasn't important!!! Now it's gone forever ;)\n");
				return 0;
			}
		}
	}
return 0;
}
