 
#include <stdio.h>

int main()
{
	int num ;

	printf("Enter an integer number : "); 
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

if (num>=1000)
{
	printf("1000 : 1 \n");
	num=num-1000;
}
else
{
	printf("1000 : 0 \n");
}

if (num>=500)
{
	printf("500 :  1 \n");
	num=num-500;
}
else
{
	printf("500 :  0 \n");
}

if (num>=200)
{
	printf("200 :  1 \n");
	num=num-200;
}
else
{
	printf("200 :  0 \n");
}

if (num>=100)
{
	printf("100 :  1 \n");
	num=num-100;
}
else
{
	printf("100 :  0 \n");
}


if (num>=50)
{
	printf("50 :   1 \n");
	num=num-50;
}
else
{
	printf("50 :   0 \n");
}


if (num>=20)
{
	printf("20 :   1 \n");
	num=num-20;
}
else
{
	printf("20 :   0 \n");
}



if (num>=10)
{
	printf("10 :   1 \n");
	num=num-10;
}
else
{
	printf("10 :   0 \n");
}


if (num>=5)
{
	printf("5 :    1 \n");
	num=num-5;
}
else
{
	printf("5 :    0 \n");
}

if (num>=2)
{
	printf("2 :    1 \n");
	num=num-2;
}
else
{
	printf("2 :    0 \n");
}

if (num>=1)
{
	printf("1 :    1 \n");
	num=num-1;
}
else
{
	printf("1 :    0 \n");
}

    return 0;
}