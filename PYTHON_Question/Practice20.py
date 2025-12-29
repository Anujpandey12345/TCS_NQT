import pandas as pd
# data = {
#     'Name' : ['Anuj', 'Arbaz', 'Rahul'],
#     'Marks1' : [90, 80, 17],
#     'Marks2' : [90, 70, 50],
#     'Marks3' : [99, 99, 99]
# }
# df = pd.DataFrame(data)

# df.to_csv("students.csv", index=False)
# print("csv file created successfully")

data = pd.read_csv("students.csv")
print("Avarage marks of the students")
for i in range(len(data)):
    name = data['Name'][i]
    marks = pd.Series([
        data['Marks1'][i],
        data['Marks2'][i],
        data['Marks3'][i]
    ])
    avg = marks.mean()

    print(name, ":", avg)
