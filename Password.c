#include <stdio.h>
int main(){

int key;
printf("Enter the password:\n");
scanf("%d",&key);

if (key == 1234)
{
    printf("Correct password\n");
}

else
{
    printf("Incorrect Password\n");
}

return 0;

}
