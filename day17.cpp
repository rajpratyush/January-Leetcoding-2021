class Solution {
public:
    int countVowelStrings(int n) {
        int a[10];
        int i;
      for(i=0;i<5;i++)
          a[i]=1;
        if(n==1)
            return 5;
        else
        {
            while(n--)
            {
                for(i=3;i>=0;i--)
                  {  a[i]+=a[i+1];
                 // cout<<a[i]<<" ";
                  }
               // cout<<endl;
                
            }
            
        }
        return a[0];
        
    }
};
