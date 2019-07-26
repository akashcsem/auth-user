

#include <stdio.h>
int main()
{
    /// Check user is authorized or not
    if (checkUser() == 0){
        system("cls");
        printf("\n\n\t\tSorry, username or password doesn't match\n");
        printf("\t\tPress any key to exit");
        getch();
        return 0;
    }

    system("cls");
    printf("\n\n\t\tWelcome to the app\t");

    getch();
    return 0;
}

int checkUser() {
    char username[] = "akash", password[10] = "123456", getUsername[25], getPassword[25] ,  ch;
    int i = 0;

    printf("\n\n\tNote: Your default username is 'akash' and password is '123456'\n\n");
    printf("\t\tEnter username : ");
    gets(getUsername);
    printf("\t\tEnter your password : ");


    while(1) {
        ch = getch();
        if(ch == 13)
            break;
         printf("*");
         getPassword[i++] = ch;
    }
    getPassword[i]='\0';

    if(!strcmp(username, getUsername) && !strcmp(getPassword, password)) {
        return 1;
    }
    return 0;
}
