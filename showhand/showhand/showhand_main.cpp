#include<iostream>
#include<string>
#include "cards_pool.h"

using namespace std;

int main(int argc,char **argv,char **env){
	//cout << "here";
	cards_pool Csp;
	cout << Csp.get_res_card() << endl;
	Csp.flush();
	Csp.shuffle();
	int k = 53;
	//TEST 把52张牌全部发完，看看有没有重复的，漏发的牌。
	while (k--) {
		acard current_card = Csp.deal();
		//打印黑桃
		if (current_card.first == "spade") {
			cout << current_card.first << "\t" << current_card.second << endl;
			cout << Csp.get_res_card() << endl;
		}
	}
	return 0;
	system ("pause");
}