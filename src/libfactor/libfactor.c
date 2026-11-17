// libfactor.c
// Compute factorial of INT n
// Part of the TMK SDK for programs

#include "libfactor.h"

int CalcFactorial(int NumberInput) {
	
	if(NumberInput <= 0) {
		
		return 1;
	}
	
	int Result = 1;
	int Cycle = NumberInput;
	
	do {
		
		Result = Result * Cycle;
		
		Cycle--;
		
	} while (Cycle != 0);
	
	
	
	
	return Result;
}