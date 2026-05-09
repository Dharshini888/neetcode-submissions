class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = grid.size();
        long long N = n * n;
        
        long long expectedSum = N * (N + 1) / 2;
        long long expectedSqSum = N * (N + 1) * (2 * N + 1) / 6;
        
        long long actualSum = 0;
        long long actualSqSum = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                long long val = grid[i][j];
                actualSum += val;
                actualSqSum += val * val;
            }
        }
        
        long long diff = actualSum - expectedSum;  // a - b
        long long sqDiff = actualSqSum - expectedSqSum; // a² - b²
        
        long long sum = sqDiff / diff;  // a + b
        
        long long a = (diff + sum) / 2;
        long long b = a - diff;
        
        return {(int)a, (int)b};
    }
};