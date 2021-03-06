#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <queue>

using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int len = gas.size(), i = 0, idx = i, tank = 0;
        vector<int> sum = vector<int>(len + 1, 0);

        while (i < len)
        {
            int cos = gas[i] - cost[i];
            sum[i + 1] = sum[i] + cos;
            tank += cos;

            if (tank < 0)
            {
                idx = i + 1;
                tank = 0;
            }
            i++;
        }
        return idx == len ? -1 : (tank + sum[idx] >= 0 ? idx : -1);
    }
};

int main()
{
	Solution solution;

	while (getchar());

	return 0;
}