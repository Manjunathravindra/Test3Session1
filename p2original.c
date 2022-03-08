#include<stdio.h>
struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
	Fraction f;
	scanf("%d %d",&f.num,&f.den);
	return f;
}
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
	float n1,n2,n3;
	n1=f1.num/f1.den;
	n2=f2.num/f2.den;
	n3=f3.num/f3.den;
	if((n1<n2)&&(n1<n2))
	{
		return f1;
	}
	else if((n2<n1)&&(n2<n3))
	{
		return f2;
	}
	else 
	{
		return f3;
	}
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)
{
	printf("the smallest fraction among %d/%d,%d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);
}
int main()
{
	printf("enter the numerator and denominator of fraction1");
	Fraction f1=input_fraction();
	printf("enter the numerator and denominator of fraction2");
	Fraction f2=input_fraction();
	printf("enter the numerator and denominator of fraction3");
	Fraction f3=input_fraction();
	Fraction largest=Largest_fraction(f1,f2,f3);
	output(f1,f2,f3,largest);
}