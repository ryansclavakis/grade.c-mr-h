//Ryan Sclavakis


#include <stdio.h>
#include <cs50.h>

    int TOTALPOINTSEARNED = 0; 
    int TOTALPOINTSPOSSIBLE = 0;

int main(void){
    int assignments = get_int("How many total assignments?:\n");
    for(int i = 0; i < assignments;i++){
          TOTALPOINTSEARNED = TOTALPOINTSEARNED+ get_int ("Total points earned on assignment #%d:\n",i+1); //this line basically is what holded all the information that the user had put inside, it asks you how many total points you earned and whatever you input that will keep it until the total assignments that you had input show up that many times for later use.
          TOTALPOINTSPOSSIBLE = TOTALPOINTSPOSSIBLE+ get_int ("Total possible points on assignment #%d:\n",i+1); //this line does the same as the one above but this line asks for the total possible points that you can get on the assignment
    }
    double finalscore = 0; // double means it is a double precision number and lets you divide with decimals
    finalscore = (double)TOTALPOINTSEARNED/(double)TOTALPOINTSPOSSIBLE*100; // the times 100 is so that way we get a whole number not a decimal.
    printf("Your current grade is: ");
        printf("%.02f ",finalscore); // the .02 makes it so it is not continous and only has two place values.
        printf("%%\n"); // %% is so that it shows as a %
    return 0;
}
