/***********************************************/
			 /* Assignment No: 5 */
 		/* Name: Iann Akoulouze Bika*/
// This program reads a text file and checks if 
// the numbers within the file are divisible by  
// a number entered by the user

/***********************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
// declare local variables;
double exponent(double x, int n);
long factorial(int n);
double x;
int n;
double exact;
double approx=0;
// get input
printf("Enter x and n\n");
scanf("%lf %d", &x, &n);
// computes e^x through a summation formula (x^n!)/(n!)
while (n>0) {
	approx+=exponent(x,n)/factorial(n);
	n--;
}
// add one to approx to account for (x^0)/(0)
approx++;
// finds the exact value for e^x using math library
exact=exp(x);
printf("Approximation = %lf \nExact = %lf", approx, exact);
return 0;
}

long factorial (int n) {
	int f=1;
	while(n>1){
		f*=n;
		n--;
	}
	return(f);
}
double exponent(double x, int n)
{
	double e=x;
	while(n>1){
		e*=x;
		n--;
	}
	return(e);
}
