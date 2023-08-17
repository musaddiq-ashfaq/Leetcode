class Solution{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        int i = 0, start = 0, end = image.size() - 1;
        while (i < image.size())
        {
            if (start <= end)
            {
                swap(image[i][start], image[i][end]);
                start++;
                end--;
            }
            else
            {
                i++;
                start = 0, end = image.size() - 1;
            }
        }
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < image[0].size(); j++)
            {
                if (image[i][j] == 0)
                    image[i][j] = 1;
                else
                    image[i][j] = 0;
            }
        }
        return image;
    }
};