#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float bhaskara(float a, float b, float c); //function prototype

int main(int argc, char *argv[]) {
	
	bhaskara(1, 2, 3);
	
	
	system("PAUSE");
	return 0;
}

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
			
			printf("x1= %.4f +%.4fi\n", x1Real, x1Imag);
			printf("x2= %.4f %.4fi\n", x2Real, x2Imag);
		}
		
		else {
			
			x1Real= (-b+sqrt(delta))/2*a;
			x2Real= (-b-sqrt(delta))/2*a;
			
			printf("x1= %.4f\n", x1Real);
			printf("x2= %.4f\n", x2Real);			
		}
	}//end else
}// end of bhaskara function 
