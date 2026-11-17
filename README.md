# TMK-SDK
### Truxa Minimal Kernel SDK for creating programs

----------------------------------------------------------

#### 1) mathlibs/libfactor
libfactor is a library that calculates the factorial of a number n. It includes the CalcFactorial() function, which is called by passing a number: CalcFactorial(int NumberInput). The function returns the factorial of the number or 1 if an error occurs.

Example of use:
```c
#include <stdio.h>
#include "libfactor.h"

int main(void) {

    int Number;

    printf("Enter a number: ");
    scanf("%d", &Number);

    int Result = CalcFactorial(Number);

    if (Result == 1) {
        printf("Invalid input!\n");
    } else {
        printf("Factorial: %d\n", Result);
    }

    return 0;
}
```
