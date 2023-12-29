/*Calculation of distance between two cities in Kilometer*/
#include<stdio.h>
int main()
{
    float km, m, cm, ft, inch ;
    printf ("\nEnter the value in Kilometer") ;
    scanf ("%f\n" , &km) ;
    m = 1000 * km ;
    ft = 12 * inch ;
    inch = 2.54 * cm ;
    cm = 100 * m ;
    printf ("Enter the value in meter = %f\n" , m) ;
    printf ("Enter the value in feet = %f\n" , ft) ;
    printf ("Enter the value in inch = %f\n" , inch) ;
    printf ("Enter the value in centimeter = %f\n" , cm) ;
    return 0 ;
}