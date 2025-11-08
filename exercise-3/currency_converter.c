#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ //accept CLI args
  //argc = arg count
  //argv = arg vector
  // £1 = 1.17 euro
  
  if(argc < 2){
    printf("No command line args provided\n");
    return 1;
  }

  double exchangeRate = atof(argv[1]); //input exchange rate to a float$
  
  double pounds = 1.0; //start from here
  printf("UK Pounds    Euros\n");
  while(pounds <= 100.0){
    double euros = pounds * exchangeRate;
    printf("%9.2f %8.2f\n",pounds, euros);
    if(pounds == 1.0){
      pounds = 10.0; //make it go 1, 10, 20 ...
    }
    else{
      pounds += 10.0;
    }
  }

  return 0;
}
