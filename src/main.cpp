//
//  main.cpp
//  Ice
//  This class file will oversee all others... sorta obvious.

#include <SDL/SDL.h>
#include <iostream>
#include <boost/thread.hpp>  
#include <boost/date_time.hpp>

#include "IceConfig.h"
#include "Provehamus.h"
#include "Core.h"

void theVoidDrawsNear();

int main(int argc, char *argv[])
{
    // insert code here...
    std::cout << "Hello, World!\n";

//  MULTITHREADED? YES. STANDARD BOOST::THREAD LIBRARY, BITCHES.
    boost::thread fusion(initiateFusion);
//  Do OpenGL stuff here.
    inceptoProvehamus();
    
    fusion.join();
//  Terminate.
    terminoProvehamus();

    theVoidDrawsNear();
    
    return 0;
}

void theVoidDrawsNear()
{
    
}