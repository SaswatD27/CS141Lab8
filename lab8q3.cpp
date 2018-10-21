//include libraries
#include<iostream>
using namespace std;
//write an int function ksmaln with the parameters being an int array A[], an int variable n storing its size and an int variable k storing the input for the position of the required no. from the beginning (when the array is sorted in an ascending order)
int ksmaln(int A[],int n,int k)
{
	//declare an int variable a to act as a holder of temporary int values
	int a;
	//write a for loop with a counter int variable i (initialised as 0) and while i is lesser than n, increment i by 1 with each iteration
	for(int i=0;i<n;i++)
	{
		//write a nested for loop within the above mentioned for loop with an int variable j as the counter (initialised as 0) and while j is lesser than n, increment j by 1 with each iteration
		for(int j=0;j<n;j++)		
		{
			//if A[j] is greater than the next element in A[], swap their values
			if(A[j]>A[j+1])
			{
				a=A[j];
				A[j]=A[j+1];
				A[j+1]=a;
			}
		}
	}
	//return the kth element of A
	return A[k-1];
}
//write an int function klargn with the parameters being an int array A[], an int variable n storing its size and an int variable k storing the input for the position of the required no. from the end (when the array is sorted in an ascending order)
int klargn(int A[],int n,int k)
{
	int a;	
	for(int i=0;i<n;i++)
	{
		//write a nested for loop within the above mentioned for loop with an int variable j as the counter (initialised as 0) and while j is lesser than n, increment j by 1 with each iteration
		for(int j=0;j<n;j++)		
		{
			//if A[j] is greater than the next element in A[], swap their values
			if(A[j]>A[j+1])
			{
				a=A[j];
				A[j]=A[j+1];
				A[j+1]=a;
			}
		}
	}
	//return the element of A which is the kth from the end i.e. the (n-k+1)th element
	return A[n-k];
}
//write the main function
int main()
{
	//declare an int array A[] of sufficient size, an int variable n to store the no. of elements of A[] being input and an int variable k as the user defined parameter
	int A[50],n,k;
	//ask for input of n, k and then A[] (which is restricted to having n elements only)
	cout<<"Enter the no. of elements you want to input into the array - ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element no. "<<i+1<<" - ";
		cin>>A[i];
	}
	cout<<"Enter a natural no. denoting the position of the element in the order from the left or right of the ascending series - ";
	cin>>k;
	//call the functions ksmaln() and klargn() with A[],n and k as parameters and print the results
	cout<<endl<<"The "<<k<<"th largest no. is "<<klargn(A,n,k);
	cout<<endl<<"The "<<k<<"th smallest no. is "<<ksmaln(A,n,k);
	//Auf wiedersehen
	return 0;
}
