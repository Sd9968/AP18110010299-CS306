/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sizeofinput;
    printf("Enter a stringsize");
    scanf("%d",&sizeofinput);
    int ones,zeroes=0;
    for(int i=0;i<sizeofinput;i++){
        printf("enter binary digit ");
        int digit;
        scanf("%d",&digit);
        if(digit==0){
            zeroes=zeroes+1;
        }
        else{
            ones=ones+1;
        }
        
    }
    if(ones%2==0 && zeroes%2==0){
        printf("Entered number has even number of ones and zeroes");
    }
    else{
        printf("Entered number doesn't has even number of ones and zeroes");
    }
    
}