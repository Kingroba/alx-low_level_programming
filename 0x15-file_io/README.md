##0x15. C - File I/O
*In C programming language, file I/O (Input/Output) refers to the operations that are performed on files, such as reading from or writing to a file. The file I/O operations are performed using standard library functions defined in the header file "stdio.h".

*To perform file I/O operations in C, you need to follow these basic steps:

*Open the file: To perform I/O operations on a file, you must first open it. You can use the "fopen" function to open a file. The syntax of the function is:

*FILE *fopen(const char *filename, const char *mode);

*where "filename" is the name of the file to be opened, and "mode" specifies the type of access you want to the file. The mode can be "r" for reading, "w" for writing, "a" for appending, "r+" for reading and writing, "w+" for reading and writing, and "a+" for reading and appending.

*The function returns a pointer to a FILE object, which is used to perform I/O operations on the file.

*Perform I/O operations: Once you have opened the file, you can perform I/O operations on it using functions like "fread", "fwrite", "fscanf", "fprintf", etc. These functions are used to read from or write to the file.

*Close the file: After you have finished performing I/O operations on the file, you should close it using the "fclose" function. The syntax of the function is:

*int fclose(FILE *stream);

*where "stream" is a pointer to the FILE object representing the file you want to close. The function returns 0 if the file was closed successfully, and EOF if there was an error.

