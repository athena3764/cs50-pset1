#include <cs50.h>
#include <stdio.h>

/* Write a program that creates a half-pyramid using hashes (#) for blocks*/
int main(void)
{
        int num;
  do {
    printf("Enter half-pyramid’s height, an non-negative integer no greater than 23: ");
    num = GetInt();
  }
  while(num > 23 || num < 0);
  
  // Create rows 
  for (int row = 1; row <= num; row++){
    
    // Create spaces for each row
    for (int space = 0; space < num-row; space++)
    {
      printf("%s", " ");
      
      // Create columns for each row
    }
    for (int col = 0; col <= row; col++)
    {
      printf("%s", "#");
    }
    printf("\n");
  }
}
