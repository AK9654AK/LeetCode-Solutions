class Solution {
public:
   

int suitc(vector<char>& suits) {
    sort(suits.begin(),suits.end());
    int maxi = -1;
    int c = 1;
    for (int i = 0; i < suits.size() - 1; i++) {
        if (suits[i] == suits[i + 1])
            c++;
        else
            c = 1;
        maxi = max(c, maxi);
    }
    return maxi;
}

int rankc(vector<int>& ranks) {
    sort(ranks.begin(), ranks.end());
    int maxi = -1;
    int c = 1;
    for (int i = 0; i < ranks.size() - 1; i++) {
        if (ranks[i] == ranks[i + 1])
            c++;
        else
            c = 1;
        maxi = max(c, maxi);
    }
    return maxi;
}

string bestHand(vector<int>& ranks, vector<char>& suits) {
    int c1 = rankc(ranks);
    int c2 = suitc(suits);

    if (c2>= 5)
        return "Flush";
    else if (c1 >= 3)
        return "Three of a Kind";
    else if (c1 == 2)
        return "Pair";
    else
        return "High Card";
}




};