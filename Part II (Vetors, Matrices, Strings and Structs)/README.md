C Programming Exercises
1. Write a program in C that declares and initializes an array of integers with 5 elements
The array should contain the values from 1 to 5. Display these values on the screen, one per line, in a "staircase" or diagonal format.

Example output:

markdown
Copiar
Editar
1  
 2  
  3  
   4  
    5  
2. Create a program in C that reads an array of 10 non-negative integers
The program should display:

The largest value
The smallest value
The sum of all values
The average of all values
Finally, print the array in reverse order, with values separated by commas.

Note: The program must ensure that negative values are not accepted or read.

3. Write a program in C that reads two integers: the number of rows (l) and columns (c)
Using these values, create a l x c matrix of integers. Then:

Read the elements of this matrix, indicating before each input which row and column the value corresponds to.
Display the matrix in a tabular format (with numbers in the same row separated by tabs).
4. Based on Exercise 3, after reading two integers (l and c), create two matrices of doubles
The first matrix should have dimensions l x c.
The second matrix should have dimensions c x l.
Read the values for both matrices, and calculate and display the result of their multiplication.

5. Create a program in C that reads a positive integer n
This value represents the size of a square matrix (n x n). Then:

Create an integer matrix of size n x n.
Read the values for the elements of this matrix.
Calculate and print the determinant of the matrix.
6. Create a program in C that reads a 5x5 integer matrix
Verify and inform whether all the elements in the matrix are prime numbers.

7. Create a program in C that reads a string of up to 100 characters
Verify and inform if the string is a palindrome (i.e., it reads the same backward as forward).

Examples:

ovo, arara, rever, asa, osso, ana.
8. Create a structure to represent a student in a course
This structure should contain:

An integer field for the student’s ID.
A string of up to 40 characters for the student’s name.
Three floating-point fields for the student’s grades.
A field for the average of these grades.
Write a program that:

Reads the data to populate the structure (ID, name, and grades).
Calculates and stores the average of the grades.
Displays the size of the structure in bytes.
9. Create a new data type (cadastro) based on a structure
This structure should include:

Full name (up to 50 characters).
Phone number (11 digits, including area code).
Address, with fields for: street, number, complement, neighborhood, city, state, and postal code.
Write a program that:

Asks the user for a positive integer N (greater than 0 and less than 6).
Creates an array of size N using the cadastro structure.
Reads the data for each entry in the array.
Displays all the entered data.
10. Create a structure to represent the coordinates of a point in a plane
This structure should include:

Fields for the X and Y positions.
Write a program that:

Declares and reads a point from the keyboard.
Calculates and displays the distance from this point to the origin (0,0).