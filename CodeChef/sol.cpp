class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n = player1.size();
        int sc1 = 0, sc2 = 0;
        bool str1 = false, str2 = false;
        bool spr1 = false, spr2 = false;

        for(int i=0; i<n; i++) {
            int turnsc1 = player1[i];
            int turnsc2 = player2[i];

            // Check if player 1 got a strike
            if(turnsc1 == 10) {
                sc1 += 2*turnsc1;
                if(str1) sc1 += turnsc1;
                if(spr1) sc1 += turnsc1;
                str1 = true;
                spr1 = false;
            }
            // Check if player 2 got a strike
            if(turnsc2 == 10) {
                sc2 += 2*turnsc2;
                if(str2) sc2 += turnsc2;
                if(spr2) sc2 += turnsc2;
                str2 = true;
                spr2 = false;
            }
            // Check if player 1 got a spare
            if(turnsc1 < 10 && turnsc1 + player1[max(0, i-1)] == 10) {
                sc1 += 2*turnsc1;
                if(str1) sc1 += turnsc1;
                spr1 = true;
                str1 = false;
            }
            // Check if player 2 got a spare
            if(turnsc2 < 10 && turnsc2 + player2[max(0, i-1)] == 10) {
                sc2 += 2*turnsc2;
                if(str2) sc2 += turnsc2;
                spr2 = true;
                str2 = false;
            }
            // Add the turn score to the total score
            if(turnsc1 < 10 && turnsc2 < 10) {
                sc1 += turnsc1;
                sc2 += turnsc2;
                str1 = false;
                str2 = false;
                spr1 = false;
                spr2 = false;
            }
        }

        // Compare the scores of player 1 and player 2
        if(sc1 > sc2) return 1;
        else if(sc2 > sc1) return 2;
        else return 0;
    }
};