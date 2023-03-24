#ifndef MAIN_H
#define MAIN_H
/* positive_or_negative -checks for positive or negative numbers
*
* @i the number to be checked
*
*return: always 0
*/
#include <stdio.h>

void positive_or_negative(int i){
    if(i<0) printf("%d is negative",i);
    else printf("%d is postive",i);
}