
#include <stdio.h>
#include "espl_lib.h"

int main(void)
{

int n;
char c;
int k=1;

while(k==1){
printf("enter a number : \n");
scanf("%d", &n);
printf("%s\n", num_to_words(n));
printf("enter r to replay or q to quit : \n" );
c= getchar();
scanf("%c",&c);
if (c == 'q') k =0;
else if (c == 'r') k=1 ;

}
return 0  ;
   
}

