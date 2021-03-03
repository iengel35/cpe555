
/* 
 * CPE 555 HW #3
 * Stevens Institute of Technology
 * Code by: Izy Engel
 * Instructor: Jack Winters
 * Spring 2021
 *
 * Converts given latitude and longitude in degrees to DMS format.
 */

#include <stdio.h>

/* declare functions used below */
void getLatLon(double *lat, double *lon);
double decimalToTime(double dec);


/* main function */
int main()
{
  /* declare local variable to use as a flag */
  double lat, lon;

  /* print a welcome message */
  printf("Enter coordinates in decimal form:\n");
 
  /* read in lat and long */
  getLatLon(&lat, &lon);

  /* get minutes from degrees */
  double latMin = decimalToTime(lat);
  double lonMin = decimalToTime(lon);

  /* cast degress and mins to integers, get seconds from minutes, print result */
  printf("Latitude: %d Degrees, %d Minutes, %lf Seconds\n", (int) lat, (int) latMin, decimalToTime(latMin)); 
  printf("Longitude: %d Degrees, %d Minutes, %lf Seconds\n", (int) lon, (int) lonMin, decimalToTime(lonMin)); 
  
  return 0;
}


/* read in lat and long, check for valid numbers */
void getLatLon(double *lat, double *lon)
{
  char valid = 0;
  do
    {
      //read in lat and long
      printf("Latitude: ");
      scanf("%lf", lat);
      printf("Longitude: ");
      scanf("%lf", lon);
      
      //check to see if valid values
      if(*lat > 90 || *lat < -90 || *lon > 180 || *lon < -180)
	{
	  printf("Not a valid coordinate set, please reenter\n");
	}
      else
	{
	  valid = 1;
	}
    } while(!valid);
  
  return;
}

/* given a double, returns the decimal * 60
 * i.e. converts degress to minutes, minutes to seconds */

double decimalToTime(double dec)
{
  double decimal = dec - ((int) dec);
  return decimal * 60;
}
