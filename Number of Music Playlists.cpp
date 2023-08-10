
//Link- https://leetcode.com/problems/number-of-music-playlists/

class Solution {
public:
   #define ll long long
    const int MOD = 1e9 + 7;
    ll fn(int n, int goal, int k, vector<vector<int>>& dp) {
        if (n == 0 && goal == 0) return 1;
        if (n == 0 || goal == 0) return 0;
        if (dp[n][goal] != -1) return dp[n][goal];
        ll pick = fn(n - 1, goal - 1, k, dp) * n;
        ll notpick = fn(n, goal - 1, k, dp) * max(n - k, 0);
        return dp[n][goal] = (pick + notpick) % MOD;
    }

    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<int>> dp(n + 1, vector<int>(goal + 1, -1));
        return fn(n, goal, k, dp);
    }
};