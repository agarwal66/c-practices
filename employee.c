# include <stdio.h>
# include <stdlib.h>
int main(){
    int char,i  = 0;
    char a , b;
char *ptr
while (i < 3){


printf("Employee %d: enter the number of chracters in employee id \n",i+1);
scanf("%d",&char);
getchar();
printf("Enter the value a\n");
scanff("%c",&a);
printf("Enter the value b\n");
scanf("%c",&b);
ptr = (char *) malloc((char + 1)*sizeof(char));
printf("Enter your employee id \n");
scanf("%s",ptr);
printf("Enter employee id \n" ,ptr);
free(ptr);
i = i+1;
}
return 0;
}