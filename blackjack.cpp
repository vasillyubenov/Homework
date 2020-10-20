#include <iostream>

int main()
{
	int card1, card2;
	std::cin>>card1>>card2;
	if(card1>=10) card1=10;
	if(card2>=10) card2=10;
	if(card1==1 && card2+11<=21) card1=11;
	if(card2==1 && card1+11<=21) card2=11;
	std::cout<<card1+card2<<"\n";
	if((card1+card2)>21) std::cout<<"Over 21! You lose";
	else std::cout<<"Under 21!";
	
	return 0;
}
