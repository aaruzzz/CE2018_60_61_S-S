// C++ program for insertion sort 

#include<iostream>
using namespace std; 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 
/* Driver code */
int main()  
{  
	repeat:
	int l,k,u;
	cout<<"How many numbers do you want to sort?\n";
	cin>>l;
    int arr[l];
	for(k=0;k<l;k++){
		cout<<"\nEnter number"<<k+1<<":";
		cin>>arr[k];
	}  
    int n = sizeof(arr) / sizeof(arr[0]);  
  
    insertionSort(arr, n);
  	cout<<"\nThe sorted order is:\n\n";  
    printArray(arr, n);  
    cout<<"\nDo you want to sort again? (1 for yes,2 for no)\n";
    cin>>u;
    if(u=1) {goto repeat;}
    else if(u=2) {goto terminate;}
    else{cout<<"Type 1 or 2";}    
    terminate:
    return 0;  
}  
  

