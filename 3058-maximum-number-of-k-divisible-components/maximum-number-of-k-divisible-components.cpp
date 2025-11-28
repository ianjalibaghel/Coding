class Solution {
public:
    int ans = 0;

    long long dfs(int node, vector<int> adj[], vector<int>& values, int k, int parent) {
        long long sum = values[node]; // Use long long to prevent overflow
        for (auto& neighbour : adj[node]) {
            if (neighbour == parent) continue;
            sum += dfs(neighbour, adj, values, k, node);
        }
        if (sum % k == 0) {
            ans++;
            sum = 0;
        }
        return sum;
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<int> adj[n];
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        long long tot = dfs(0, adj, values, k, -1);
        return ans - (tot % k != 0); // Adjust for the total sum case
    }
};