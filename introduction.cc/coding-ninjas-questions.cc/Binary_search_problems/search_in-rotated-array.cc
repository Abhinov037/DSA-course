int search(int* arr, int n, int key) {
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==key){
 return mid;
}
else if(arr[s]<=arr[mid]){
 if(arr[s]<=key && key<arr[mid]){
 e = mid-1;
}else{
 s=mid+1;
 }
}else{
 if(arr[mid]<key && key <=arr[e]){
 s=mid+1;
 }else{
e=mid-1;
  }
 }
mid=s+(e-s)/2;
}
 return -1;
 }