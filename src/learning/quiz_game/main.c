# include <stdio.h>
# include <ctype.h>
int main() {

    char questions[][100] = {"What is my name?\n", "What is my Wifes Name?\n", "What is my Dogs Name?\n", "What is my Cats Name?\n"};
    char options[][100] = {"A. Nick\nB. Holly\n", "A. Rosie\nB. Holly\n", "A. Spencer\nB. Rosie\n", "A. Junie\nB. Annie"};

    char answer[] = {'A', 'B', 'B', 'B'};
    int answers_correct = 0;
    char user_answer = '\0';
    int question_count = sizeof(questions) / sizeof(questions[0]);
    printf("Quiz Game\n");
    for(int i = 0; i < question_count; i++) {
        printf("%s\n", questions[i]);
        printf("%s", options[i]);

        printf("Enter your answer (A or B): ");
        scanf(" %c", &user_answer);
        printf(user_answer == answer[i] ? "Correct!\n\n" : "Incorrect!\n\n");
        if (toupper(user_answer) == answer[i]) {
            answers_correct++;
        }
    }
    printf("Number of answers correct is %d out of %d\n", answers_correct, question_count);
}