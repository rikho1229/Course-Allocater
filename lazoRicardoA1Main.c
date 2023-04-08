#include "givenA1.h"

int main (int argc, char * argv[]) {

  struct courseStruct courseInfo [NUMBER_COURSES];
  struct profStruct profInfo [NUMBER_PROFS];

  int userChoice;

  /*Task 1 and 2 - read data from files - names given from commandline */
  
  FILE * fptr = openFileForReading (argv[1]);

  int task2 = readCourse(argv[1], courseInfo);

  int task3 = readProfAndCoursesTaught (argv[2], profInfo, courseInfo);

  do {

    printf("4. Task4 ...\n");
    printf("5. Task5 ...\n");
    printf("6. Task6 ...\n");
    printf("7. Task7 ...\n");
    printf("8. Task8 ...\n");

    printf("Enter a value:");
    scanf("%d", &userChoice);
    
  } while(userChoice >= 4 && userChoice <= 8);

  

  return 0;
}