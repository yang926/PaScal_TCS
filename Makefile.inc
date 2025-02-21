# Main compiler with MPI. Use mpiifort for intel MPI.
FC = mpiifort

# Complie flag

# For debugging
#FLAG = -O0 -g -fcheck=all --warn-all
#FLAG = -O0 -g -fPIC -check all -warn all -WB

# For moderate debugging
#FLAG = -O1 -fPIC -fp-model=precise -check bounds

# For optimized run 
#FLAG = -O3 -fPIC -fp-model=precise -xMIC-AVX512
#FLAG = -O3 -fPIC -fp-model=precise -xCORE-AVX2 -assume byterecl
FLAG = -O3 -fPIC -fp-model=precise 


