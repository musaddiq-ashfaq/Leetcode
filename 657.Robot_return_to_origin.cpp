class Solution {
public:
    bool judgeCircle(string moves) {
        int pos[2] = {0,0};
        for(int i = 0;i<moves.length();i++){
            if(moves[i] == 'U')
                pos[0]+=1;
            else if(moves[i] == 'D')
                pos[0]-=1;
            else if(moves[i] == 'R')
                pos[1]+=1;
            else
                pos[1]-=1;;
        }  
        if(pos[0] == 0 && pos[1] == 0)
            return true;
        return false; 
    }
};