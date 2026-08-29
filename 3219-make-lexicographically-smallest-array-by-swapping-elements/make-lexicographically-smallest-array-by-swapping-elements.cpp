class Node {
public:
    int value;
    int index;
    Node(int val, int idx) {
        value = val;
        index = idx;
    }
};
class cmp {
public:
    bool operator()(Node* a, Node* b) { return a->value < b->value; }
};

class Solution {
private:
    void helper(auto& pq, int& start, vector<int>& nums, vector<Node*>& temp) {
        while (!pq.empty()) {
            nums[pq.top()] = temp[start]->value;
            start++;
            pq.pop();
        }
    }

public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int start = 0;
        vector<Node*> temp;
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back(new Node(nums[i], i));
        }
        sort(temp.begin(), temp.end(), cmp());
        for (int i = 0; i < temp.size(); i++) {
            if (start != i && temp[i]->value - temp[i - 1]->value > limit) {
                helper(pq, start, nums, temp);
            }
            pq.push(temp[i]->index);
        }
        helper(pq, start, nums, temp);
        return nums;
    }
};