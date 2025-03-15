// Event Management System
#include <stdio.h>

int main()
{
    int studentS, teachS, geustS;
    int studentC = 0, teachC = 0, geustC = 0;
    int choice, id;
    printf("========================================\n");
    printf("      WELCOME TO EVENT MANAGEMENT      \n");
    printf("========================================\n");
    int main_flag = 1;
    int flag_S = 1;
    int flag_T = 1;
    int flag_G = 1;
    while (flag_S)
    {
        printf("Enter the Total Number of Seats of Students :");
        scanf("%d", &studentS);
        if (studentS <= 0)
        {
            printf("Enter Valid number of seats\n");
        }else{
            flag_S = 0;
        }
        
    }
    while (flag_T)
    {
        printf("Enter the Total Number of Seats of Teachers :");
        scanf("%d", &teachS);
        if (teachS <= 0)
        {
            printf("Enter Valid number of seats\n");
        }
        else
        {
            flag_T = 0;
        }
    }
    while (flag_G)
    {
        printf("Enter the Total Number of Seats of Guests :");
        scanf("%d", &geustS);
        if (geustS <= 0)
        {
            printf("Enter Valid number of seats\n");
        }
        else
        {
            flag_G = 0;
        }
    }
    while (main_flag)
    {
        printf("\n----------------------------------------\n");
        printf("Choose Any Option Below to Proceed\n");
        printf("----------------------------------------\n");
        printf("(1): Reserve a seat for Student \n");
        printf("(2): Reserve a seat for Teacher \n");
        printf("(3): Reserve a seat for Guest \n");
        printf("(4): Status Info \n");
        printf("(5): Cancel Seat (Student, Teacher, Guest) \n");
        printf("(6): Exit..... \n");
        printf("----------------------------------------\n");
        printf("Enter your Choice :");
        scanf("%d", &choice);
        if (choice == 1)
        {
            if (studentC < studentS)
            {   int fla_s = 1;
                while (fla_s)
                {
                    printf("Enter the Id of Student -->");
                    scanf("%d", &id);
                    if (id <= 0)
                    {
                        printf("!!!! Enter valid Id !!!!");
                    }
                    else
                    {
                        fla_s = 0;
                    }
                }
                printf("\n********************************\n");
                printf("---------------> Seat for student with id %d is reserved \n", id);
                printf("\n********************************\n");
                studentC++;
            }
            else
            {
                printf("\n------------------> !!! No More Seats Available for Students !!!\n");
            }
        }
        else if (choice == 2)
        {
            if (teachC < teachS)
            {   int fla_t = 1;
                while (fla_t)
                {
                    printf("Enter the Id of Teacher -->");
                    scanf("%d", &id);
                    if (id <= 0)
                    {
                        printf("!!!! Enter valid Id !!!!");
                    }
                    else
                    {
                        fla_t = 0;
                    }
                }
                printf("\n********************************\n");
                printf("Seat for Teacher with id %d is reserved \n", id);
                printf("\n********************************\n");
                teachC++;
            }
            else
            {
                printf("\n!!! No More Seats Available for Teachers !!!\n");
            }
        }
        else if (choice == 3)
        {
            if (geustC < geustS)
            {   int fla_g = 1;
                while (fla_g)
                {
                    printf("Enter the Id of Guest -->");
                    scanf("%d", &id);
                    if (id <= 0)
                    {
                        printf("!!!! Enter valid Id !!!!");
                    }
                    else
                    {
                        fla_g = 0;
                    }
                }
                printf("\n********************************\n");
                printf("Seat for Geust of ID %d is reserved \n", id);
                printf("\n********************************\n");
                geustC++;
            }
            else
            {
                printf("\n!!! No More Seats Available for Guests !!!\n");
            }
        }
        else if (choice == 4)
        {
            printf("\n==============================\n");
            printf("     CURRENT SEAT AVAILABILITY\n");
            printf("==============================\n");
            printf("Available seats for Students = %d\n", studentS - studentC);
            printf("Available seats for Teachers = %d\n", teachS - teachC);
            printf("Available seats for Guests = %d\n", geustS - geustC);
            printf("==============================\n");
        }
        else if (choice == 5)
        {
            int cat;
            printf("Seat to remove (1: Student ,2: Teacher ,3: Geust)");
            scanf("%d", &cat);
            if (cat == 1)
            {
                if (studentC > 0)
                {
                    studentC--;
                    printf("A seat of student is removed\n");
                }
                else
                {
                    printf("No seat of student is reserved Yet\n");
                }
            }
            else if (cat == 2)
            {
                if (teachC > 0)
                {
                    teachC--;
                    printf("A seat of Teacher is removed\n");
                }
                else
                {
                    printf("No seat of Teacher is reserved Yet\n");
                }
            }
            else if (cat == 3)
            {
                if (geustC > 0)
                {
                    geustC--;
                    printf("A seat of Guest is removed\n");
                }
                else
                {
                    printf("No seat of Guest is Reserved Yet\n");
                }
            }
            else
            {
                printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
                printf("Please Enter a Valid Input\n");
                printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
            }
        }
        else if (choice == 6)
        {
            printf("\n========================================\n");
            printf("  THANK YOU FOR USING EVENT MANAGEMENT SYSTEM  \n");
            printf("========================================\n");
            printf("Exiting........");
            main_flag = 0;
        }
        else
        {
            printf("\n!!! Invalid Choice! Please Enter a Correct Option !!!\n");
        }
    }
    return 0;
}