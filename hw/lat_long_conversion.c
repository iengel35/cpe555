
/* 
 * CPE 555 HW #1
 * Stevens Institute of Technology
 * Code by: Izy Engel
 * Instructor: Jack Winters
 * Spring 2021
 *
 * Converts given latitude and longitude in degrees to H/M/S format.
 */

#include <stdio.h>

/* main function */
int main()
{
  /* declare local variable to use as a flag */
  double lat, lon;

  /* print a welcome message */
  printf("Enter coordinates in decimal form:\n");
  printf("Latitude: ");
  scanf("%lf", &lat);
  printf("Longitude: ");
  scanf("%lf", &lon);

  printf("your lat: %f, your long: %f\n", lat, lon);
  
  return 0;
}

