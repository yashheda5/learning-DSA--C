#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> timepoints{"23:59", "00:00"};
    vector<int> minutes;
    for (int i = 0; i < timepoints.size(); i++)
    {
        string curr = timepoints[i];
        int hours = stoi(curr.substr(0, 2));
        int mins = stoi(curr.substr(3, 2));
        int totalMin = hours * 60 + mins;
        if (totalMin == 0)
        {
            minutes.push_back(1440);
        }
        else
        {
            minutes.push_back(totalMin);
        }
    }
    sort(minutes.begin(), minutes.end());
    int mini = INT_MAX;
    for (int i = 0; i < minutes.size(); i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }
    
    cout << mini << endl;
}