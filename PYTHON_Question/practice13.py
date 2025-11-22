import pandas as pd
std_data = [
    (1, 'Anuj', 22, 'Male', 'Kanpur'),
    (2, 'Aditya', 22, 'Male', 'Kanpur1')
]

df = pd.DataFrame(std_data, columns=['std_data', 'Name', 'Age', 'Gender', 'City'])
print(df)