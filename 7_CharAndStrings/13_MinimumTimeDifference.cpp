#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> timePoints{"23:59","00:00"};
        vector<int>temp;

        //CONVERSION TO MINUTES:-  TC= o(n)
        
        for(int i =0;i<timePoints.size();i++)
        {
            string s  = timePoints[i];
            int hour = stoi(s.substr(0,2));
            int minute = stoi(s.substr(3,2));
            int total = hour*60 +minute;
            temp.push_back(total);
        }
        

        //SORT THE VECTOR OF MINUTES:- TC = O(nlogn)

        sort(temp.begin(),temp.end());


        //CALCULATE THE  MIN. DIFFERENCE:-  TC = O(n)

        int mini = INT_MAX;
        int n = temp.size();
        for(int i =0;i<n-1;i++)
        {
            int difference  = temp[i+1] - temp[i];
            mini = min(difference,mini);

        }
        
        int lastdiff1 = (temp[0] + 1440) - temp[n-1]; 
        int lastdiff2=temp[n-1]- temp[0];
        mini=min(lastdiff1,mini);
        mini=min(mini,lastdiff2);

        cout<< mini;
    }