/////////////////////
//Anna Tran
//CS 172 Sec 1
//11.5
/////////////////////

#include<iostream>
using namespace std;

int findsmallest(int* array, int size)
{
	int smallest = array[0];
	//look through each element in array
	
		for (int k = 1; k < size; k++)
		{
			if (array[k] < smallest)
				smallest = k;
			
	}
	//return element in array
		return array[smallest];
	
}
int main()
{

	int* array = new int[8] { 1,2,4,5,10,100,2,-22 };

	//call function 
	findsmallest(array, 8);
	cout << "The smallest number is " <<findsmallest(array,8);
	
	


		
}