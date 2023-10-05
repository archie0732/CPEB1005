# B - Short Sort


因為只有三種(a、b、c) 在排列

總共只有3!種樣式 

分別為:<br>
abc acb <br>
bac bca<br>
cab cba<br>


所以將所有的樣本進行分析，得:<br>
abc acb bac cba 能符合<br>
bac cab 不行<br>

故直接用字串分析是否符合:<br>
EX:<br>
if (string) a== "acb" ==>Yes<br>
else (string) a=="cab"==>No<br>


完整請見B - Short Sort.cpp
