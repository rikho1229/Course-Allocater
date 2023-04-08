#include "givenA1.h"

/* Task 1 */
FILE *openFileForReading(char fileName[MAX_STR]) {

  // Opening of File in read mode
  FILE *fptr = fopen(fileName, "r");

  // Checking for NULL or errors in opening the file
  if (fileName == NULL) {
    printf("Error, could not open file.\n");
    return NULL;
  }

  else {
    return fptr;
  }

  // Closing of File to prevent leak
  fclose(fptr);
}

/* Task 2 */
int readCourse(char filename[MAX_STR],
               struct courseStruct courseInfo[NUMBER_COURSES]) {
  // Function call for task 1 is called because it can be resued once again
  FILE *fptr = fopen(filename, "r");

  if (fptr == NULL) {
    printf("Error, could not open file,\n");
    return -1;
  }

  else {
    // Once in the file, For loop is created to go through the File to store the
    // course names into the array
    for (int i = 0; i < NUMBER_COURSES; i++) {
      if (fgets(courseInfo[i].courseName, MAX_STR, fptr) == NULL) {
        if (feof(fptr)) {
            return 0;
        }
        else {
            printf("Error reading from file.\n");
            return -1;
        } 
      }
      printf("%s\n", courseInfo[i].courseName);
    }

    // Once again, For loop is creating to go through the File but this time,
    // storing numbers into the int courseID
    for (int i = 0; i < NUMBER_COURSES; i++) {
      if (fscanf(fptr, "%d", &courseInfo[i].courseID) != 1) {
        if (feof(fptr)){
            return 0;
        }
        else {
            printf("Error reading from file.\n");
            return -1;
        }     
      } 
      printf("%d\n", courseInfo[i].courseID);
    }
  }

  // Closing of file
  fclose(fptr);

  return 0; 
}

/* Task 3 */
int readProfAndCoursesTaught(char filename[MAX_STR],
                             struct profStruct profInfo[NUMBER_PROFS],
                             struct courseStruct courseInfo[NUMBER_COURSES]) {
  return 0;
}

/* Task 4 */
int nCourses(int n, struct profStruct profInfo[NUMBER_PROFS],
             char profsNCourses[NUMBER_PROFS][MAX_STR]) {
                return 0;
             }

/* Task 5 */
int getCourseName(int courseNum, char cNameFound[50],
                  struct courseStruct courseInfo[NUMBER_COURSES]) {
                    return 0;
                  }

/* Task 6 */
int getCourseNum(char cName[50], int *cNumFound,
                 struct courseStruct courseInfo[NUMBER_COURSES]) {
                    return 0;
                 }

/* Task 7 */
int profsTeachingCourse(int courseNum, struct profStruct profInfo[NUMBER_PROFS],
                        char taughtBy[NUMBER_PROFS][MAX_STR]) {
                            return 0;
                        }

/*Task 8 */
float avgNumCourses(struct profStruct profInfo[NUMBER_PROFS]) {
    return 1.0;
}