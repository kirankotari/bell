# Automated Bell System

This program is automated to ring the bell on the given time. It's an innovation project in C language which is done on the year of 2009. Reduce the intervention of the manual work and accuracy. 

# Purpose

Bringing an automation to reduce the manual work for basic repeatable needs and increasing the accuracy.

# Installation steps

- Exceucte the c language and generate an exe file.
- Remove interal speaker and connect a cable from internal speaker pin to bridge circuit. 
- Connect an 240w cable to the bridge circuit.
- Enter timings where the signal needs to generate in input.txt _note: same location where exe file exist_
- Write a small batch file on system startup which start the Bell Project or you can start the project manually in the moring.

# How it works

- The bell project reads the input timings given
- It waits until the system time and the given time matches
- On successful match it send a range of frequency signal to the bridge ciruit via system internal speaker
- Now the bridge circuit send the 240w of power the in bell based on the frequency reached to it.


# Authors
Automated bell system code was developed by [Kiran Kumar Kotari](https://github.com/kirankotari) with the help of mentor Prof. Ragava Reddy.
