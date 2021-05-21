#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;
typedef pair<string, string> acard;

class cards_pool {
public:
	void flush();//œ¥≈∆
	void shuffle();//«–≈∆
	acard deal();//∑¢≈∆
	int get_res_card();
private:
	int res_cards = 51;
	int num_color = -1;
	int num_point = -1;
	int point = -1;
	//card_map±‹√‚÷ÿ∏¥
	vector<int> card_map = vector<int> (52,0);
	//∫⁄Ã“--spade   ∫ÏÃ“--heart   ≤›ª®--club   ∑ΩøÈ--diamond
	vector<string> card_color = { "spade","heart","club","diamond" };
	vector<string> card_point = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	acard card_Joker = { "JokerA","JokerB" };
};