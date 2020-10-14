/*SmithsoniansTransforms.cpp, with many thanks to the Smithsonian Astrophysical Observatory*/

#include <iostream>
#ifdef __cplusplus 
extern "C" {
#endif
#include "transforms.h"
#ifdef __cplusplus 
}
#endif

/*here the hilbert transform of a real signal is computed, you can check from the output how the 
real part of the output equals the input.


CAREFULLY READ COMMENTS OF THE AUTHORS ABOVE THEIR FUNCTIONS IN "transforms.c" BEFORE USING THEM.


I did not write those functions, the Smithsonian Astrophysical Observatory did. 
I just isolated the references for the transforms from a much bigger project
(https://www.cfa.harvard.edu/~spaine/am/) and provided an example on how to use them in c++.

NOTE THAT the transforms themselves are written in c.

Jacopo Piccirillo, 13/10/2020
*/

int main()
{
    std::cout << "Hello World!\n";
    double *z;
    z = (double*)malloc(sizeof(double) * 8);
    //real signal ---> a value every 2 set to zero
    z[0] = 1.;
    z[1] = 0;
    z[2] = 2.;
    z[3] = 0;
    z[4] = 3.;
    z[5] = 0;
    z[6] = 4.;
    z[7] = 0;
    hilbert(z, 4); // perform hilbert transform of z
    for(int i=0; i<8; i++) // print transformed signal
        std::cout << z[i] << std::endl;
	std::free(z);

    /*NOTE THAT the phase shift of the Hilbert transform is 90 degrees and not - 90 as in MATLAB, 
    as you can check here https://it.mathworks.com/help/signal/ref/hilbert.html 
    To obtain matlab tranform multiply the output's component orthogonal to the input by 
	EXP(j * PI) = -1, which translates in mutiplying the output's imaginary part by -1 
	when the input is real.*/
}
