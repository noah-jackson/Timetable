#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    time_t rawtime;
    struct tm *info;
    char day[10];

    time(&rawtime);

    info = localtime(&rawtime);

    strftime(day,80,"%A", info);
    
    char *mon;
    char *tue;
    char *wed;
    char *thu;
    char *fri;
    char *sat;
    char *sun;
    mon = strstr(day, "Monday");
    tue = strstr(day, "Tuesday");
    wed = strstr(day, "Wednesday");
    thu = strstr(day, "Thursday");
    fri = strstr(day, "Friday");
    sat = strstr(day, "Saturday");
    sun = strstr(day, "Sunday");

    if(mon != NULL) {
        printf("*******************************************************\n\n");
        printf("You have 2 lectures today.\n\n");
        printf("MAS164 Lecture starting 12:30PM (1 hour) - 460.3.028\n");
        printf("ICT159 Lecture starting 2:30PM (2 hours) - 460.2.029\n\n");
        printf("*******************************************************\n");
    }
    else if (tue != NULL) {
        printf("*******************************************************\n\n");
        printf("You have 1 lecture and 1 lab today.\n\n");
        printf("BSC203 Lecture starting 12:30AM (1 hour) - 235.3.016\n");
        printf("ICT159 Lab starting 1:30PM (3 hours) - 460.4.034\n\n");
        printf("*******************************************************\n");
    }
    else if (wed != NULL) {
        printf("*******************************************************\n\n");
        printf("You have 2 lectures today.\n\n");
        printf("MAS164 Lecture starting at 11:30AM (1 hour) - 460.3.028\n");
        printf("ICT284 Lecture starting at 1:30PM (2 hours) - 235.3.016\n\n");
        printf("*******************************************************\n");
    }
    else if (thu != NULL) {
        printf("*******************************************************\n\n");
        printf("You have 1 lecture today and 2 tutorials.\n\n");
        printf("MAS164 Lecture starting at 8:30AM (1 hour) - 460.3.032\n");
        printf("ICT284 Tutorial starting at 10:30AM (1 hour) - 235.3.032\n");
        printf("BSC203 Tutorial starting at 5:30PM (2 hours) - 465.1.110\n\n");
        printf("*******************************************************\n");
    }
    else if (fri != NULL) {
        printf("*******************************************************\n\n");
        printf("You have 1 lecture today and 1 tutorial.\n\n");
        printf("MAS164 Lecture starting at 9:30AM (1 hour) - 460.2.029\n");
        printf("MAS164 Tutorial starting at 12:30PM (1 hour) - 450.3.051\n\n");
        printf("*******************************************************\n");
    }
    else if (sat != NULL) {
        printf("*******************************************************\n\n");
        printf("It's the weekend! Go study or relax or something.\n\n");;
        printf("*******************************************************\n");
    }
    else if (sun != NULL) {
        printf("*******************************************************\n\n");
        printf("It's the weekend! Go study or relax or something.\n\n");;
        printf("*******************************************************\n");
    }
    else {
        printf("Something went horribly, horribly wrong.\n");
    }

    return 0;
}