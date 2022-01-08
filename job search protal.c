#include<stdio.h>

int job_vacany_search(int b);

int main()
{
    int a;
    printf("        ===================================\n");
    printf("        =    Job search portal project    =\n");
    printf("        ===================================\n");
    printf ("Welcome to Job Search Portal\n");

    printf("Please enter your age: \n");
    scanf("%d",&a);
    job_vacany_search(a);

    return 0;
}

int job_vacany_search(int b)
{
    int p,q,option;
    if(b > 18 && b < 40)
    {
        printf("Physically Handicapped: \n1-yes\n2-no\n");
        scanf("%d",&p);
        if(p == 1)
        {
            printf("Sorry we don't have any job for you here");
        }
        if(p == 2)
        {
            printf("Types of jobs Available are\n1.Project Manager\n2.Project Designer\n3.Project Developer\n");
            printf("Select your option for which you are applying\n");
            scanf("%d",&option);

            printf("Please choose your qualification\n");
            printf(" 11.intm tech\n 22.B tech\n 33.M\n");
            scanf("%d",&q);

            switch(option)
            {
            case 1:
            {
                if(q == 11)
                    printf("you are eligible for the job\n please contact the manager and attend the interview\n");
                    else if (q == 22 || q == 33)
                        printf("Please try for the other job in the office to face the interview\n");
                    else
                        printf("Wrong option");
            }
            break;
            case 2:
            {
                if(q == 11 || q == 22)
                    printf("You are eligible for the job\nplease contact the manager and attend the interview\n");
                else if (q == 33)
                    printf("please try for the other job in the office to face the interview\n");
                else
                    printf("Wrong option");

            }
            break;
            case 3:
            {
                if(q == 11 || q == 22 || q == 33)
                    printf("You are eligible for the job\nplease contact the manager and attend the interview\n");
                    else
                        printf("Wrong option");
            }
            break;

            }

        }
        else
            printf("Wrong option");
    }
    else
        printf("You are not eligible for any job as of age factor");
    printf("\n=======================================================");
}

