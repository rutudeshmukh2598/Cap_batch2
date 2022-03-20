/*
   demo two dimentional array
   
   op[size][size]
   op[row][column]
   op[2][6]={"rutuja","parth"};
   2000 2001 2002 2003 2004 2005  2006
   'r'   'u'   't'  'u' 'j'  'a'    '\0'
   2007   2008  2009 2010  2011 2012 2013
   'p'     'a'    'r'  't'  'h'  '\0'
   
   */
   
  #include<stdio.h>
  int main() 
  {
     char name[3][6]={"rutuja","parth"};
     printf("\nName1: %s and its address =%u",name[0],&name[0]);
      printf("\nName2: %s and its address=%u",name[1],&name[1]); 
      printf("\nName3: %s and its address=%u",name[2],&name[2]);
      
      printf("sizeof (name)=%d \n sizeof(name[0])=%d",sizeof(name),sizeof(name[0]));
      printf("\n\n");
      
      
      for(int i=0;i<6;i++)
      printf("\nName1[%d]=> character =%c Ascii=%d",i,name[0][i]);
      return 0;
      }
