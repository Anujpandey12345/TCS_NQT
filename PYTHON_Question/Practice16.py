import pandas as pd

df = pd.DataFrame({
    "A": ['Tom', 'Nick', 'John', 'Peter'],
    "B": [15, 26, 17, 28]
})
res = df.rename(columns={"A": "Col_1", "B": "Col_2"},
                index={0: "Row_1", 1: "Row_2", 2: "Row_3", 3: "Row_4"})
print(res)