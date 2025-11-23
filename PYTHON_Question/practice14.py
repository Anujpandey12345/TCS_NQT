import pandas as pd
dis = {"a":[1, 2, 3, 4, 5], "b":[1, 2, 3, 4, 5], "c":[1, 2, 3, 4, 5], "d":[1, 2, 3, 4, 5]}
d = pd.DataFrame(dis)
print(d)
d.to_csv("test.csv")