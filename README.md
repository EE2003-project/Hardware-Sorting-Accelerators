
# Introduction

This is our EE2003 project on Hardware Sorting Accelerators. This is a cleaned up version of our original repository which can be found [here](https://github.com/EE2003-project/Sorting-networks.git) and [here](https://github.com/EE2003-project/nanojpeg.git). We have implemented Brick Sort, Bitonic Sort with and without using recursion. Click here for the detailed project [report](https://drive.google.com/drive/folders/1EBq0m-4CsxQgkZqMKGYmDeAMVYCnmUF5?usp=sharing) and here for the [demo](https://drive.google.com/drive/folders/1EBq0m-4CsxQgkZqMKGYmDeAMVYCnmUF5?usp=sharing). 

# Files

### [Brick Sort](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/brick_sort_network)

Implementation of Brick Sort which runs in O(n) time

### [Bitonic Sort Network 1(recursive)](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/bitonic_network1)

Recursive implementaion of bitonic sort runs in O(log^2n) time. Not scalable

### [Bitonic Sort Network 2 (non recursive)](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/bitonic_network)

Scalable implementaion of bitonic sort runs in O(log^2n) time. 

### [generate.py](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/generate.py)

To generate random input numbers for testing

### input.mem and output.dump

For writing input and output 

### [sort_top.v](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/sort_top.v), [firmware/hello.c](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/firmware/hello.c) and [axi4_mem_periph.v](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/axi4_mem_periph.v)

Files for interfacing the sorting network accelerators with PicoRV32

# How to run?

- Clone the repository
- To select size of input array to be sorted, change LOG_INPUT_NUM paramater in [axi4_mem_periph.v](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/axi4_mem_periph.v). If LOG_INPUT_NUM=5, then size=32 etc. 
- To select the sorting algorithm, change ALGORITHM parameter in [axi4_mem_periph.v](https://git.ee2003.dev.iitm.ac.in/ee19b085/EE2003_Project/src/branch/master/axi4_mem_periph.v). ALGORITHM=1 for Brick Sort, 2 for Bitonic Network 1 and 3 for Bitonic Network 2. 
- To generate input numbers run python3 generate.py 5. This will generate 32 random input numbers write them into the sort.mem file
- Run make. You will see the size of array and few input numbers and output numbers on the screen along with other information such as number of clock cycles taken by the algorithm.

```
ee19b085@ee2003:~/EE2003_Project$ make
vvp -N testbench_mod.vvp
WARNING: axi4_mem_periph.v:81: $readmemh(input.mem): Too many words in the file for the requested range [0:8].
Reading input
size =32
Printing first 3 inputs 
number =366
number =162
number =601
Sorting in hardware
Sorted the data in 84 cycles.
Writing output
Printing first 3 outputs 
number =41
number =160
number =162

All done...

```

# Authors

- Jeffin Biju(EE19B085), Rohith Rongali(EE19B114), Rajdeep Paul(EE19B109)



