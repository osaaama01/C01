#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct StudentMark {
char name[20];
char surname[20];
int midterm;
int final;
}STUDENT_MARK;


void GetDetails(STUDENT_MARK * student)
{
	char name [20];
	char surname[20];
	int  midterm = 0 ;
	int  final = 0;
	printf("Enter the name of student: ");
	scanf("%s", name);
	printf("\n");
	
	printf("Enter the sur name of student: ");
	scanf("%s", surname);
	printf("\n");
	
	printf("Enter the midterm marks of student: ");
	scanf("%d", &midterm);
	printf("\n");
	
	printf("Enter the final marks of student: ");
	scanf("%d", &final);
	printf("\n");
	
	strcpy(student->name , name);
	strcpy(student->surname , surname);
	student->midterm = midterm;
	student->final = final;
}

void Write_To_File(STUDENT_MARK * student)
{
	FILE *fptr;
	fptr =fopen("C:\\Users\\hp pc\\Desktop\\marks_180706308.txt","w");
	if(fptr == NULL)
	 {
      printf("Error in Opening File!");   
      exit(1);             
  	 }
    fprintf(fptr,"%s\n",student->name);
    fprintf(fptr,"%s\n",student->surname);
    fprintf(fptr,"%d\n",student->midterm);
    fprintf(fptr,"%d\n",student->final);
	fclose(fptr);
}


int main()
{
	STUDENT_MARK * student = NULL;
	student = malloc(sizeof(STUDENT_MARK));
	GetDetails(student);
	Write_To_File(student);
	return 0;
}
