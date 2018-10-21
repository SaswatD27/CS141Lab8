//include libraries
#include<iostream>
using namespace std;
//write a void function concatstr() with the parameters being int arrays A[] and B[] and int variables m and n storing the no. of elements of A[] and B[] respectively
void concatstr(int A[],int B[],int m,int n)
{
	//declare an int array C having a size equal to m+n and a counter int variable p and initialise it with the value 0
	int C[m+n],p=0;
	//run two for loops with the counter int variable i which is initialised as 0 in each for loop definition and assign the values of the elements of first A[] then B[] to C[] in the two separate for loops without reseting the value of p to 0 for the second for loop
	for(int i=0;i<m;i++,p++)
	C[p]=A[i];
	for(int i=0;i<n;i++,p++)
	C[p]=B[i];
	//print the elements of C
	cout<<"The concatenated string is - ";	
	for(int i=0;i<m+n;i++)
	cout<<C[i]<<" ";
}
//declare an int function maxelem() with the parameters A[], B[], m and n (the parameters meaning the same as for the above function)
int maxelem(int A[],int B[],int m,int n)
{
	//find the max element of A using a for loop, declare an int variable maxA and initialise it with the value of A[0] and traverse through A[] and if an element with a value larger than that of maxA is found, assign the value of that element of A to maxA; do the same for B this time using the variable maxB to store the max value of the elements of B[]
	int maxA=A[0];
	for(int i=0;i<n;i++)
	{
		if(maxA<A[i])
		maxA=A[i];
	}
	int maxB=B[0];
	for(int i=0;i<n;i++)
	{
		if(maxB<B[i])
		maxB=B[i];
	}
	//print the larger one out of maxA and maxB
	if(maxA>=maxB)
	return maxA;
	else return maxB;
}
//declare an int function maxelem() with the parameters A[], B[], m and n (the parameters meaning the same as for above functions)
int minelem(int A[],int B[],int m,int n)
{
	//find the minimum element of A using a for loop, declare an int variable minA and initialise it with the value of A[0] and traverse through A[] and if an element with a value smaller than that of maxA is found, assign the value of that element of A to minA; do the same for B this time using the variable minB to store the minimum value of the elements of B[]	
	int minA=A[0];
	for(int i=0;i<n;i++)
	{
		if(minA>A[i])
		minA=A[i];
	}
	int minB=B[0];
	for(int i=0;i<n;i++)
	{
		if(minB>B[i])
		minB=B[i];
	}
	//print the larger one out of maxA and maxB
	if(minA<=minB)
	return minA;
	else return minB;
}
//write the main function
int main()
{
	//declare two int arrays A[] and B[] of suitable sizes and m and n (int variables) to store the input for no. of elements of A[] and B[] respectively
	int A[50],B[50],m,n;
	//ask for and take the input for m and n then ask for the input of the elements of A[] and B[]
	cout<<"Enter the no. of elements you want to input into array 1 - ";
	cin>>m;
	cout<<"Enter the no. of elements you want to input into array 2 - ";
	cin>>n;
	cout<<"Enter the elements of the first array - ";
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the elements of the second array - ";
	for(int i=0;i<n;i++)
	{
		cin>>B[i];
	}
	//call the functions concatstr(), maxelem() and minelem() with the parameters A[], B[], m and n and display the results (well the print command for concatstr is within the function body itself so no need of displaying the results using cout here
	concatstr(A,B,m,n);
	cout<<endl<<"The maximum element present in both arrays is - "<<maxelem(A,B,m,n);
	cout<<endl<<"The minimum element present in both arrays is - "<<minelem(A,B,m,n);
	//sayonara
	return 0;
}
