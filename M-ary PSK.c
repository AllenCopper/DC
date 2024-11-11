clc;
clear all;
close all;
Eb=input('Enter the Energy per bit in Joules:');
No=input('Enter the PSD of Noise in micro watts/hz:');
M=input('Enter the number of symbol:');
x=0:0.001:(Eb/No);
Pe_Marypsk=erfc(sqrt(x).*sind(180/M));
plot(x,Pe_Marypsk);grid
xlabel('Signal-to-Noise Ratio (Eb/No)');
ylabel('Probablity of Error Pe');
legend('Pe_Marypsk')
