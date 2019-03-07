#include <iostream>

#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// global

class cpe1b

	{

	public:
		void palindromic_prime(long x);
		void wasteful_number(long x);
		long prime(long num);
		long binary(long num1);
		long reverse(long num2);
		long digit(long num3);
		long primefactorization(long num4);
		long a,c,x,tempA,bin,base,rem,rev,temp,key,b,count,factors,t,i,nano;
		long rem1[100];

	
	};

	

int main() 

	{
	cpe1b y;
	long num,i;
	string str;
	cin>>str;
	cout << "The size of string is= " << str.length()<<endl;

	if(str.length()%2==0)
	{
		for(i=1;i<=str.length();i++)
			{
				y.wasteful_number(i);
			}
		cout<<endl<<str.length()<<" is Even"<<endl;
	}
	if(str.length()%2!=0)
	{
		for(i=1;i<=str.length();i++)
		{
				y.palindromic_prime(i);
		}
		cout<<endl<<str.length()<<" is Odd"<<endl;
	}

return 0;
	}

	

	

void cpe1b::palindromic_prime(long x)

	{
		prime(x);
	}

	
void cpe1b::wasteful_number(long x)
	{
		cout<<endl<<"Wastefull Number?"<<endl;
			digit(x);
		if (count<factors)
			{
			cout<<"Wastefull Number"<<endl;
			cout<<x<<endl;
			}
	}

	

long cpe1b::prime(long num)
	{
		/* PRIME */
		c = 0;
		for (a=2;a<num;a++)
		{
			if (num%a==0)
			{
				c++;
			}
		}
		if (c==0)
		{
			cout<<"PRIME"<<endl;
			binary(num);
		}	
		else
		{
		cout<<"Composite"<<endl;
		cout<<"Not Wastefull number"<<endl;
		}
	}

		

long cpe1b::binary(long num1)

{

	/* bin. */

	tempA=num1;
	bin=0;
	base = 1;
	for (;tempA>0;)
		{
			rem=tempA%2;
			bin=bin+rem*base;
			base = base*10;
			tempA=tempA/2;
		}
	cout<<"Binary= "<<bin<<endl;
	reverse(bin);

}



long cpe1b::reverse(long num2)
{
	/*Rev.*/
	key=num2;
	temp=0;
	rev=0;
	for (;key!=0;)
	{
		temp=key%10;
		key=key/10;
		rev=temp+(rev*10);
	}
		cout<<"Reverse: ";
		cout<<rev<<endl;
	if (rev==num2)
	{
		cout<<"Palindromic Prime"<<endl;
	}
		else
	{
		cout<<"Not Palindromic Prime";
	}

}



long cpe1b::digit(long num3)
{
	b=num3;
	nano=num3;
	count = 0;
	for (;b!=0;)
	{
		b=b/10;
		count++;
	}
	cout<<count;
	primefactorization(nano);
}



long cpe1b::primefactorization(long num4)
{
	x=num4;
	factors=0;
	i=2;
	t=0;
	for (;x!=0;) 
	{

		if (x%i==0)
			{
					x=x/i;
					rem1[t]=i;
					t++;
					factors++;
					if (x==1)
						{
							break;
						}
			}
			else
			{
				i++;
			}
	}

	

	for (i=0;i<factors;i++)
	{
		printf(" %ld ",rem1[i]);
	}

	cout<<endl<<"factors:="<<factors<<endl;
	
}
