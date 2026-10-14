#include <stdio.h>
int main()
{
    int age = 0;

    while(age < 18)
    {
    
    printf("Please enter your age as per your Aadhaar and Voter ID Card! \n\n");
    scanf("%d", &age);

    if(age >=18)
    {
        printf("You are eligible for voting. CHOOSE YOUR LEADER WISELY! \n\n");
        
    }

    else
    {
        printf("You are not eligible for voting, You must be atleast 18 or above for casting Vote\n\n");
        printf("Do you think you have mistakenly entered incorrect age, No worries at all, enter again \n\n");
    }
    }

    return 0;

}