NOTE: Change the path in both the file according to your requirment.

FILE READING/WRITING IN C


Program-1
        •	I used the dynamic allocation of STUDENTS object in main method and passed it as by reference in the function to assign the values.
        •	I used the fopen in write mode only because in program 1, I only needed to write the content of my object to the file named as “marks_180706308.txt”. I used the                   separator “/n” to detect each attribute of my object so that I could be able to read the contents as well.
        •	After successfully writing the contents, I closed the pointer that I used from fopen method.
        •	The memory allocation for my object is dynamic. I could also allocate multiple instances dynamically by input or pre-defined, but in this problem, it wasn’t                       necessary so I created a single instance.

Program-2
•	I created a function named as “Read_File” which I passed an object of student in which the values are to be written after reading from the file.
•	The memory allocation for my object is dynamic in the main method.
•	The pointer only open the file in “r” mode so that nothing can be written or appended in the file.
•	I used a char pointer to read each character from my read file and then append it the array of char unless a ‘\n’ (new line) is not found. 
•	When the new line is found, the content is assigned to the object that is being passed by reference to the function.
•	A helper function is also used to append the character read from the file to the array of characters names as “arr”.
•	The Average_Calculator function is used to calculate the average and display the required output on the screen.
