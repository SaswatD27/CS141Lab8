//A program to find the sum of all elements of an array
//include libraries
#include<iostream>
using namespace std;
//write an int function SumArr() with the parameters being an int array A[] and an int variable n which stores the value of the no. of elements of the array
int SumArr(int A[], int n)
{
	//declare an int variable sum to store the value of the sum of the elements of the int array and initialise it as 0
	int sum=0;	
	//start a for loop, initialise an int variable i as 0, and while i remains less than n, run the loop and increment i by 1 after each iteration
	for(int i=0;i<n;i++)
	{
		//add the value of A[i] to sum
		sum+=A[i];
	}
	//return the value of sum
	return sum;
}
//write the main function
int main()
{
	//declare a fairly large int array A and an int variable n to store the no. of elements the user wants to input and ask for the input of n
	int A[70],n;
	cout<<"Enter the no. of integers you wish to enter into the int array - ";
	cin>>n;
	//using a for loop and using the value of n as a limiting value for the loop and an int variable i as a counter (initialised as 0), ask for the input of the elements of the int array A
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Enter element no. "<<i+1<<" - ";		
		cin>>A[i];
	}
	//display the sum of the elements of the int array by calling it with the values of the array A and n as parameters while using cout;
	cout<<endl<<"The sum of the digits of the array is "<<SumArr(A,n);
	//Arrivederci
	return 0;
}
