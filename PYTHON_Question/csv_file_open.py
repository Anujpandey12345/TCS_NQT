import pandas as pd

# # values must be sequences of equal length to form rows
# dis = {"name": ["Anuj"], "Age": [12], "Sex": ["Male"]}

# d = pd.DataFrame(dis)

# # Write CSV without the default index column
# d.to_csv("test1.csv", index=False)




d = pd.read_csv("test1.csv")
print(d)