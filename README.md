# CPEB1005
#B - Short Sort


因為只有三種(a、b、c) 在排列

總共只有3!種樣式 

分別為
abc acb 
bac bca
cab cba


所以將所有的樣本進行分析，得:
abc acb bac cba 能符合
bac cab 不行

故直接用字串分析是否符合:
EX:
if (string) a== "acb" ==>Yes
else (string) a=="cab"==>No
