# -*- coding: utf-8 -*-
"""
Created on Fri Feb 28 10:46:47 2025

@author: rmportel
"""

partLength = 550.0 # mm
partWidth = 260.0 # mm
partThickness = 2.5 # mm
partVolumeSI = partLength*partWidth*partThickness*0.001 # mm^3 -> ml

print(f"{" Part dimensions ":-^50}")
print(f"{'Part dimensions': <20} = {partLength: 4.2f} mm x {partWidth: 4.2f} mm x {partThickness: 4.2f} mm")
print(f'{'Part volume': <20} = {partVolumeSI: 4.2f} ml\n')

desired_fvf = 0.55
resin_amount = (1 - desired_fvf)*partVolumeSI # ml
print(f"{" Resin description ":-^50}")
print(f'{'Mixed resin amount': <20} = {resin_amount: 4.2f} ml')

ratio = 100 + 29 + 1.7
print(f'{'Resin amount': <20} = {resin_amount/ratio*100: 4.2f} ml or {resin_amount/ratio*100*1.19: 4.2f} g')
print(f'{'Curing agent amount': <20} = {resin_amount/ratio*29: 4.2f} ml or {resin_amount/ratio*29*0.97: 4.2f} g')
print(f'{'Additive amount': <20} = {resin_amount/ratio*1.7: 4.2f} ml or {resin_amount/ratio*1.7*1.05: 4.2f} g\n')


resin_amount *= 1.1 # 10% additional resin for manual mixing
print(f"{" Additional resin for manual mixing (10%) ":-^50}")
print(f'{'Mixed resin amount': <20} = {resin_amount: 4.2f} ml')

ratio = 100 + 29 + 1.7
print(f'{'Resin amount': <20} = {resin_amount/ratio*100: 4.2f} ml or {resin_amount/ratio*100*1.19: 4.2f} g')
print(f'{'Curing agent amount': <20} = {resin_amount/ratio*29: 4.2f} ml or {resin_amount/ratio*29*0.97: 4.2f} g')
print(f'{'Additive amount': <20} = {resin_amount/ratio*1.7: 4.2f} ml or {resin_amount/ratio*1.7*1.05: 4.2f} g\n')

area_SI = 260*550 # mm^2
area_in = area_SI/645.2 # in^2
pressure_bar = 20 
pressure_psi = pressure_bar*14.5038
print(f"{" Pressure calculation ":-^50}")
print(f'{'Force': <20} = {pressure_psi*area_in/1e3: 4.2f} lbf (tons)')
