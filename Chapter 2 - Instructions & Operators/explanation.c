#include <stdio.h>
int main()
{
  float x; // I am taking a float variable cuz just in case my answer comes in points then I should not miss anything

  x = 100 / 10 + 30 * 10 - 20;

  /*

  Explaination :-

  Step1 : we have divide and multiplication both on the same line so what do you think complier will gets confused ?
  No it will follow "associativity" click here to see the chart -> https://bit.ly/3XvbyNP

                            According to that we will move from left to right hence first

                            100/10 will be processed then 30*10 will be processed

  Step 2 : now we have 10 + 300 - 20 then again compiler will follow associativity and will again start its operation from left to right   hence
                                          10+300 will be done first and
                                          310 -20 will be done second */

  printf("%f", x); // it will/should show 290 accoding to the above explanation
  return 0;
}