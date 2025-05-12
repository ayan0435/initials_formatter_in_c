#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char a[100]; // To strore the full name
    char b[100]; // To store each word
    char c[100];// To store the Initials
  
    printf("Enter Full Name: ");
    fgets(a, sizeof(a), stdin); //Read input with spaces
    a[strcspn(a, "\n")] = '\0'; //Remove new line character from input
   
    int j=0, k=0;
    for(int i=0; a[i]!='\0'; i++){
        if(a[i]!=32) //Build the current word in b[]
            b[j++]=a[i];
        else if(j>0) //Only process if the valid word found before the space
        {
            c[k++]=toupper(b[0]); //Take first letter & capitalize
            c[k++]='.'; //Add dot after the Initial
            j=0; //Reset j for next word
        }
    }
 
    b[0]=toupper(b[0]); //Capitalize the first letter of last name
    b[j]='\0'; //Null-terminate the last name
    c[k]='\0'; //Null-terminate the initials
 
    //Print British Style: Initials first, then last name
    printf("British Style: %s %s", c, b);
    //Print U.S. Style: Last name first, then initials
    printf("\nU.S. Style: %s %s", b, c);
  
    return 0;
}