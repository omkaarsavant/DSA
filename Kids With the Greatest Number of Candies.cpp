class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int c = extraCandies;
        vector<bool> result(n, false);  
        vector<int> maxi;
        maxi=candies;
        sort(candies.begin(), candies.end()); //sorting vector
        
        for (int i = 0; i < n; i++) {
            int j = maxi.at(i) + c; //.at to access element
            if (j >= candies.at(n - 1)) {  // Compare with the last element in the sorted list
                result[i] = true;
            }
        }
        return result;
    }
};
