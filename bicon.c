#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {

  char convert[2];
  int binary, decimall, remainderr, i;
  int decimal, binaryy, remainder, PlaceVal;

  printf("To Convert in Binary press b \n To convert in Decimal press d\n");
  printf("do you want to convert from Binary to Decimal or Decimal to Binary: ");
  scanf("%s", convert);

  if (strcmp(convert, "d") == 0) {

    i = 0;
    decimall = 0;
    printf("Enter Binary number: ");
    scanf("%d", &binary);

    while (binary != 0) {

      remainderr = binary % 10;
      binary /= 10;
      decimall += remainderr * pow(2,i);
      ++i;

    }

    printf("Decimal Number: %d", decimall);

  } else if (strcmp(convert, "b") == 0) {

    binaryy = 0;
    PlaceVal = 1;
    printf("Enter Decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {

      remainder = decimal % 2;
      decimal /= 2;
      binaryy += remainder * PlaceVal;
      PlaceVal *= 10;

    }

    printf("Binary Number: %d", binaryy);


  } else {

    printf("Wrong Input! Try restarting the program.");

  }

  return 0;

}
