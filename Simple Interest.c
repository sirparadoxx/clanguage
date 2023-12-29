/*Calculate the Simple Interest*/
#include<stdio.h>
int main()
{
    int p, n ;
    float r, si ;
    printf ("\nEnter the value of Simple Interest") ;
    scanf ("%f\n" , &si) ;
    /*Formula of Simple Interest*/
    si = p * n * r ;
    printf ("Enter the value of Principle Value = %f\n" , p) ;
    printf ("Enter the value of Number of Years = %f\n" , n) ;
    printf ("Enter the value of Rate of Interest = %f\n" , r) ;
    return 0 ;
}