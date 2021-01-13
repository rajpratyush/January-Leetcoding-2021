class Solution {
    public int numRescueBoats(int[] people, int limit) {
        Arrays.sort(people);
        int boat=0,left=0,right=people.length-1;
        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                left++;
                right--;
            }
            else
            {
                right--;
            }
            boat++;
        }
        return boat;
    }
}
