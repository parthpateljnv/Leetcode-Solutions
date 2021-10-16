class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> arr(n,vector<int> (n));
 
    // Iterate through every line and
    // print integer(s) in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of integers
        // equal to line number
        arr[line].resize(line+1);
        for (int i = 0; i <= line; i++)
        {
        // First and last values in every row are 1
        if (line == i || i == 0){
            arr[line][i] = 1;
        }
        // Other values are sum of values just
        // above and left of above
        else{
            arr[line][i] = arr[line - 1][i - 1] +
                            arr[line - 1][i];
        }
        //cout << arr[line][i] << " ";
        }
        
    }
    return arr;
    }
};