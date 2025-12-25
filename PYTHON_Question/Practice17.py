import pandas as pd
import numpy as np

data = {'A': np.random.randint(1, 20, 10),
        'B': np.random.randint(10, 30, 10),
        'C': np.random.choice(['X', 'Y', 'Z'], 10)}
df = pd.DataFrame(data)
print(df)