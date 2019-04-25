// KBC game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define MAX_LEN 128

void print_image(FILE *fptr);

void questions(int n);

void inst() {
	system("cls");
	printf("\n\n\n\t\t\t\t\t\tInstructions\n\n\n\t\tEach Question has two correct answers. To answer, type the option numbers without space .\n\t\tThe first gives you $10000.\n\t\tThe rest multiply the money by 10.\n\t\tYou will have a chance to quit and take the money home after each Question.\n\t\tA wrong answer will give you all the currently earned money.\n\n\t\tPress Any Key To Continue.....");
	getch();
	main();
}

int main(void)
{
    // For Logo
    system("cls");
    char *filename = "logo.text";
    FILE *fptr = NULL;

    if((fptr = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }

    print_image(fptr);
    fclose(fptr);

    int n;
    int number = 0;

    while(number == 0)
    {
        srand(time(0));

        number = rand();

        number = number % 10;

        if(number > 5){
            number = 10 - number;}
    }
    // Intro
    printf("\n\n\n\n\t\t\t\tHello and welcome to KBC!!\n\n\t\t\t\tWhat is your name ?\n\n");
    char str[50];
    printf("\t\t\t\t");
    scanf("%s",str);
    system("cls");

    printf("\n\n\n\n\n\n\t\t\t\t\t\tWhat do you want to do?\n\n\n\t\t\t\t1.\tPlay The Game\n\t\t\t\t2.\tRead Instructions\n\t\t\t\t3.\tExit\n\n\t\t\t\t");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\t\t\t\tHello %s\n\n\t\t\t\tNice to meet you\n\n\t\t\t\tLet's start with the Game\n\n", str);
            printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
            getch();
            questions(number);
        break;

        case 2:
            inst();
        break;

        case 3:
            exit(0);
        break;

        default :
            printf("\n\t\t\t\tYou Entered Wrong Choice\n\n");
        break;

    }

    return 0;
}


void questions(int n)
{
    int a, b;
    int money = 10000;
    // Sets
    switch (n)
    {
        // SET A
        case 1:
        for(int i = 1; i <= 7; i++)
        {
            switch (i)
            {
                case 1:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your first question:\n\n");
                    printf("\n\t\t\t\tWhich of the following are Analytical tools?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Read Books\t\t2)Play Brain Games\n\t\t\t\t3)Brainstorming\t\t4)Issue Tree\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = 10000;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 3 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue......\n\n");
                        getch();
                        exit(0);
                    }

                    break;

                case 2:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your second question:\n\n");
                    printf("\t\t\t\tWhich of the Following are Success Mantras?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Be observant\t\t2)Read books\n\t\t\t\t3)Confidence\t\t4)Respect\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 3 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }

                    break;

                case 3:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your third question:\n\n");
                    printf("\t\t\t\tSelect two essentials of analytical Skills?");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Communication\t\t2)Creativity\n\t\t\t\t3)Identifying trends\t\t4)Scatter diagrams\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fourth question:\n\n");
                    printf("\t\t\t\tSelect any two of the analytical approach steps.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Patience\t\t2)Larger Problem Into Smaller Problems\n\t\t\t\t3)Bird-eye view to the problem\t\t4)Troubleshooting\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 2 && b == 3)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 2 and 3\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fifth question:\n\n");
                    printf("\t\t\t\tSelect any two of the steps to Improve Analytical thinking skills.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Read Books\t\t2)Pareto\n\t\t\t\t3)Be Observant\t\t4)Research\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 3)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 3\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your sixth question:\n\n");
                    printf("\t\t\t\tWhich of the following Skill are  the most needed in CSE jobs?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Programming Languages\t\t2)Communication\n\t\t\t\t3)Pareto\t\t4)Research\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your seventh question:\n\n");
                    printf("\t\t\t\tSelect the reasons for analytic1l skills being critical at work?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Troubleshooting\t\t2)Solving Complex problems\n\t\t\t\t3)Issue Tree\t\t4)Identifying Trends\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 2 && b == 4)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 2 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                    default: printf("\n\t\t\t\tThe app has crashed. Sorry for inconvenience\n");
                    break;
            }
        }


            break;

        // SET B
        case 2:
        for(int i = 1; i <= 7; i++)
        {
            switch (i)
            {
                case 1:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your first question:\n\n");
                    printf("\t\t\t\tWhich of the followings are not Common analytical tools?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Brainstorming\t\t2)Issue tree\n\t\t\t\t3)Data Analysis\t\t4)Research\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = 10000;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 3 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }


                    break;

                case 2:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your second question:\n\n");
                    printf("\t\t\t\tWhich of the Following are Essentials of Analytical Skills?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Communication\t\t2)Creativity\n\t\t\t\t3)Logic\t\t4)Laughter\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }

                    break;

                case 3:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your third question:\n\n");
                    printf("\t\t\t\tWhich of the following are the Analytical approach steps?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Bird-eye View to The Problem\t\t2)Larger Problem Into Smaller Problems\n\t\t\t\t3)Data Analysis\t\t4)BenchMarking\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fourth question:\n\n");
                    printf("\t\t\t\tGive any Two Reasons why analytical approach is critical at work?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Gathering Information and reporting\t\t2)Identifying Trends\n\t\t\t\t3)Troubleshooting\t\t4)Communication\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fifth question:\n\n");
                    printf("\t\t\t\tGive 2 success mantras\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1) Confidence\t\t2)Laughter\n\t\t\t\t3)Creativity\t\t4)Deductive Reasoning\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your sixth question:\n\n");
                    printf("\t\t\t\tGive any two Steps to improve analytical thinking?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Be Observant\t\t2)Learn how things work\n\t\t\t\t3)Issue Tree\t\t4)Pareto\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your seventh question:\n\n");
                    printf("\t\t\t\tGive any 2 top needed Skills in CSE jobs.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1).Mathematics\t\t2)Software Engineering\n\t\t\t\t3)Research\t\t4)Data Analysis\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                default: printf("\n\t\t\t\tThe app has crashed. Sorry for inconvenience\n");
                    break;
            }
        }


            break;

        // SET C
        case 3:
        for(int i = 1; i <= 7; i++)
        {
            switch (i)
            {
                case 1:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your first question:\n\n");
                    printf("\t\t\t\tSelect two success Mantras from the following\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Laughter\t\t2)Respect\n\t\t\t\t3)Communication\t\t4)Creativity\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = 10000;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }


                    break;

                case 2:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your second question:\n\n");
                    printf("\t\t\t\tChoose two Essentials of Analytical Skills.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Logic\t\t2)Confidence\n\t\t\t\t3)Research\t\t4)Deductive Reasoning\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 3 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }

                    break;

                case 3:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your third question:\n\n");
                    printf("\t\t\t\tChoose the correct steps of the analytical approach:\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Larger problems into smaller problems\t\t2)Bird-eye view to the problem\n\t\t\t\t3)SWOT analysis\t\t4)Cause and effect diagrams");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fourth question:\n\n");
                    printf("\t\t\t\tChoose any two skills needed in CSE Jobs.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Mathematics\t\t2)Patience\n\t\t\t\t3)Music\t\t4)Dance\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fifth question:\n\n");
                    printf("\t\t\t\tChoose the reason for which analytical skills are critical at work.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Executing Projects Efficiently\t\t2)Streamlining Processes\n\t\t\t\t3)Process Mapping\t\t4)Force Field Analysis\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your sixth question:\n\n");
                    printf("\t\t\t\tChoose The correct Analytical Tools\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)SWOT Analysis\t\t2)Fish-bone Diagram\n\t\t\t\t3)Data Analysis\t\t4)Communication\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your seventh question:\n\n");
                    printf("\t\t\t\tChoose the correct Ways To improve Analytical Thinking Skills.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Think About Your Decisions\t\t2)Play Brain Games\n\t\t\t\t3)Process Mapping\t\t4)Affinity Diagram\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                default: printf("\n\t\t\t\tThe app has crashed. Sorry for inconvenience\n");
                    break;
            }
        }


            break;

        // SET D
        case 4:
        for(int i = 1; i <= 7; i++)
        {
            switch (i)
            {
                case 1:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your first question:\n\n");
                    printf("\t\t\t\tChoose the steps which help to increase analytical thinking\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Ask Questions\t\t2)Practice Problem Solving Skills\n\t\t\t\t3)Cause and effect Diagrams\t\t4)Issue Tree\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = 10000;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }


                    break;

                case 2:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your second question:\n\n");
                    printf("\t\t\t\tSelect Common Analytical Tools from Below\n");
                    printf("\nvYour options:\n\n\t\t\t\t1)Data Analysis\t\t2)Deductive Reasoning\n\t\t\t\t3)Fish-bone Diagram\t\t4)Force Field Analysis\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 3 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }

                    break;

                case 3:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your third question:\n\n");
                    printf("\t\t\t\tSelect Success Mantras from the below Options:\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Laughter\t\t2)Logic\n\t\t\t\t3)Creativity\t\t4)Communication\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fourth question:\n\n");
                    printf("\t\t\t\tChoose two of the top 8 skills needed in CSE jobs?\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Management\t\t2)Troubleshooting\n\t\t\t\t3)Brainstorming\t\t4)Observant\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fifth question:\n\n");
                    printf("\t\t\t\tSelect reasons why Analytical Skills are critical at work\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Gathering Information and Returning\t\t2)Summarizing Statistical Data\n\t\t\t\t3)Learning how things work\t\t4)Benchmarking\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        exit(0);
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your sixth question:\n\n");
                    printf("\t\t\t\tWhich of the options are Essentials of analytical Skills.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Data Analysis\t\t2)Deductive Reasoning\n\t\t\t\t3)Logic\t\t4)Confidence\n");
                    printf("\n\t\t\t\tYour options are:\n");
                    scanf("\t\t\t\t%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        exit(0);
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your seventh question:\n\n");
                    printf("\t\t\t\tChoose the correct analytical approach steps.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Breaking Larger Problems into smaller ones\t\t2)Finding solutions to Smaller Problems\n\t\t\t\t3)Identifying Trends\t\t4)Management\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                default: printf("\n\t\t\t\tThe app has crashed. Sorry for inconvenience\n");
                    break;
            }
        }


            break;

        // SET E
        case 5:
        for(int i = 1; i <= 7; i++)
        {
            switch (i)
            {
                case 1:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your first question:\n\n");
                    printf("\t\t\t\tChoose the correct Analytical Approach.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Bird-eye View to The Problem\t\t2)Breaking Larger Problem into Smaller Problems\n\t\t\t\t3)Brainstorming\t\t4)Process Mapping\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = 10000;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }


                    break;

                case 2:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your second question:\n\n");
                    printf("\t\t\t\tSelect the reason why Analytical Skills are Critical at work.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Pareto\t\t2)Data Analysis\n\t\t\t\t3)Solving Complex Problems\t\t4)Gathering information and reporting\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 3 && b == 4)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money );
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 3 and 4\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }

                    break;

                case 3:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your third question:\n\n");
                    printf("\t\t\t\tSelect The top Skills needed in CSE Jobs.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Hardware\t\t2)Software Engineering\n\t\t\t\t3)Logic\t\t4)Data Analysis\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 4:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fourth question:\n\n");
                    printf("\t\t\t\tChoose the success Mantras from the following options.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Confidence\t\t2)Laughter\n\t\t\t\t3)Creativity\t\t4)Benchmarking\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 5:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your fifth question:\n\n");
                    printf("\t\t\t\tSelect the essentials of analytical Skills\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Communication\t\t2)Research\n\t\t\t\t3)Process Mapping\t\t4)Streamlining Processes\n");
                   printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 6:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your sixth question:\n\n");
                    printf("\t\t\t\tSelect The ways to improve Analytical Skills.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Learn how things Work\t\t2)Think about your Decisions\n\t\t\t\t3)Brainstorming\t\t4)Deductive Reasoning\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                case 7:
                    system("cls");
                    printf("\n\n\n\n\t\t\t\tHere is your seventh question:\n\n");
                    printf("\t\t\t\tSelect the Common Analytical Tools.\n");
                    printf("\n\t\t\t\tYour options:\n\n\t\t\t\t1)Pareto\t\t2)Six thinking Hats technique\n\t\t\t\t3)Troubleshooting\t\t4)Communication\n");
                    printf("\n\t\t\t\tYour options are:\n\t\t\t\t");
                    scanf("%d %d", &a, &b);
                    printf("\n");
                    if(a == 1 && b == 2)
                    {
                        money = money + money * 10;
                        printf("\n\t\t\t\tYou're correct!!\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                    }
                    else
                    {
                        printf("\t\t\t\tWe're sorry, but this is wrong answer, correct answer is 1 and 2\n\t\t\t\tCongratulations You have won Rs : %d\n", money);
                        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
                        getch();
                        exit(0);
                    }
                    break;

                default: printf("\n\t\t\t\tThe app has crashed. Sorry for inconvenience\n");
                    break;
            }
        }


        default: printf("\t\t\t\tSorry, this app just crashed. Our apologies\n");
        printf("\n\n\n\n\t\t\t\tPress any key to continue.....\n\n");
        break;
    }
}

void print_image(FILE *fptr)
{
    char read_string[MAX_LEN];

    while(fgets(read_string,sizeof(read_string),fptr) != '\0')
        printf("%s",read_string);
}
