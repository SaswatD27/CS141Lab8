//A program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array
//include libraries
#include<iostream>
using namespace std;
//write an int function largn() with the parameters being an int array A[], an int variable n storing the no. of elements of the array A[]
int largn(int A[], int n)
{
	//declare an int variable l for storing the value of the largest element of A and initialise it with the value of A[0]
	int l=A[0];
	//initiate a for loop by initialising a counter int variable i as 1 (as A[0] is taken to be the initial value of l already) and as long as i remains less than n, run the loop and increment i by 1 for each iteration
	for(int i=1;i<n;i++)
	{
		//if A[i] turns out to be greater than l, then assign the value of A[i] to l
		if(l<A[i])
		l=A[i];
	}
	//return l
	return l;
}
//write an int function smalln() with the parameters being an int array A[], an int variable n storing the no. of elements of the array A[]
int smalln(int A[], int n)
{
	//declare an int variable s for storing the value of the largest element of A and initialise it with the value of A[0]
	int s=A[0];
	//initiate a for loop by initialising a counter int variable i as 1 (as A[0] is taken to be the initial value of l already) and as long as i remains less than n, run the loop and increment i by 1 for each iteration
	for(int i=1;i<n;i++)
	{
		//if A[i] turns out to be smaller than s, then assign the value of A[i] to l
		if(s>A[i])
		s=A[i];
	}
	//return s
	return s;
}
//write an float function meann() with its parameters being an int array A[] and an int variable n storing the no. of elements inputted into the array A[]
float meann(int A[], int n)
{
	//declare a counter int variable i and an int variable mean and initialise both with the value 0
	int i=0;
	int sum=0;	
	//using a for loop do the following: while i remains lesser than n, then add the value of A[i] to mean and increase i by 1 for each iteration
	for(;i<n;i++)
	{
		sum+=A[i];
	}
	//divide mean by n and store the resulting value in mean
	float mean=float(sum)/n;	
	//return the value of mean
	return mean;
}
//write a float function medn() with the parameters A[] (an int array), n (an int variable storing the value of the no. of elements of A[])
float medn(int A[], int n)
{
	//declare a counter variable i (which is assigned an initial value of 0) and int variable a and an int variable l with an initial value equal to the first element of A[] and a float variable m
	int i=0,l=A[0],a;
	float m;
	//now while i is less than n run the for loop increasing i by 1 each time
	for(;i<n;i++)
	{		
		//running a for loop while j (a counter int variable initialised as 1) is less than n
		for(int j=1;j<n;j++)
		{
		//if A[j] is lesser than its preceding element swap their values using a to hold temporary values
			if(A[j-1]>A[j])
			{
				a=A[j-1];
				A[j-1]=A[j];
				A[j]=a;
			}
		}
	}
	//if n is even then the mean of the two middle elements of the sorted array is to be taken as the median
	if(n%2==0)
	m=(A[n/2]+A[(n/2)-1])/2;
	//if n is odd then take the middle element as the median
	else if(n%2==1)
	m=A[((n-1)/2)];
	//return the value of the median
	return m;
}
//write a void function moden with the int array A[] and the int variable n (storing the no. of elements of A) as its parameters
void moden(int A[],int n)
{
	//declare an int array B[] and two int variables c and p and initialise p as 0
	int B[n],c,p=0;
	//run a for loop, declare int variables a and i, initialise i as 0, and while i is less than n, increment p and i both by 1 
	for(int a,i=0,j;i<n;p++,i++)
	{
		//assign the value of A[i] to a, and assign c a value of 0
		a=A[i];
		c=0;
		//write a nested for loop and declare a counter int variable j (initialised as 0) and increment j by 1 with each iteration and run the loop while j remains smaller than n
		for(j=0;j<n;j++)
		{
			//if the value of A[j] matches that of a, increment c by 1 i.e. c counts the no. of occurences of an element
			if(A[j]==a)
			c++;
		}
		//store the value of c (i.e. the no. of occurences of A[i] in B[p]
		B[p]=c;
	}
	//declare an int variable m and use it to hold the returned value of largn() declared with the parameters B[] and p (the size of B which obtained from the above for loop
	int m=largn(B,p);
	//run a for loop, declare an int variable a, and a counter variable i which is initialised as 0 and while i is less than n, keep incrementing i by 1 with each iteration
	for(int a,i=0,j;i<n;i++)
	{
		//assign a the value of A[i] and c the value 0
		a=A[i];
		c=0;
		//write a for loop with a counter int variable j initialised as 0 to find out the no. of occurences of A[i] in A[] i.e. if A[j]'s value matches that of a, increment c by 1
		for(j=0;j<n;j++)
		{
			if(A[j]==a)
			c++;
		}
		//if the no. of occurences, c, is equal to the max no. of occurences of an element of the array A[] (i.e. m), print the said element as a mode of the array
		if(c==m)
		cout<<"Mode - "<<A[i]<<endl;
	}		
}
//write the main function
int main()
{
	//declare an array A[] of suitable size and n to store the input for the size of the array
	int A[50],n;
	//ask for input of n, then for the input of A[] (A is restricted to having n elements of course)
	cout<<"Enter the no. of digits you want to input into the int array - ";	
	cin>>n;
	cout<<endl<<"Enter the elements of the int array - ";
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element no. "<<i+1<<" - ";
		cin>>A[i];
	}
	//call the functions largn(), smalln(),medn(),meann() and moden() with the parameters A and n and display the results for the first four (as moden()'s results are displayed using the print command within the function body)	
	cout<<endl<<"The largest no. entered is "<<largn(A,n);
	cout<<endl<<"The smallest no. entered is "<<smalln(A,n);
	cout<<endl<<"The median value is "<<medn(A,n);
	cout<<endl<<"The mean value of the elements is "<<meann(A,n);
	cout<<endl;
	moden(A,n);
	//Arrivederci
	return 0;
}
