#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Roller{
public:
int Rolldice()
{
	int sum;
	sum = rand() % 6 + rand() % 6 + 2;

	return sum;
}
void Game(){

float NumWin=0;
		float NumLoss=0;
		int point;
		int Roll;
		
			for(int i=0;i<20000;i++){
				
		 
		 Roll=Rolldice();
		 if ((Roll == 7) || (Roll == 11)){
		 	cout<<" You Rolled "<<Roll<<" Congratulations, You Won !"<<endl;
		 	NumWin++;
		 }
		 	 else if ((Roll == 2) || (Roll == 3) || (Roll == 12)){
		 		cout<<" You Rolled "<<Roll<< " Unfortunately You Lost !"<<endl;
		 		NumLoss++;
			 }
			 
			 else
		{
			// Continue rolling until we get the point or 7
			point = Roll;
			cout << "Your point is: " << point;
			do
			{
				Roll = Rolldice();
				if (Roll == 7)
				{
					cout<<", You Rolled: "<<Roll<< " Unfortunately You Lost !"<<endl;
					NumLoss++;
				}
				 if (Roll == point)
				{
					cout<<", You Rolled: "<<Roll<<" Congratulations, You Won !"<<endl;
					NumWin++;
				}
			
			} while ((point != Roll) && (Roll != 7));
		}
	
				
			
			
				}
			cout<<"In total you won "<<NumWin <<"games and lost "<< NumLoss <<"games, for a probability of : "<<NumWin/(NumWin+NumLoss)<<endl;


}


};
int main(int argc, char** argv) {
	
	Roller obj;
	obj.Game();	
	
		
		
		
	return 0;
}
