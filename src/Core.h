//
//  Core.h
//  Ice
//

#include <stdio.h>
#include <stdlib.h>

#include <boost/thread.hpp>  
#include <boost/date_time.hpp>

/*
 
 Our data is going to have to:
 A. Exist in some coherant format.
 B. Have a layer of separate abstraction that is separate from the that determines the amount of power dedicated to sections of space.
 
   +------+------+
  /|     /|  *  /|
 +------+------+ |
 | +---*|-+----|-+
 |/|  * |/|  * |/|
 +------+------+ |
 | +-*--|-+-*--|-+
 |/   * |/*    |/
 +------+------+
 Figure 1.

 At its base level, each cube is going to look like Figure 2: A set of cubes that have such and such a quantity of particles, energy, and other such relevant properties. Our code will manipulate each cube's variables based upon surrounding space: a.k.a a standard n-body model at this point. However, n-body models can only go so far when one is dealing with such a large quantity of matter and space. This is where we introduce the statistical model, and incorporate it on a small scale.
 
   +------+------+
  /333333/111111/|
 +------+------+1|
 |333333|111111|1+
 |333333|111111|/|
 +------+------+7|
 |555555|777777|7+
 |555555|777777|/
 +------+------+
 Figure 2.
 
 A statistical model would rely in this situation upon more general descriptions, and can only produce approximate results; it's applied statistics rather than physics. However, it has the bonus of being far less taxing upon the processor, and allows one to work with far larger scenarios.
 This code will implement both. At its absolute smallest level, it will not be dealing with particles, but with densities of particles, and other such statistically manipulatable variables. It will resemble Figure 2 far more than Figure 1. One can, however, apply n-body simulation characteristics to this statistical model, through treating sectors of space as particles of cumulative mass, and using this to simplify the calculations.
 However, at this point we are left with an n-body simulation with statistical characteristics, one that will likely still consume too much power. Optimization will be a key component here in assuring a runable simulation. There are two 
 */

void initiateFusion();

struct kronosSpawn {
    float timeFlux, co[2], rad;
};

// This is our worker class. We'll spawn a certain number, each of which can start its own thread. 
class automaton {
    boost::thread m_thread;
    
public:
    void start();
    void join();
    
    void loadData();
    void callUponKronos();
};

// Stellar Classes
// Point is the base class for all of our objects. 
class point {
};
class pointAggregate {
};