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
![CAE block](/images/cae.png)

