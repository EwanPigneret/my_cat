# Welcome to My Cat
***

## Task
We need to reproduce the behavior of cat, which means we are given parameters in the terminal that are file names and the goal is to print them in the terminal, using open read and close.

## Description
I solved it by reading the first name of the file, open it, read and print it's content. I repeat this operation until there are no parameters left.

## Installation
I didn't have any installation to do.

## Usage
I started by using a main that allows me to read the parameters entered in the terminal. I then created multiple variables such as a buffer named "BUFFER_SIZE" to allocate enough place to read the files, an int that will hold the
file descriptor named "filedescriptor",  another int that contains the number of time each file is read named "nb_read" and a last int only used to check if there's an error while closing my file named "result_close". I also created
a char* that has the size of the buffer + 1 (so it can contains the '\0'). I then create my last variable, named "index" which I initialise at 1 and will use to go through each file. I start whith a while loop that stops once I went
through all the arguments. Then I open my file by indicating that the pathname is the argument at the index "index" (I increment "index" every loop) and in read only since I only need to print the content of the file. I put the
result of the open inside my "filedescriptor" and check if it's value is -1 (wich is the value returned when an error occured). If it's the case, I print that an error happened during the oppening of the file and return 1 to stop
my project.
