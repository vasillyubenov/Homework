#include <iostream>
#include <string>

int main()
{
	std::string first_str, second_str;
	int number,first_nm,second_nm;
	std::cin>>number;
	first_nm=number/10;
	second_nm=number%10;
	switch(second_nm)
	{
		case 1: second_str="one";break;
		case 2: second_str="two";break;
		case 3: second_str="three";break;
		case 4: second_str="four";break;
		case 5: second_str="five";break;
		case 6: second_str="six";break;
		case 7: second_str="seven";break;
		case 8: second_str="eight";break;
		case 9: second_str="nine";break;
	}
	switch(first_nm)
	{
		case 1:
			{
			switch(second_nm)
			{
			case 1: std::cout<<"evelen";break;
			case 2: std::cout<<"twelve";break;
			case 3: std::cout<<"thirteen";break;
			case 4: std::cout<<"fourteen";break;
			case 5: std::cout<<"fifteen";break;
			case 6: std::cout<<"sixteen";break;
			case 7: std::cout<<"seventeen";break;
			case 8: std::cout<<"eighteen";break;
			case 9: std::cout<<"nineteen";break;
			}	
			}
		case 2: first_str="twenty";break;
		case 3: first_str="thirty";break;
		case 4: first_str="fourty";break;
		case 5: first_str="fifty";break;
		case 6: first_str="sixty";break;
		case 7: first_str="seventy";break;
		case 8: first_str="eighty";break;
		case 9: first_str="ninety";break;
	}
		 if(first_nm!=1) std::cout<<first_str<<" "<<second_str;	
	return 0;
}
