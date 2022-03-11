#include <stdio.h>
int main()
{
    float eng, hindi, maths;
    printf("Enter your marks : ");
    scanf("%f%f%f", &eng, &hindi, &maths);
    int percentage = ((eng + hindi + maths) / 300) * 100;
    if (percentage >= 40 && eng > 33 && hindi > 33 && maths > 33) // THE STUDNET HAVE TO BRING A TOTAL OF 40 OR ABOVE PERCENTAGE AND ALSO 33 MARKS IN ALL SUBJECTS , ELSE WILL BE DECLARED FAILED
    {
        printf("PASSED !! ");
    }
    else
    {
        printf("FAILED !! ");
    }
    return 0;
}