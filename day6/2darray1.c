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
  #include<string.h>
  #define COL 6
  int main() 
  {
     char name[3][COL]={'\0'};
     int i;
     strcpy(name1[0],"rutuja",COL -1);
      strcpy(name2[1],"parthdeshmukh",COL -1);
      strcpy(name3[2],"rushi" ,COL -1);
      
     
     printf("\nName1: %s and its address =%u",name[0],&name[0]);
      printf("\nName2: %s and its address=%u",name[1],&name[1]); 
      printf("\nName3: %s and its address=%u",name[2],&name[2]);
      
      printf("sizeof (name)=%d \n sizeof(name[0])=%d",sizeof(name),sizeof(name[0]));
      printf("\n\n");
      
      
      for(int i=0;i<30;i++)
      printf("\nAddress=%u\tName1[%d]=> character =%c Ascii=%d",i,name[0][i]);
      
      
      }
