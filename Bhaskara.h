#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float bhaskara(float a, float b, float c){
	
	
	float x1Real, x1Imag, x2Real, x2Imag, delta;
	
	
	if (a == 0){
		printf("This is not a Quadratic Equation");
	}
	
	
	else {

		delta= (b*b)-4*a*c;
		
		if (delta < 0){
			
			delta= delta * (-1);
			
			x1Real= -b/(2*a);
			x1Imag= sqrt(delta)/(2*a);
			
			x2Real= -b/(2*a);
			x2Imag= -sqrt(delta)/(2*a);
			
			printf("x1= %f.04 +%f.04", x1Real, x1Imag);
			printf("x2= %f.04 %f.04", x2Real, x2Imag);
		}
		
		else {
			
			x1Real= (-b+sqrt(delta))/2*a;
			x2Real= (-b-sqrt(delta))/2*a;
			
			printf("x1= %f.04 +%f.04", x1Real, x1Imag);
			printf("x2= %f.04 %f.04", x2Real, x2Imag);			
		}
	}
}
