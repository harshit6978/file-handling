#include<stdio.h>

int main(){
	
	FILE *p;
	char ch[50];

	p= fopen ("demo.txt","a");
	
	if(p == NULL){
		printf("error");
		
	}
	else{
		
		printf("enter a text:");
		gets(ch);
		
		fputs("\n",p);
		fputs(ch,p);
		fclose(p);
	}
	
	return 0;
}
