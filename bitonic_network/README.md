**Files implementing the bitonic sorting network**:
1. **sort.v** : Instantiates required no. of sort stages with intermediate wires
2. **sort_stage.v** : Instantiates the required number of *merge-blocks* in a stage
3. **bm.v** : Instantiates the required number of *merge-block channels* in a merge-block
4. **bm_chann.v** :Instantiates the required number of *merge-block channel units* in a merge-block channel
5. **bm_chann_unit.v** : Instantiates the required number of *CAE blocks* in each merge-block channel unit
6. **cae.v** : Implements compare and exchange unit

**Files for testing**:
1. **sort_tb.v**: testbench <br>
2. **generate.py**: generates random inputs <br>
3. **sort.mem**: store random inputs <br>
4. **instructions.txt**: instructions to test code <br>
5. *sort*: object file(ignore) <br> 
6. *test.vcd*: for waveform analysis <br>
</ol>
<br>

![8 input sorting network](/images/bitonic_network.png)
<br>
Only inputs of power-2 are allowed.<br>
<br>
Each n-input sorter has log<sub>2</sub>n *stages*, each *stage* indexed starting from 0 to log<sub>2</sub>n -1 . <br>
<br>
In each *stage* we have 2<sup>(log<sub>2</sub>n-stage_index-1)</sup> *merge-blocks* whose input is a [bitonic sequence](https://www.geeksforgeeks.org/bitonic-sort/) and output is an ASCENDING/DESCENDING sequence. The *merge-blocks* in each *stage* are alternatively ASCENDING/DESCENDING(indicated by arrows in the image) such that the next stage *merge-blocks* get a bitonic sequence as input.<br>
<br>
Each *merge-block* has *merge-block channels*(NUM_BM_CHANN) whose number is given by log<sub>2</sub>(*number of inputs given to the channel*) which in turn is equal to *stage_index*+1. 

![8 input sorting network](/images/bitonic_network_coloured.jpg)
<br>
<br>
Each *merge-block channel* further has *merge-block channel units*(as coloured in the above image) which finally boil down to CAE blocks.<br>
![CAE block](/images/cae.png)

