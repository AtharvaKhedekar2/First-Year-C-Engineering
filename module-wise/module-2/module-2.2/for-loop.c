/* ================== C FOR LOOP ==================

✅ Used when the number of iterations is known.

Syntax:
for(initialization; condition; update)
{
    // code
}

🔹 Initialization:Runs only once before the loop starts.

🔹 Condition:Checks whether the loop should continue.
If true → loop runs.
If false → loop stops.

🔹 Update:Runs after each iteration.
Usually increments/decrements the loop variable.

Example:
for(int i = 0; i < 5; i++)
{
    printf("%d\n", i);
}

Flow: Initialization → Condition → Code → Update → Repeat

Common Uses:✔ Printing series of numbers ✔ Calculating sums ✔ Countdown programs ✔ Traversing arrays

================================================== */

//PRINT EVEN NUMBERS FROM 1 TO 10 USING FOR LOOP

#include <stdio.h>

int main(){

    int i;
     
    for(i=0;i<=10;i = i + 2)
    {
        printf("%d\n",i);
    }
    return 0;
}


