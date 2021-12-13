int findExtra(vector<int>vec,vector<int>vec1,int n)
{
  int index = n;
  int left = 0,right = n-1;
  
  while(left<=right)
  {
    int mid = (left+right)/2;
    if(vec[mid]==vec1[mid])left = mid +1;
    else {
      index = mid;
      right = mid -1;
    }
  }
  
  return index;
} 
