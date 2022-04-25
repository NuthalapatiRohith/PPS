#include <stdio.h>
int main()
{
    int choice,age,b;
    printf("Welcome to the life time..\n");
    printf(" Here You can know your age in whatever form you want,so lets start\n");
    printf("Pls enter your date of birth :");
    scanf("%d",&b);
    
    age=2022-b;
    
    printf("Your age is %d in years\n",age);
    printf("If you what to know your age in months then enter:1\n");
    printf("If you what to know your age in weeks then enter:2\n");
    printf("If you what to know your age in days then enter:3\n");
    printf("If you what to know your age in hours then enter:4\n");
    printf("If you what to know your age in minutes then enter:5\n");
    printf("If you what to know your age in seconds then enter:6\n");
    printf("If you what to know your total life upto seconds then enter:7\n");
    
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1 : 
        printf("You have lived %d months",age=(2022-b)*12);
        break;
        
        case 2 : 
        printf("You have lived %d weeks",age=(2022-b)*52);
        break;
        
        case 3 : 
        printf("You have lived %d days",age=(2022-b)*365);
        break;
        
        case 4 : 
        printf("You have lived %d hours",age=(2022-b)*365*24);
        break;
        
        case 5 : 
        printf("You have lived %d minutes",age=(2022-b)*365*24*60);
        break;
        
        case 6 : 
        printf("You have lived %d seconds",age=(2022-b)*365*25*60*60);
        break;
        
        case 7 : 
        printf("You have lived %d months\n",age=(2022-b)*12 );
        printf("You have lived %d weeks\n",age=(2022-b)*52);
        printf("You have lived %d days\n",age=(2022-b)*365);
        printf("You have lived %d hours\n",age=(2022-b)*365*24);
        printf("You have lived %d minutes\n",age=(2022-b)*365*24*60);
        printf("You have lived %d seconds\n",age=(2022-b)*365*25*60*60);
        break;
        
        default:
        printf("Invalid input.Please try again.");
        break;
    }
    
    return 0;
}