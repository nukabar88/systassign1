#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Read format line of CSV file into str[100]
void sortFile(char* sortBy, FILE* file){


    char line[1000];

    //reading the first row of column names
    fgets(line, 1000, file);
		
	Movie *ptr;
	Movie **movieList = (Movie **)malloc(MAX * sizeof(Movie *));
	int numOfMovies = 0;

	//Loops until scanf is unsuccessful/reaches EOF
	while (fgets(str, 1000, file))
	{
		ptr = (Movie *)malloc(sizeof(Movie));
		parseMovie(str, ptr);					
			movieList[numOfMovies] = ptr;		
			numOfMovies++;
	}

    fclose(file);
	
	//Mergesort list based off of field
	mergeSort(movieList, 0, numOfMovies-1, sortBy);
		

	}