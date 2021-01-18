class Solution {
    public int maxOperations(int[] nums, int k) {
        ArrayList<Integer> arr = new ArrayList<>();
        
       Arrays.sort(nums);
        
        for(int i : nums)
        {
            arr.add(i);
        }
   
        int i=0;
        int j=arr.size()-1;
        int count=0;
        while(i<j)
        {
           
            if(arr.get(i)+arr.get(j)==k)
            {
                count++;
                arr.remove(j--);
                arr.remove(i);
               j--;
            }
            else if(arr.get(i)+arr.get(j)>=k)
            {
                j--;
            }
            else if(arr.get(i)+arr.get(j)<=k)
            {
                i++;
            }
        }
        return count;
    }
}
