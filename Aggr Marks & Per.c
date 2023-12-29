/*Calculate the Aggregate Marks & Percentage of 6 Subjects*/
#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, aggr ;
    float per ;
    printf ("\nEnter marks in 5 subjects") ;
    scanf ("%d %d %d %d %d" , &m1, &m2, &m3, &m4, &m5) ;
    aggr = m1 + m2 + m3 + m4 + m5 ;
    per = aggr/5 ;
    printf ("Enter the value in Percentage = %f\n" , per) ;
    return 0 ;
}