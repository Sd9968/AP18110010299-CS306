#include <stdio.h>

int main()
{
    int n;
    
    printf("enter the size  : ");
    scanf("%d",&n);
   
    printf("enter the binary string \n");
    int l,sl=0;
    for(int i=0;i<n;i++){
        int temp;
        printf("enter digit %d : ",i+1);
        scanf("%d",&temp);
        
        if(i==n-1){
            l=temp;
        }
        else if(i==n-2){
            sl=temp;
        }
    }
    if(l==sl){
        printf("\n\ngiven binary string ends with two same symbols");
    }
    else{
        printf("\n\ngiven binary string does not end with two same symbols ");
    }
    return 0;
}