class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int n=tickets.size();
        for(int i=0; i<n; i++){
            q.push(i);
        }
        int time=0;
        while(!q.empty()){
            int person=q.front();
            q.pop();
            tickets[person]--;
            time++;
            if(k==person && tickets[person]==0){
                return time;
            }
            if(tickets[person]>0){
                q.push(person);
            }

        }
        return time;
        
    }
};