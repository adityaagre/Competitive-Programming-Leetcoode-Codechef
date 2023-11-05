// https://practice.geeksforgeeks.org/batch/dsa-sp-gfg-pccoe/track/DSASP-Arrays/problem/-matchsticks-game4906
/*
 Two friends, A and B, are playing the game of matchsticks. In this game, a group of N matchsticks is placed on the table. The players can pick any number of matchsticks from 1 to 4 (both inclusive) during their chance. The player who takes the last match stick wins the game. If A starts first, how many matchsticks should he pick on his 1st turn such that he is guaranteed to win the game or determine if it's impossible for him to win. Return -1 if it's impossible for A to win the game, else return the number of matchsticks should he pick on his 1st turn such that he is guaranteed to win.
Note : Consider both A and B play the game optimally.
*/
class Solution {
  public:
    int matchGame(long long N) {
        // code here
        if(N%5==0) return -1;
        
        return N%5;
    }
};
