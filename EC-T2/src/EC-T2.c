#include <stdio.h>
#include <stdlib.h>
/*
 * Variables scope:
 * 1-program : whole program
 * 2-file
 * 3-function prototype
 * 4-function
 * 5-block ()
 * */


int scope = 10;
//extern call other vars from other c files in this c file.
extern int othefile;
//extern int othefile1;
//These are function prototype
void print();
void print1(int,double,char);
void print2(int,double,char);
void print3(int *,double,char);
void print4(int,int);
void print5();

int main(void) {
	printf("-------------example6--------------\n");
	printf("Pass scope: %d\n",scope);
	printf("extern value is: %d\n",othefile);
	//printf("extern value is: %d\n",othefile1);
	/*
	 * String data
	 * */
	printf("-------------example1--------------\n");
	char str1[15] = "New data";
	char str2[] = "New data";
	char *str3 = "New data";

	printf("char is : %c\n",str3[5]);//=printf("char is : %c\n",*(str3+5));
	printf("char is : %c\n",*(str3+5));
	printf("---------------------------\n");
	printf("-------------example2--------------\n");
	/*void copy1(char * const s1,const char * const s2){
		int i;
		for(i=0;s1[i]=s2[i]!='\0';i++);

	}
	void copy2(char * s1,const * s2){
		for(;(*s1=*s2)!='\0';s1++,s2++);

	}*/
	printf("-------------example3--------------\n");
	char str4[4][4] = {{"hi"},{"you"}};
	char *str5[4] = {"hello","How are you","fine","tnx"};
	printf("-------------example4--------------\n");
	int a=1,b=2,c=3,d=4;
	int * k[4] = {&a,&b,&c,&d};

	int i = 0;
	for(;i<4;i++)printf("The contents of k are: %d\n",*k[i]);
	printf("-------------example5--------------\n");
	//Functions structure
	//types: void:No output if we use it behind func as its type,
	//No input if we use it inside func(type), int:has output
	//type functions_name(type n1,type n2, ...){}
	printf("--------------func1-------------\n");
	print();
	printf("--------------func2-------------\n");
	int im=5;
	double dm=4.5;
	char cm='A';
	print1(im,dm,cm);
	printf("--------------func3-------------\n");
	//Call by value
	print2(im,dm,cm);
	printf("Pass int: %d\n",im);
	printf("--------------func4-------------\n");
	//its name is call by preference
	print3(&im,dm,cm);
	printf("Pass int: %d\n",im);
	printf("-------------example6--------------\n");
	int scope = 5;
	printf("Pass scope: %d\n",scope);
	{
		int scope = 100;
		printf("Pass scope: %d\n",scope);
		scope++;
		printf("Pass scope: %d\n",scope);
	}
	printf("Pass scope: %d\n",scope);
	printf("-------------example7--------------\n");
	/*In this example Vars are not increase while counting.
	 * But if func does not have input and we give value
	 * Vars inside func and one of the var being static int ...
	 * that static var will change while counting.
	 * Static keep value inside memory. You can see it in  print5 func.*/
	int x1f=1,x2f=1;
	const int pr4max = 5;
	for (int p4var = 0; p4var < pr4max; p4var++) {
		print4(x1f,x2f);
		printf("......%d.....\n",p4var);
	}
	printf("----------------------------------------\n");
	for (int p41var = 0; p41var < pr4max; ++p41var) {
			print4(x1f,x2f);
			printf("......%d.....\n",p41var);
	}
	printf("----------------------------------------\n");
	for (int p5var = 0; p5var < pr4max; ++p5var) {
				print5();
				printf("......%d.....\n",p5var);
		}
	printf("----------------------------------------\n");
	printf("---------------------------\n");
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

void print(void){
	int a=1,b=2,c=3,d=4;
	int * k[4] = {&a,&b,&c,&d};
	int i = 0;
	for(;i<4;i++){
		printf("The contents of k are: %d\n",*k[i]);
		printf("Funcrepeated times%d\n",i);
	}
}

void print1(int x1,double d1,char c1){
	int a=x1,b=d1,c=3,d=4;
	char c2=c1;
	int * k[4] = {&a,&b,&c,&d};
	int i = 0;
	for(;i<4;i++){
		printf("The contents of k are: %d\n",*k[i]);
		printf("Funcrepeated times%d\n",i);
	}
}

void print2(int x1,double d1,char c1){
	int a=x1,b=d1,c=3,d=4;
	x1++;
	a=x1;
	char c2=c1;
	int * k[4] = {&a,&b,&c,&d};
	int i = 0;
	for(;i<4;i++){
		printf("The contents of k are: %d\n",*k[i]);
		printf("Funcrepeated times%d\n",i);
	}
}
//if we want im change.
void print3(int *x1,double d1,char c1){
	int a=*x1,b=d1,c=3,d=4;
	(*x1)++;
	a=*x1;
	char c2=c1;
	int * k[4] = {&a,&b,&c,&d};
	int i = 0;
	for(;i<4;i++){
		printf("The contents of k are: %d\n",*k[i]);
		printf("Funcrepeated times%d\n",i);
	}
}

void print4(int x1,int x2){
	int x1f = x1;
	int x2f = x2;
	x1f++;
	x2f++;
	printf("The contents of x1f are: %d\n",x1f);
	printf("The contents of x2f are:%d\n",x2f);
}
void print5(){
	int x1f = 1;
	static int x2f = 1;
	x1f++;
	x2f++;
	printf("The contents of x1f are: %d\n",x1f);
	printf("The contents of x2f are:%d\n",x2f);
}
