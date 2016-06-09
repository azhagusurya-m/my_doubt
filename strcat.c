#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	
	char *string1,*string_2;
	scanf("%s %s",string1,string_2);
       int i=0;
       printf(" before concatination:%s ,%s",string1,string_2);
       int n=
       string1=(char*)malloc(sizeof(string1)+sizeof(string_2));
       string_2=(char*)malloc(sizeof(string_2));
      while(string1[i]!='\0')
          {
          	
          	i++;
          }
    	   for(int j=0;string_2[j]!='\0';i++,j++)
                  	string1[i]=string_2[j];
                
                	 string1[i]='\0';
                    printf(" after concatination:%s ,%s",string1,string_2);
                    free(string_2);
           
        
	return 0;
}
