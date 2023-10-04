class Solution {
public:
    int maxProfit(vector<int>& prices) {
       ios_base::sync_with_stdio(false);
       cin.tie(nullptr);
       cout.tie(nullptr);
       
 int maxi = 0;
int minimum = prices[0];
for (int i=0; i< prices.size(); i++ ){
minimum = min(minimum ,prices[i]);
maxi = max(maxi ,prices[i] - minimum );
}
return maxi;
}
};
