#include<stdio.h>
int main() {
    char ch;

    // Using unformatted I/O to get a character from the user
  
    // gets(&ch);

    // // Displaying ASCII value of the entered character
    // printf("ASCII value of ");
    // puts(&ch);
    // printf(" is %d\n", ch);
      puts("Enter a character: ");
      ch=getchar();
      printf("the ascii value of %c=%d",ch,ch);



    return 0;
}