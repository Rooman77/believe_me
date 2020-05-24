#include <stdio.h>

int main(int argc , char **argv){
	// Win does'nt mean success
	// if you read this you should to arrange your thoughts and try to read my bones
	//  ##### Coded By ROOMAN <3 #####

	int one = 0;
	int two = 0;
	int three = 0;
	char buff[20];
	int i=0;

	char win1[16]={'f','l','a','g','(','y','o','u','_','d','i','d','_','i','t',')'};
	char win2[14]={'y','u','0','_','4','R','3','_','l','3','g','3','n','d'};
	char win4[22]={'y','0','u','r','_','f','1','4','g','_','i','s','_','Y','0','u','r','i','n','p','u','t'};
	printf("They told im a lier but i'm not' ..\nhmm.. I dont trust you ");
	scanf("%s",&buff);
	
	
	if (one == 0x31313131){
		for(i; i<16;++i){
			
			printf("%c",win1[i]);
			
		}
		printf("FLAG(Wi11_Wi11_i_s33_4_hacker_around)");
		printf("\n\n");
	}
	
	
	if (two == 0x32323232){
		i=0;
		for(i; i<5;++i){
			
			printf("%c",win1[i]);
			
		}
		i=0;
		for(i; i<14;++i){
			
			printf("%c",win2[i]);
			
		}
		printf(")\n");
		
		printf("0k_i_$33_4_H4k3r_4r0und\n\n");
	}
	
	
	if (three == 0x33333333){
		i=0;
		for(i; i<5;++i){
			
		printf("%c",win1[i]);
			
		}
		i=0;
		for(i; i<22;++i){
			
		printf("%c",win4[i]);
			
		}
		printf(")\n");
		
	}
	return 0; 
	

	
}
