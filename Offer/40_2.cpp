#include <iostream>
#include <vector>
#include <set>
using namespace std;

typedef multiset<int, greater<int>> intSet;
typedef multiset<int, greater<int>>::iterator setIterator;

void GetLeastNumbers(const vector<int> &data, intSet &leastNumbers, int k)
{
    leastNumbers.clear();
    if (k < 1 || data.size() < k)
    {
        return;
    }
    vector<int>::const_iterator iter = data.begin();
    for (; iter != data.end(); ++iter)
    {
        if ((leastNumbers.size()) < k)
        {
            leastNumbers.insert(*iter);
        }
        else
        {
            setIterator iterGreatest = leastNumbers.begin();
            if (*iter < *(leastNumbers.begin()))
            {
                leastNumbers.erase(iterGreatest);
                leastNumbers.insert(*iter);
            }
        }
    }
}
int main(int argc, char **argv)
{
    cout << "1+3" << endl;

    return 0;
}
