clc;
clear all;
close all;
Eb=('Enter the energy per bit in joules');
No=('Enter the PSD of noise in micro watts/Hz');
x=0:0.001:(Eb/No);
Pe_bpsk=0.5*erfc(sqrt(x));
plot(x,Pe_bpsk);grid
xlabel('signal to noise ratio');
ylabel('probability of error Pe');
legend('Pe_bpsk' )