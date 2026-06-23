class Solution {
public:
int bs(vector<int>& arr, int target , int st , int end){
   int mid = st + (end-st)/2;
   if(st<=end){
    if(arr[mid] == target)
    return mid;
    if(arr[mid]<target)
    return bs(arr , target , mid+1 , end);
    if(arr[mid]>target)
    return bs(arr , target , st , mid -1);
   }
   return -1;
}
    int search(vector<int>& arr, int target) {
        
    return    bs(arr , target , 0 , arr.size()-1);
    }
};