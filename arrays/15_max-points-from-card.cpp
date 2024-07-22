class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int maxi = INT_MIN;
        int first=0;
        for(int i=0; i<k; i++)
        {
            first+=cardPoints[i];
        }
        maxi=max(maxi, first);
        int sec=0;
        int i=k-1, j=n-1;
        while(first>0)
        {
            first-=cardPoints[i];
            i--;
            sec+=cardPoints[j];
            j--;
            maxi=max(maxi, first+sec);
        }
       return maxi;
    }
};