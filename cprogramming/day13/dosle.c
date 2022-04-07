#include<stdio.h>
#include<string.h>
int main()
{

char* sort(char* str) {
    // Write your code here
    int occr[26]={0};
    int found=0, i, scount=0;
    char result[500] = {'\0'};


    // for counting the number of duplicate character
    for(i=0;i<strlen(str);i++)
    {
        occr[str[i]-'a']++;
    }

    while(1)
    {
        found = 0;
        //loop until 1-3 steps until no futher chars present for appeding to result

        for(i=0;i<26;i++)
        {
            if(occr[i]>0)
            {
                found = 1;
                result[scount++] = 'a'+i;
                occr[i]--;

            }
        }

        if(!found)
            break;
       
        found = 0;
        for(i=25;i>=0;i--)
        {
            if(occr[i]>0)
            {
                found = 1;
                result[scount++] = 'a'+i;
                occr[i]--;

            }
        }

        if(!found)
            break;



    }

    strcpy(str,result);

    return (str);
   
}
}
