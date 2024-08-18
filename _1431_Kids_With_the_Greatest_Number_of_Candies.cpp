class Solution{
     public:
     vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
          vector<bool> result(candies.size(),0);
          int maxm=INT_MIN;
          for(int i=0; i<candies.size(); i++){
               maxm=max(maxm,candies[i]);
          }
          for(int i=0; i<candies.size(); i++){
               if((candies[i]+extraCandies)>=maxm) result[i]=true;
          }
          return result;
     }        
}