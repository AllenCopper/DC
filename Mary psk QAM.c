clc;
clear all;
close all;
Eb=input('Enter the energy per bit in joules:');
No=input('Enter the PSD of noise in micro watts/Hz:');
M=input('Enter the number of symbols:');
x=0:0.0001:(Eb/No);
Pe_qam=0.5*erfc(sqrt(0.4*x));
plot(x,Pe_qam);grid
xlabel('signal to noise ratio(Eb/No)');
ylabel('Probablity of error Pe');
legend('Pe_qam')clc;
