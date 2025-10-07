 * There are three basic operator in C Programming language:

1️⃣ Arithmetic Operators :

+ Addition
- Subtraction
* Multiplication
/ Division
% Modulus
++ Increment
-- Decrement

Example: 

#include <stdio.h>
int main() {
    int a = 10, b = 3;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);

    return 0;
}

output

Addition: 13
Subtraction: 7
Multiplication: 30
Division: 3
Modulus: 1



2️⃣ Relational Operators

== Equal to
!= Not equal to
> Greater than
< Less than
>= Greater than or equal to
<= Less than or equal to

Example:

#include <stdio.h>
int main() {
    int a = 5, b = 8;

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    return 0;
}

output 

a == b : 0
a != b : 1
a > b  : 0
a < b  : 1
a >= b : 0
a <= b : 1


3️⃣ Logical Operators

&& Logical AND
|| Logical OR
! Logical NOT

Example:

#include <stdio.h>
int main() {
    int a = 5, b = -3;

    // AND Operator
    if (a > 0 && b > 0) {
        printf("Both are positive\n");
    } else {
        printf("Both are not positive\n");
    }

    // OR Operator
    if (a > 0 || b > 0) {
        printf("At least one is positive\n");
    }

    // NOT Operator
    if (!(a < 0)) {
        printf("a is not negative\n");
    }

    return 0;
}


output:

Both are not positive
At least one is positive
a is not negative

