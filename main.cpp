//integer comparison program
//:-)
#include <iostream>

int main()
{
  int x [3];    //array of size 3
  int i = 0;    //loop counter
  int j = 1;    //input counter
  int large = 0;    //largest number temp
  int small = 0;    //smallest number temp


  for (i=0; i<3; i++) //largest number loop
  {
      std::cout<<"Enter " << j++ << " number: "<<std::endl; //user input prompt
      std::cin>>x[i];   //user input

      if(large < x[i])  // largest number comparison
      {
          large = x[i]; //value stored to large
          small = x[i]; //largest values stored for least number comparison
      }
  }

  for (i = 0; i<3; i++) //smallest number loop
  {
      if( small > x[i]) //smallest number comparison
          small = x[i]; //value stored to small
  }

  std::cout<<"The largest number is: "<<large<<std::endl;   //outputs largest number
  std::cout<<"The smallest number is: "<<small<<std::endl;  //outputs smallest number

}
