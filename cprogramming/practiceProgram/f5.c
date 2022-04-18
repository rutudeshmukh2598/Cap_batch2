/* 
use library function to calculate the sqauare of a numeber given by use
*/

#include<stdio.h>

#include<math.h>
float squareArea(float side);
 float circleArea(float rad);
 
 int main()
 {
    float a=5.0;
    float b=10.0;
    printf("area is : %f ",rectangleArea(a,b));
   return 0;
   }
   
   float squareAreat(float side)
   {
      return side *side;
      }
      float circleArea(float rad)
      {
        return 3.14 * rad *rad;
        }
        float rectangleArea(float a,float b)
        {
          return a * b;
          }
