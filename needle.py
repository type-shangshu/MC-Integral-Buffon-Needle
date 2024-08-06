# -*- coding: utf-8 -*-
"""
Created on Tue Mar 14 22:54:27 2023

@author: ljw
"""
import numpy as np
import matplotlib.pyplot as plt
a=2;l=1
fig,ax=plt.subplots()
ax.plot([-4,4],[-a/2]*2,"b")
ax.plot([-4,4],[a/2]*2,"b")
ax.plot([-4,4],[3*a/2]*2,"b")
ax.set_ylim([-5,5])
n=20000000
cnt=0
bit=int(input())
for i in range(n):
    y=np.random.randint(0,np.power(2,bit))
    y=float(y/np.power(2,bit))
    theta=np.random.randint(0,np.power(2,bit))
    theta=float(theta/np.power(2,bit))*np.pi
    ys=y+1/2*np.sin(theta)
    yx=y-1/2*np.sin(theta)
    if (y> a/2 and yx<a/2) or (y<a/2 and ys> a/2) :
        cnt+=1
result=n/cnt
'''
y=np.random.random(size=(n))*a
y=y>>bit
y=y<<bit
theta=np.random.random(size=(n))*(np.pi)
theta=theta>>bit
theta=theta<<bit
ys=y+l/2*np.sin(theta)
yx=y-l/2*np.sin(theta)

x=np.random.uniform(low=-4,high=4,size=(n))
def flag(y,ys,yx):
    return (y>a/2 and yx<a/2) or (y<a/2 and ys>a/2)
flag=np.vectorize(flag)
f=flag(y,ys,yx)
result=n/np.sum(flag(y,ys,yx))
'''
err=10*abs(np.log(abs(np.pi-result)/np.pi))/np.log(10)
print("err=%.3fdB"%err)
print(bit)
print("result=%.5f"%result)