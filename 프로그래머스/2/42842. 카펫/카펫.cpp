#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    int W = 0, H = 0;
    
    int S = (brown - 4) / 2;
    
    for (int i = 1; i <= S - 1; ++i)
    {
        if (i * (S - i) == yellow)
        {
            int A = i;
            int B = S - i;
            W = A + 2;
            H = B + 2;
            if (W < H) swap(W, H);
            break;
        }
    }
    
    answer.push_back(W);
    answer.push_back(H);
    
    return answer;
}