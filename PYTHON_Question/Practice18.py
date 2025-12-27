import numpy as np
arr = np.array([[[1, 2],
                 [3, 4]],
                [[5, 6],
                 [7, 8]]])

print(np.diagonal(arr, axis1=1, axis2=2))