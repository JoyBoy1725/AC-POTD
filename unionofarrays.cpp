class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> s; //declaring set  container
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);  //adding all elements of array a in set s
        }
        for(int j=0;j<m;j++)
        {
            s.insert(b[j]);   //adding all elements of array b in set  s
        }
        return s.size();  //returning the size of s since it represent union of both array
    }
};