#include<iostream>
using namespace std;
class binary{
	public:
		int binarySearch(int a[], int TKey, int num){
			int low = 0;
			int high = num-1;
			int mid;
			while(high >= low){
				mid = (low + high) / 2;
				
				if(a[mid] == TKey){
					cout << "search successful";
					return mid;
				}
				
				else if(a[mid] > TKey){
					high = mid - 1;
				}
				
				else{
					low = mid + 1;
				}
			}
			return -1;
			
			
		}
};

int main(){
	binary b;
	int num;
	int TKey = 5;
	int a[] = {1 ,5, 7, 9, 8};
	
    num = sizeof(a)/sizeof(a[0]);
    int result = b.binarySearch(a, TKey, num);
    if(result == -1)
    {  
        printf("Element is not present in the given array.");
    }
    else
    {
        printf("Element is present at index: %d", result);
    }
    return 0;
}
