# Smithsonians_Discrete_Hilbert_Fourier_Hartley_Transforms
 An implementation from the Smithsonian Astrophysical Observatory of some notorious transforms ready to use in c/c++

### CAREFULLY READ COMMENTS OF THE AUTHORS ABOVE THEIR FUNCTIONS IN "transforms.h" BEFORE USING THEM.

I did not write those functions, the Smithsonian Astrophysical Observatory did. 
I just isolated the references for the transforms from a much bigger project
([https://www.cfa.harvard.edu/~spaine/am/](https://www.cfa.harvard.edu/~spaine/am/)) and provided an example on how to use them in c++.

### NOTE THAT
the transforms themselves are written in c. 

### NOTE THAT 
the phase shift of the Hilbert transform is 90 degrees and not - 90 as in MATLAB, 
as you can check [here](https://it.mathworks.com/help/signal/ref/hilbert.html), comparing the result with the main_example.cpp output.
To obtain matlab tranform multiply the output's component orthogonal to the input result by EXP(j * PI) = -1, which translates in mutiplying the output's imaginary part 
by -1 when the input is real.

Jacopo Piccirillo, 13/10/2020
