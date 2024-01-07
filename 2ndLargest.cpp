class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	   int max=INT_MIN;  //assigning minimum value of integer
	   int max2=INT_MIN;  //assigning minimum value of integer
	   for(int i=0;i<n;i++)  //loop till n-1
	   {
	       if(arr[i]>max)  //check if element of array is greater the max
	       {
	           max2=max;         //if yes then puuting value of max in max2
	           max=arr[i];       //and element of array in max
	       }else if(max2<arr[i] && arr[i] !=max)  //checking if max2 is less than element of array and max is not equal to array element
	       {
	           max2=arr[i];  //if yes the put element of array in max2
	       }
	   }
	   return max2==INT_MIN ? -1 : max2 ;   //if max2 remains same as starting value then return -1 else value of max2
	   
	}
};