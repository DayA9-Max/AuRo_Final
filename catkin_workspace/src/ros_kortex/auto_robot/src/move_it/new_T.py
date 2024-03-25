import numpy as np

control_p1 = np.array([0.25,-0.25])
control_p2 = np.array([0.25,0.25])


print('enter p1 from cam:')
cam_p1 = np.array(input().split(' '), dtype=np.float32)

print('enter p2 from cam:')
cam_p2 = np.array(input().split(' '), dtype=np.float32)

print('new a1 (x, y): ')
x = control_p1[0] + cam_p1[1]; y = control_p1[1]-cam_p1[0]
print(x, y)

print('new a2 (x, y): ')
x = control_p2[0] + cam_p2[1]; y = control_p2[1]-cam_p2[0]
print(x, y)