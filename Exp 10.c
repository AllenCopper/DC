clc;
clear all;
m=[1001];
p=[111;011;101;110]
k=length(m);
l=eye(k,k);
disp(I);
G=[p I];
disp("Generation matrix is:")
disp(G);
C=modulo(m*G,2);
n=length(C);
disp("code word is:")
disp(C)
r=[1 0 1 1 0 0 1];
I=eye(n-k,n-k);
H=(p'l);
disp(H);
s=modulo(r*H'2);
disp(s);
HT=H';
if(s==0)
disp('correct');
else
disp('recived code vector with error');
for i=1:n;
if(s==HT(i,:))
e=[zeros(1,i-1)1 zeros(1,n-i)];
end
end
disp('correct code word is');
CC=modulo(r+e,2);
disp(CC);