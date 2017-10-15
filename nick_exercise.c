#include <stdio.h>


int main()


{
int E1, E2, M1,M2,H1,H2;                            // Definition of variables
scanf("%d %d %d %d %d %d",E1,E2,M1,M2,H1,H2);       // User's inputs
int AE= abs(E1-E2);                                 // Year's difference
int AM =abs(M1-M2);                                 // Month's difference

if (AM == 0)                                        // If the 2 Dates are on the same month make absolute substraction        
{
  AH=abs(H1-H2);
}  
else                                                // If the 2 Dates are not on the same month check which date is earlier and take the remainder 
{                                                   // of the earlier day and the date of the second one and sum them.
 int a=30-H1;
 int AH= a +(AM*30)+ H2;
 int AM= AH/30;
 int AH=AH%30;
 }
 printf("%d %d %d, AE,AM,AH);
}