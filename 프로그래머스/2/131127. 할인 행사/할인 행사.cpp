#include <string>
#include <vector>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount)
{
    int answer = 0;
    vector<int> v;
    v.reserve(number.size());
    bool find = false;
    
    for (int i = 0; i <= discount.size() - 10; i++)
    {
        for (int j = 0; j < number.size(); j++)
        {
            v[j] = number[j];
        }
        
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < want.size(); k++)
            {
                if (discount[i + j] == want[k])
                {
                    if (v[k])
                    {
                        v[k]--;
                        break;
                    }
                }
            }
        }
        
        bool tmp = false;
        for (int j = 0; j < number.size(); j++)
        {
            if (v[j] != 0)
            {
                tmp = true;
                break; 
            }
        }
        
        if (tmp == false)
        {
            answer += 1;
            find = true;
        }
    }
    
    if (!find) answer = 0;
    
    return answer;
}