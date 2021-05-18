#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct StudentMark {
char name[20];
char surname[20];
int midterm;
int final;
}STUDENT_MARK;


void append(char* s, char c) {
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}


void Read_File(STUDENT_MARK * student)
{
	char ch;
	char arr[100];
	FILE *fptr;
	fptr =fopen("C:\\Users\\hp pc\\Desktop\\marks_180706308.txt","r");
	int count = 1;

   // If file opened successfully, then print the contents
   if ( fptr )
      {
        while ( (ch = fgetc(fptr)) != EOF )
       {
       		if(ch == '\n')
       		{
       			if(count == 1)
       			{
       				strcpy(student->name , arr);
       				memset(arr, 0, 100);
				}
				else if(count == 2)
       			{
       				strcpy(student->surname , arr);
       				memset(arr, 0, 100);
				}
				else if(count == 3)
       			{
       				student->midterm = atoi(arr);
       				memset(arr, 0, 100);
				}
				else
				{
					student->final = atoi(arr);
					memset(arr, 0, 100);
				}
				count++;
			}
			else
			{
				append(arr, ch); 
			}
                  
       }
       
    }
   else
  	{
     printf("Failed to open the file\n");
    }
    fclose(fptr);

}

void Average_Calculator(STUDENT_MARK * student)
{
	float average = (student->midterm * 0.4 + student->final * 0.6);
	printf("The student %s %s's midterm mark is %d, final mark is %d and his/her average is %.2f",student->name,student->surname,student->midterm,student->final,average);
}

int main()
{
	STUDENT_MARK * student = NULL;
	student = malloc(sizeof(STUDENT_MARK));
	Read_File(student);
	printf("%d",student->final);
	Average_Calculator(student);
	return 0;
}
