#include <stdio.h>

int score = 0;

/*
 THis function is to display the question. correct_ans variable holds a value that is the correct option.
 THis function returns the correct answer so that we can check later if the user has given the correct input.
 \t prints a 'tab' i.e. large space.
*/
char question1()
{
    char correct_ans;
    printf("How many days are in a leap year?\n");
    printf("a)345\tb)356\tc)366\td)365\n");
    correct_ans = 'c';
    return correct_ans;
}

/*
THis function calls the question function, and stores the correct option in a variable 'correct'.
It then asks the user to input an option, and stores it in 'ans_chosen' variable.
It checks if the answer inputted by the user is same as the correct variable or not.
If same, it displays "CORRECT ANSWER!!!" and increases the value of score.
If different, it doesn't change the score variable

*/

void answer1()
{
    char ans_chosen, correct;
    correct = question1();
    printf("Your Answer: ");
    scanf("%c",&ans_chosen);

    if(ans_chosen == correct)
    {
        printf("CORRECT ANSWER!!!\n");
        score++;
    }
    else
    {
        printf("WRONG. CORRECT OPTION IS: %c\n",correct);
    }
}


void main()
{
    answer1();

    printf("Your Score: %d\n", score);
}
