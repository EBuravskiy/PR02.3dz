#include <stdio.h>

int main()
{
    long long int login, pass;
    long long int userl1, userl2, userl3;
    long long int userp1, userp2, userp3;
    userl1 = 100000000000;
    userp1 = 111111111111;
    userl2 = 200000000000;
    userp2 = 222222222222;
    userl3 = 300000000000;
    userp3 = 333333333333;
    printf("Enter you login (************): ");
    scanf_s ("%lli", &login);
    printf("Enter you pass (************):  ");
    scanf_s ("%lli", &pass);
    if (((login == userl1) && (pass == userp1)) || ((login == userl2) && (pass == userp2)) || ((login == userl3) && (pass == userp3))) {
        printf("Access allowed");
    }
    else {
        printf("Access denied");
    }
    return 0;
}