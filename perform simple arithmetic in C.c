/*You work for the IBP (International Bureau of Procrastination). You've been asked how much time is left until the official day of procrastination (March 25th).

Given that you've been asked on March 23rd, please write a C-program which performs arithmetic in order to produce the following output:

Dear Procrastinator,
You still have to wait for X days (Y minutes or Z seconds) before you can procrastinate!*/

// The code:
#include <stdio.h>
int main(void){
    int X = (25-23);
    int Y = (60*24*X);
    int Z = (60*Y);
    printf("Dear Procrastinator,\nYou still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!\n",X ,Y ,Z);
    return 0;
}