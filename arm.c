# include <stdio.h>
int main(){
    int n = 125;
    int temp = n;
    int p = 0;
    while (n > 0){
        int rem = n % 10;
        p = (p) + (rem * rem * rem);
        n = n /10;
    }
    if (temp==p){
        printf("Yes it is a armstrong numbr");
    }
    else{
        printf("No it is not a armstrong number");
    }
    return 0;
}