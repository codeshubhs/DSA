class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
int n=nums.size();
/*
        vector<int>temp;

        for(int i=0; i<n; i++){

            // first copy non-zero element into temp array 
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }

            // size of no. of non-zero element 
            int nz= temp.size();

            // copy temp to original 

            for(int i=0; i<nz; i++){
                nums[i]=temp[i];
            }

            // push zero end of array 

            for(int i=nz; i<n; i++){
                nums[i]=0;
            }
            */

            // using two pointer 

           /* int j=0; // non-zero k liye hai position 

            for(int i=0; i<n; i++){

                if(nums[i]!=0){
                swap(nums[i], nums[j]);

                j++;
                }
            }*/
        
        vector<int>temp;
       
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
               temp.push_back(nums[i]);
            }
           
        }
        int nz=temp.size();
        
        for(int i=0; i<nz; i++){
          nums[i]=temp[i];
        }
        
       for(int i=nz; i<n; i++){
           nums[i]=0;
       }
        
    }
};