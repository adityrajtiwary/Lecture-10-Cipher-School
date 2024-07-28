// here before we starting this section we need to learn about pre and post increment 
#include<iostream>
using namespace std;

int main()
{
//	int i,j,k;
//	i = 0;
//	j = 0;
//	k = 0;
	
//	cout<<i<<" "<<j<<" "k<<endl;
//	i++; // here we are performing the post increment 
//	j++; // here we are performing the post increment
//	k++; // here we are performing the post increment
//	cout<<i<<" "<<j<<" "k<<endl;
//	 The reason why these variable when printing gets zeroes is because performing the post increment where post means first it will perform the action then it will print the value 
//	++i; // here we are performing pre increment 
//	++j; // here we are performing pre increment 
//	++k; // here we are performing pre increment 
//	cout<<i<<" "j<<" "k<<" "<<endl;
//	 here when the output will be coming 2 because the post increment operation which we perform above will increase the variable value by 1 and after performing the increment sign before the variable will increase the value of variable before performing th operation 

	 int i; // here we have initialized an variable 
	  
	 for(i=1;i<=100;i++) // here we are using for loop where for loop is having an interator , condition and increment, where i variable is the iterator and i<=100 is the condition and i++ will be the increment like how the way we want to increment the value after performing every option
	 {
	 	cout<<i<<" ";
		}		
		
	return 0;
}
