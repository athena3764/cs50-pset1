#
include < stdio.h > #include < cs50.h > #include < math.h >

  /*Implement a program that calculates the minimum 
  number of coins required to give a user change.*/
  int main(void) {

    /*Enter the amount of money to be changed into coins*/
    float num;
    do {
      printf("num: ");
      num = GetFloat();

    } while (num < 0);
    int rd_num = round(num * 100);

    /*Calculate the number of quarters*/
    int quarter = 0;
    while (rd_num >= 25) {
      quarter++;
      rd_num -= 25;
    }

    /*Calculate the number of dimes*/
    int dime = 0;
    while (rd_num >= 10) {
      dime++;
      rd_num -= 10;
    }

    /*Calculate the number of nickels*/
    int nickel = 0;
    while (rd_num >= 5) {
      nickel++;
      rd_num -= 5;
    }

    /*Calculate the number of pennies*/
    int penny = 0;
    while (rd_num >= 1) {
      penny++;
      rd_num -= 1;
    }

    /*Calculate the total number of coins*/
    int total = quarter + dime + nickel + penny;
    printf("%d\n", total);
  }
