# Assignment7
## Objectives

To gain an understanding of pointers.

### Part 1
1. In a program `reverse.c`, write a string reversal function using pointers that takes only a string as input, creates 2 pointers, performs a string reversal using those pointers, and prints out the reversed string.  Your driver should take a string input by the user using fgets().  

### Part 2

In a text file `assignment7.txt`, answer the following questions:

1. Explain the difference between ++*p, *p++ and *++p, if there is any. 
2. Is the left to right or right to left order guaranteed for operator precedence?
3. What are the advantages of using pointers? 
4. Consider a C program’s main() function that starts as follows:
``` C
    int main(int argc, char **argv) {
      int a[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
      int *p = a + 2;
      char *str = "hello";
```
- For integer expressions (i.e., the expressions whose types are char, short, int, size_t, long, or long long--either signed or unsigned), write the actual number value.
- For non-integer expressions, write the type name, in the format that you use to declare a variable of that type. Some example type names include but are not limited to:
    
    ```C
      int *
      double
      double **
      int(*)(int)
    ```
- Write "invalid" if a given expression is not a valid C expression.
- Make sure sure to explain each of your answers. 

 4.1 "abc" <br>
 4.2 "xyz"[1] - ’y’ <br>
 4.3 ’\0’ == 0 <br>
 4.4 *a <br>
 4.5 &a[0] <br>
 4.6 *p <br>
 4.7 &p <br>
 4.8 *++argv <br>
 4.9 &main <br>
 4.10 sizeof(str) <br>

### Part 3:

Submit your final project proposal in the "Final Project" Repository. 

### Submission Guidelines
Please include your name and a description in a comment at the top of your code files. Please also include your name at the top of your assignment7.txt file.

All files must be submitted via GitHub by 10:00am 7/11. 
