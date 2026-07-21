class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        stack<double> st;

        for (int i = 0; i<position.size(); i++)
            cars.push_back({position[i], speed[i]});
        sort(cars.begin(), cars.end(), [](const auto& a, const auto& b) {
             return a.first > b.first;
        });

        for (int i = 0 ; i<cars.size() ; i++){
            double t = double(target - cars[i].first)/cars[i].second;
            if (!st.empty() && t<=st.top())
             continue;

            st.push(t);
        }
        return st.size();
    }
};
