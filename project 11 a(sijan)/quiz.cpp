#include<stdio.h>
#include<string.h>


int main()
{
   char name[30];
    char ans;
    int score = 0;

    
    printf("***** GENERAL SCIENCE QUIZ *****\n\n");
    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nWelcome %s! Answer the following questions.\n", name);
    printf("Type a, b, c or d and press Enter.\n");

    // Question 1 //
    printf("\nQ1. Which planet is known as the Red Planet?\n");
    printf("a. Venus\n");
    printf("b. Mars\n");
    printf("c. Jupiter\n");
    printf("d. Mercury\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'b' || ans == 'B')
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong! The correct answer is b. Mars\n");
    }

    // Question 2 //
    printf("\nQ2. Who is the all time scoring leader in NBA? \n");
    printf("a. Kareem Abduljabour\n");
    printf("b. LeBron JAMES\n");
    printf("c. Stephan Curry\n");
    printf("d. Kobe Bryant\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'b' || ans == 'B')
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong! The correct answer is b. LeBron JAMES\n");
    }

    // Question 3 //
    printf("\nQ3. Which gas do plants take in for photosynthesis?\n");
    printf("a. Oxygen\n");
    printf("b. Nitrogen\n");
    printf("c. Carbon dioxide\n");
    printf("d. Hydrogen\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'c' || ans == 'C')
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong! The correct answer is c. Carbon dioxide\n");
    }

    // Question 4 //
    printf("\nQ4. How many bones are there in an adult human body?\n");
    printf("a. 186\n");
    printf("b. 206\n");
    printf("c. 226\n");
    printf("d. 256\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'b' || ans == 'B')
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong! The correct answer is b. 206\n");
    }

    // Question 5 //
    
    
    printf("\nQ5. Which is the highest mountain in the world?\n");
    printf("a. K2\n");
    printf("b. Kanchenjunga\n");
    printf("c. Mount Everest\n");
    printf("d. Lhotse\n");
    printf("Your answer: ");
    scanf(" %c", &ans);
    if(ans == 'c' || ans == 'C')
    {
        printf("Correct!\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong! The correct answer is c. Mount Everest\n");
    }

    // Result //
    printf("\n----------------------------\n");
    printf("Quiz finished, %s!\n", name);
    printf("Your score = %d out of 5\n", score);

    if(score == 5)
        printf("Excellent! Full marks!\n");
    else if(score >= 4)
        printf("Good job! Keep it up.\n");
    else if(score >= 2)
        printf("Not bad. Study a little more.\n");
    else
        printf("Try again. Read your book properly.\n");

   return 0;
}
