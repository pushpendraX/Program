#include<iostream>
using namespace std;

struct node
{
	int val;
	node *link;
};

node *insertBeg (node *start, int value)
{
	node *newnode = new node();
	newnode ->val=value;
	newnode ->link= start;
}
void *traverse (node *start)
{

	while(start!=NULL)
	{
	cout<<start->val;
	start=start->link;
	}
}


void add(node *LL1, node *LL2)
{
	node *L=NULL;
	int data1=0,data2=0,sum=0,carry=0;
	while((LL1!=NULL) && (LL2!=NULL))
	{
		data1 = LL1->val;
		data2 =LL2->val;

		sum = (data1 + data2 + carry)% 10;

		L = insertBeg(L,sum);
		carry =(data1 + data2 + carry)/ 10;
		LL1=LL1->link;
		LL2=LL2->link;

	}
		while(LL1 !=NULL)
		{

			data1 = LL1->val;
			sum = (data1 + carry)%10;
			L= insertBeg(L,sum);
			carry = (data1 + carry)/10;
			LL1 = LL1->link;
		}

		while(LL2 !=NULL)
		{
			data2 = LL2->val;
			sum = (data2 + carry)%10;
			L= insertBeg(L,sum);
			carry = (data2 + carry)/10;
			LL2 = LL2->link;
		}

	if(carry!=0)
	{
		L= insertBeg(L,carry);
	}
	cout<<"\nThe Sum of your number is :";
	traverse(L);
}
int main()
{
	node *LL1=NULL, *LL2 =NULL;
	int number;
	{

		cout<<"Enter the first number: ";
		cin>>number;

		LL1= insertBeg(LL1,number);
	}
   {

		cout<<"Enter the second number: ";
		cin>>number;

		LL2= insertBeg(LL2,number);
	}
    add(LL1,LL2);

}
