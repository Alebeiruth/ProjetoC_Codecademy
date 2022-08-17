#include <stdio.h>

int main() {

  int appleQuantity;
  float applePrice;
  double appleReview = 82.5;
  int appleReviewDisplay = 9;
  const char appleLocation = 'F';
  appleReviewDisplay = appleReview;

  appleQuantity = 23;
  applePrice = 1.49;
  
// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}