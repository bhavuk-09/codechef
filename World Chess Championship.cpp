/*Statement:The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, and the loser gets 0 points. If it’s a draw, both players get 1 point each.

The total prize pool of the championship is 100⋅X. At end of the 14 Classical games, if one player has strictly more points than the other, he is declared the champion and gets 60⋅X as his prize money, and the loser gets 40⋅X.

If the total points are tied, then the defending champion Carlsen is declared the winner. However, if this happens, the winner gets only 55⋅X, and the loser gets 45⋅X.

Given the results of all the 14 games, output the prize money that Carlsen receives.

The results are given as a string of length 14 consisting of the characters C, N, and D.

C denotes a victory by Carlsen.
N denotes a victory by Chef.
D denotes a draw.
Input Format
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains one integer X, denoting that the total prize pool is 100⋅X.
The second line contains the results of the match, as a string of length 14 containing only the characters C, N, and D.
Output Format
For each test case, output in a single line the total prize money won by Carlsen.

Constraints
1≤T≤1000
1≤X≤106
|S|=14
S contains only characters D, C, N.
Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
4
100
CCCCCCCCCCCCCC
400
CDCDCDCDCDCDCD
30
DDCCNNDDDCCNND
1
NNDNNDDDNNDNDN
Sample Output 1 
6000
24000
1650
40 */
*********************************************************************************************************************************************************

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int x;
	    cin>>x;
	    int c,N,d;
	    c=0;d=0;N=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<14;i++){
	        if(s[i]=='C'){
	            c++;
	        }
	        if(s[i]=='N'){
	            N++;
	        }
	        if(s[i]=='D'){
	            d++;
	        }
	    }
	    
	    
	    int s1= 2*c +d;
	    int s2= 2*N +d;
	    if(s1>s2){
	        cout<<x*60<<endl;
	    }
	    else if(s1<s2){
	        cout<<x*40<<endl;
	    }
	    else{
	        cout<<x*55<<endl;
	    }
	}
	return 0;
}
