/*
 * There are three syntax errors:
 *  ex:	if we have a alphabetic wrong in code: int = nit
 * 2-runtime error:
 * 	ex: if we do 1/0.
 * 3-logical error:
 * 	ex: like over or under flow.
 *
 * */
//Preprocessor start with #
#include <stdio.h>
#include <stdlib.h>

/*#define const global variables
*
*
*/
#define PI 3.14
#define Error "Disk error"
#define ONE 1
#define TWO ONE+ONE
#define arraynumber 100
const int ci=6;//Read-only



int main(void) {

	//local variables
	short int si;
	int i,b = 5;// max number is 65535
	long int li = 55UL;// UL means this number is unsigned long.For clarifying only.
	signed short int ssi = -5;
	unsigned short int usi = 65535;// if I write 65537 we have overflow.
	long long int lli;
	//when dont define data type, by default goes on int
	long l;
	signed long int sli;
	unsigned long int uli;
	float f = 7.0/2;// 7/2=3.0000 and 7.0/2=3.5
	double d;
	/* we also can put number in char and it shows us char of that ASCII number
	or for hex number we can write 0x255 and it shows us number.
	Also explain about char and string
	*/
	char c = 'A';//0...255 and signed--> -128 ... 127 -- 8bit or 1byte
	//void

	printf("size short int is: %d bytes\n",sizeof(si));
	printf("size  int is: %d bytes\n",sizeof(i));
	printf("size long int is: %d bytes\n",sizeof(li));
	printf("size signed short int is: %d bytes\n",sizeof(ssi));
	printf("size unsinged short int is: %d bytes\n",sizeof(usi));
	printf("size long long int is: %d bytes\n",sizeof(lli));
	printf("size long is: %d bytes\n",sizeof(l));
	printf("size signed long int is: %d bytes\n",sizeof(sli));
	printf("size unsigned long int is: %d bytes\n",sizeof(uli));
	printf("size float is: %d bytes\n",sizeof(f));
	printf("size double is: %d bytes\n",sizeof(d));
	printf("size char is: %d bytes\n",sizeof(c));

	printf("usi value is: %d\n",usi);
	printf("c value is: %c\n",c);
	printf("ASCII c code is: %d\n",c);
	printf("f value is: %f\n",f);
	/**************************Operators*****************************/
	/*Operators:
	 * 1-unary
	 * 2-binary
	 * 3-ternary
	 * 1-unary: +(sign) -(sign) ++ --
	 * 2-binary: * / + - % = ... += -= *= /= %= |= &= <<=shift to the left
	 *  >>=shift to the right
	 *  == !=not equal >=grater than <=lower than
	 *  logic: &&AND !!OR !2Not something
	 *  bit: &AND |OR ^XOR ~Mokamel
	 *  3-ternary: condition ? job1 : job2
	 *  if condition was true do job1 else do job2
	 *  sizeof: sizeof(i), sizeof int, sizeof i, sizeof(int)
	 *  ,: for separation
	 *  explain about operator precedence.
	*/
	usi = 0;
	printf("true and false check: %d\n",usi ? 1:0);
	usi++;
	printf("usi value is: %d\n",usi);
	usi = usi +50;
	printf("usi value is: %d\n",usi);
	printf("usi value is: %d\n",usi/3);
	usi = usi /2;
	printf("usi value is: %d\n",usi);



	/*Control structures:
	 * if - if else - switch case
	 * while - do while - for
	 * */

	int i1 = 0;
	if (i1 == 5)
	{
		printf("ii value is five\n");
		printf("ii value is:%d\n",i1);
	}else
	{
		printf("ii value is not five\n");
	}

	/*switch(i1) {case 1: break; case 2:break;... case 100: break;default:
	do something}
	*/
	switch(i1){
	case 1:
		printf("ii value first case is:%d\n",i1);
		break;
	case 2:
		printf("ii value second case is:%d\n",i1);
		break;
	case 5:
		break;
	case 10:
		printf("ii value ten case is:%d\n",i1);
		break;
	default:
		//do something
	}

	/*while(i1<=5){
		printf("ii value is:%d\n",i1);
		i1++;
	}*/

	/*do{
		printf("ii value is:%d\n",i1);
				i1++;
	}while(i1<=5);*/

	/*for(int value ;condtion ;update counter){
	 * do something;
	 * }
	 * */
	for(;i1<5;i1++){
		//continue;//repeat if without printf.
		printf("ii value is:%d\n",i1);
	}

	/************************************************************/
	/*************************Array******************************/
	int arr[arraynumber] = {1,2,3,4,5,6,7};//0 to 99
	arr[50] = 50;
	char chararray[arraynumber/2] = {'A','B'};
	char chararray1[arraynumber/2] = "Fill Array";
	char chartest[] = "Hello Hossein";
	int iarry[] = {1,2,3,4,5,6,7,8,9};
	int iarray[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};//4 row, 3 column
	iarray[2][1] = 5;
	for (int i2=0; i2 < 10;i2++) {
		printf("The char is %c :\n",chararray1[i2]);
	}
	/************************************************************/
	/*************************Memory******************************/
	int x = 5;
	int *pointer;
	char *cp;
	double *dp;
	void *vp;// inside void * we can restore every address.
	pointer = &x;//x address
	int i3= 10.5;
	printf("x value is:%d\n",x);
	printf("x address is:%p\n",&x);
	printf("x address is:%p\n",pointer);
	printf("x address is:%d\n",*pointer);//content of address
	printf("i3 value is:%d\n",i3);// casting. i3 is foalt but defined int
	int n1,m1 =3,*p1;
	p1 = &m1;
	n1 = *p1;
	printf("n1 value is:%d\n",n1);
	printf("m1 value is:%d\n",m1);
	printf("p1 address is:%p\n",p1);
	*p1 =50;
	printf("p1 value is:%d\n",*p1);
	printf("p1 address is:%p\n",&p1);
	int a1=2,b1=3;
	int *p2,*p3;

	p2 = &a1;
	p3 = &b1;
	printf("p2 is:%p\n",p2);
	printf("p3 is:%p\n",p3);
	*p2 = *p3;
	printf("p2 is:%p\n",p2);
	printf("p3 is:%p\n",p3);
	printf("*p2 is:%d\n",*p2);
	printf("*p3 is:%d\n",*p3);
	printf("a1 is:%d\n",a1);
	printf("b1 is:%d\n",b1);
	p2 = p3;
	printf("p2 is:%p\n",p2);
	printf("p3 is:%p\n",p3);
	/************************************************************/
	/**************const pointer********************************/
	//const int * ----int * const ---- const int * const
	const int *a2;//content is constant. But address is changable.
	const int au = 7;
	int * const pointer1 = &au;//address is const, But content is changable.
	int b2;
	int *q;
	//q++ q-- q+=3 ...
	const int * const pointer2;//address and content are const.
	int **ptp = &q;/*it(**) mention an address and inside that address
	located another address.*/
	printf("au is:%d\n",au);
	a2 = &au;
	printf("pointer1 is:%p\n",pointer1);
	printf("*pointer1 is:%d\n",*pointer1);
	*pointer1 = 100;
	printf("pointer1 is:%p\n",pointer1);
	printf("*pointer1 is:%d\n",*pointer1);
	printf("au is:%d\n",au);
	printf("a2 is:%p\n",a2);
	printf("*a2 is:%d\n",*a2);
	//*a2 = 10; // Error
	//au = 10; // Error
	b2 = 20;
	printf("b2 is:%d\n",b2);
	q = &au;
	printf("q is:%p\n",q);
	*q = 20;
	printf("*q is:%d\n",*q);
	printf("au is:%d\n",au);

	/************************************************************/
	int * pointerTest = NULL;
	int arrayTest[30];
	/*
	 * arrayTest = &arrayTest[0] ---
	 * arrayTest[i] = *(arrayTest+i) ---
	 * &arrayTest[i] = arrayTest+i
	 * */
	arrayTest[5] = 100;
	*(arrayTest+5) = 100;
	//&arrayTest[5] = arrayTest+5;
	int a4[10];
	int * p4;
	p4 = &a4[3];
	p4[0] = 10;
	p4[1] = 20;
	printf("value is: %d\n",a4[3]);
	printf("value is: %d\n",a4[4]);
	/************************************************************/
	/*
	 * below there are two code with the same behaviour
	 * but first one with array and second one with
	 * pionter.
	 * */
	int i4;
	int array4[10];
	for(i=0;i<10;i++){
		array4[i] = i*100;
		printf("Array4 %d = %d\n",i,array4[i]);
	}
	puts("---------------------------------------");
	int *p5;
	int array5[10];
	int i6 = 0;
	for(p5=array5;p5<=&array5[9];p5++){
		*p5 = i6 * 100;
		printf("Array5 %d = %d\n",i6,array4[i6]);
		i6++;
	}



	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
