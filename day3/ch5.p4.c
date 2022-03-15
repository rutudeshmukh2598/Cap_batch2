/*
  Switch demo
  */
  
  #include<stdio.h>
  
  int main()
  {
     int a=10,b=20,c=30,d=40,e=50;
     int num;
     scanf("%d",&num);
     
     switch(num)
     {
        case 10:
           printf("\n Number found in A\n");
           break;
         case 20:
            printf("\n Number found in B\n");
            break;
          case 30:
             printf("\n Number found in C\n");
             break;
             
          case 40:
              printf("\n Number found in D\n");
              break;
           case 50:
               printf("\n Number found in E\n");
               break;
            default:
               printf("\n Number not found in list\n");
          }
          
          printf("\n program ended\n");
          return 0;
     }                      

   
