# include <stdio.h>
int main(){
    char name[100];
    long long number;
    char route[100];
    int kms;

printf("Enter driver name: ");
scanf("%[^\n]c",&name);
printf("Enter driver phone number: ");
fflush(stdin);
scanf("%lli",&number);
printf("Enter route: ");
fflush(stdin);
scanf("%[^\n]c",&route);
printf("Enter Kms: ");
fflush(stdin);
scanf("%d",&kms);
printf("THE DRIVER DETAILS ARE : \n");
printf(" %s %lli %s %d",name ,number, route,kms);
return 0;
}