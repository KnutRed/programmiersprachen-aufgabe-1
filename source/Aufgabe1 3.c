#include <iostream>

int main()
{
  float hilfsCounter = 0.0f;


  std::cout << "Kleinste Zahl die durch 1 bis 20 teilbar ist: \n";

  for (float zahl = 0.0f; zahl < 500000000.0f && (hilfsCounter < 20); zahl++) {
    hilfsCounter = 0;
    for (float teiler = 1.0f; teiler <= 20.0f && ((int)hilfsCounter % (int)teiler == 0.0f); teiler++){
      hilfsCounter++;

    }
    if(hilfsCounter >= 20.0f){
        std::cout << " Zahl = " << zahl << std::endl;
          std::cout << std::endl;

    }

  }

  


  return 0;
}

