#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int h,m,s, set;
	int d=1000;
	printf("\nPilih Format: \n");
	printf("\n\t[1] 12 Jam");
	printf("\n\t[2] 24 Jam");
	printf("\n\t>>> ");scanf("%d", &set);
	
	switch(set){
		case 1:
			printf("\nSetting Jam : ");scanf("%d%d%d", &h, &m, &s);
			if(h>12 || m>60 || s>60) {
				printf("[!] ERROR ! \n");
				exit(0);
			}
			
			while(1){
				s++;
				if(s>59){
					m++;
					s=0;
				}
				if(m>59){
					h++;
					m=0;
				}
				if(h>12){
					h=1;
				}
				printf("\nJam :");
				printf("\n%02d:%02d:%02d", h,m,s);
				Sleep(d);
				system("cls");
				
			}
			break;
		case 2:
			printf("\nSetting Jam : ");scanf("%d%d%d", &h, &m, &s);
			if(h>23 || m>60 || s>60) {
				printf("[!] ERROR ! \n");
				exit(0);
			}
			
			while(1){
				s++;
				if(s>59){
					m++;
					s=0;
				}
				if(m>59){
					h++;
					m=0;
				}
				if(h>23){
					h=0;
				}
				printf("\nJam :");
				printf("\n%02d:%02d:%02d", h,m,s);
				Sleep(d);
				system("cls");
			}
			break;
		default:
			printf("[!] Input ERROR");
			break;
	}
}
