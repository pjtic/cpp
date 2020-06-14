#include <iostream>

int main()
{
  int sum=0, val =50;
  
  while(val <= 100)
	{
		sum = sum + val++;
		
	}	std::cout<<" "<<std::endl;
		std::cout<<"The sum of 50 to 100 is : " 
		<< std::endl << std::endl << sum << std::endl;
		
	
 
	return 0;
}