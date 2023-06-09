//Approach 1 - using linear search O(n) time complexity
for(int i=0;i<letters.size();i++){
    if(letters[i]>target){
      return letters[i];
      break;
}
}
return letters[0];
}
//Approach 2 - using binary search O(logn) time complexity
int s=0;
int e=letters.size()-1;
char ans;
if(letters[0]>target) return letters[0];
else if(target >= letters[letters.size()-1]) return letters[0];
while(s<=e){
  int mid=s+(e-s)/2;
  if(letters[mid]<=target)
      s=mid+1;
  else {
      ans=letters[mid];
      e=mid-1;  
        }
}
return ans;
}
