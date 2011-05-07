#!/usr/bin/python3
# -*- coding: utf-8 -*-

import math

#img file must be in 4 indexed colors, 104*76, exported form gimp in .h
#onluy the section inside static char header_data[] = {...};

filename="player.txt"#"img_FFA.txt"
#palette_order if palette not in order of increasing value
palette_order=[0,1,2,3] #if good order
#palette_order=[1,2,0,3] #if palette like { 98, 98, 98},{164,164,164},{ 19, 19, 19},{243,243,243},
#when I read 0 in the file, it corresponds to palette_order[0]
print("Open img from file: "+filename)
file = open(filename, "r")
line=file.readline()
nbrpix=0
while line:
    colors=line.split(',')
    index=0#0 to 3
    pix=0
    for c in colors:
        if c!="\n" :
            pix+=palette_order[int(c)]*(4**index)
            index+=1;
            if index>3 :
                print(str(pix)+",",end='')
                index=0
                pix=0
                nbrpix+=1
        if (nbrpix==26):
            print("")
            nbrpix=0
    line=file.readline()
file.close()

