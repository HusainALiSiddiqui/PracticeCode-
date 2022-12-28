#include <stdio.h>
#include <stdlib.h>
#define collumns 1

struct record{
	char fname[100];
	char lname[100];
};


int main(void){
	struct record *ptr;
	int i;
	int j;
	int rows;
  int b;
	
	
	
	//it asks for how many students ther are.
	printf("Please enter how many students there are: ");   
	scanf("%d",&rows);
	int grades[rows][collumns];
	int englishgrade[rows][collumns];
	printf("\n");
	
	ptr=(struct record*) malloc(rows*sizeof(struct record));



for( i=0;i<rows;i++){
  for(int j=0;j<collumns;j++){
  		printf("\nenter your first name\n");
	scanf("%s",(ptr+i)->fname);
      printf("\nenter your last name\n");
	scanf("%s",(ptr+i)->lname);

	printf("\n\nPlease enter the grades for the maths studnets:\n");
  	  scanf("%d",&grades[i][j]);
	printf("\nPlease enter the grades for the english studnets:\n");		
			scanf("%d",&englishgrade[i][j]);
		  }
	}


	  
  
	int sum1=0;

	float average1=0;
	for ( i = 0; i < rows; i++) {
		for(j=0;j<collumns;j++){
			sum1 += grades[i][j];
		}
	}
	
	average1 = sum1 / (rows );



	printf("\n\n");
	int max=0;
	for( i=0;i<rows;i++){
		for( j=0;j<collumns;j++){
			if(grades[i][j]>max){
			 max=grades[i][j];
			}
		}
	}


	
	
	int min=100;
	for( i=0;i<rows;i++){
		for( j=0;j<collumns;j++){
			if(grades[i][j]<min){
			 min=grades[i][j];
			}
			
		}
	}
	
	

	
	

	//average for english grades
	
	int sum2=0;
	double average2=0;
	for ( i = 0; i < rows; i++) {
		for ( j = 0; j < collumns; j++) {
			sum2 += englishgrade[i][j];
		}
	}
	
	average2 = sum2 / (rows);


 //maximum	
	int max2=0;
	
	for( i=0;i<rows;i++){
		for( j=0;j<collumns;j++){
			if(englishgrade[i][j]>max2){
			 max2=englishgrade[i][j];
			}
		}
	}
	
  //minimum
  
	int min2=100;
	for(i=0;i<rows;i++){
		for(j=0;j<collumns;j++){
			if(englishgrade[i][j]<min2){
			 min2=englishgrade[i][j];
			}
			
		}
	}

	
for(i=0;i<rows;i++){
	for (j=0;j<collumns;j++){
		printf("Student number:%d     first name:%s    Last name:%s   Math score:%d   English score:%d\n",i+1,(ptr+i)->fname,(ptr+i)->lname,grades[i][j],englishgrade[i][j]);
        b=i+1;
		printf("\n");
	}
	}
	printf("Math average:%f  Math Maximum:%d  Math Minimum:%d\n\n",average1,max,min);
	printf("English average:%f  English Maximum:%d  English Minimum:%d\n",average2,max2,min2);
	printf("\nThe total amount of students are: %d\n\n",b);
}
